#include <bits/stdc++.h>
using namespace std;
 
 
#define ar array
#define ll long long
#define sza(x) ((int)x.size())
#define all(x) x.begin(), x.end()
#define revall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
 
const int MAX_N = 2e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define revall(x) x.rbegin(), x.rend()
#define ALL(x) sort(x.begin(), x.end())
#define sortall(x) sort(all(x))
#define reverseall(x) reverse(all(x))
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A  and  A <= C)
#define MP make_pair
#define PB push_back
#define PF push_front
#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
const double pi=acos(-1.0);
#define ll long long
typedef pair<long,long> PII;
typedef vector<int> VI;
typedef vector<vector<ll>> VII;
typedef vector<pair<int,int>>VPII;
typedef vector<string> VS;
typedef vector<PII> VIII;
typedef vector<VI> VVI;
typedef queue<string> QS;
typedef map<int,int> MPII;
typedef set<long long> SETI;
typedef multiset<int> MSETI;
typedef priority_queue<pair<int,int>> PQPII;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
#define ff(a,b) for(int i=a;i<b;i++)
#define nl endl
 
 
/* clang-format off */
 
/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define vd vector<double>
#define mii map<long,long>
#define MPC map<char,int> 
#define miid map<double,long>
#define si set<int>
#define sc set<char>
#define vi vector<int>
 
/* FUNCTIONS */
#define f1(i,s,e) for(long long int i=s;i<e;i++)
#define ff1(i,s,e) for(long long int i=s;i>=e;--i)
#define For1(i,n) or(long long int i=0;i<n+1;++i)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define FO(i,s,e) for(long long int i=1;i*i<=y;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pass(a)  for(long long int i=n-1;i>=1;i-=2)
#define pb push_back
#define eb emplace_back
 
/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
 
/* UTILS */
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a'  and  a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A'  and  a[i]<='Z') a[i]+='a'-'A'; return a; }
 
 
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
 
 
 
 
/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
 
bool isprime(ll n)
{
    ll x=sqrt(n);
    for(int i=2;i<=x;i++)
    {if(n%i==0)return true;}
    return false;
}
 
 
bool cmp(pair<int,int>x,pair<int,int>y){
    return x.second<y.second;
}
 
 
void two_D_PrifixSum() 
{
    //prefix sum in 2 D array
    int n,m;cin>>n>>m;
    int a[n][m],prefix[n][m];
    f1(i,0,n)
    {
        f1(j,0,m)
        {
            cin>>a[i][j];
        }
    }
 
    //create a prefix array
    f1(i,0,n)
    {
        f1(j,0,m)
        {
            prefix[i][j]=a[i][j];
            if(i-1>=0)prefix[i][j]+=prefix[i-1][j];
            if(j-1>=0)prefix[i][j]+=prefix[i][j-1];
 
            if(i-1>=0 and j-1>=0)
            {
                prefix[i][j]-=prefix[i-1][j-1];
            }
        }
    }
    int q;cin>>q;
    while(q--)
    {
        int i1,i2,j1,j2;cin>>i1>>i2>>j1>>j2;
    }
}
 
 
//Scanline algorithm
void scanlineAlgoritm()
{
    int n;cin>>n;
    int a[n];
    f1(i,0,n)cin>>a[i];
 
    int prefixSum[n+1];
    int q;cin>>q;
    while(q--)
    {
        int l,r,x;cin>>l>>r>>x;
        prefixSum[l]+=x;
        prefixSum[r+1]-=x;
    }
    int s=0;
    f1(i,0,n)
    {
        s+=prefixSum[i];
        a[i]+=s;
    }
    f1(i,0,n)cout<<a[i]<<" ";
}


int solve()
{
   //  int n;cin>>n;
   // if(3*n/3==1){cout<<0<<nl;}
   // else if(3*n/3>=2){cout<<n<<nl;}
   // else{cout<<0<<nl;}

    //n/2=4/2=2 2*2=4 pf=4
    //a=1,1%2!=0 pf=0
    // cin>>n;
    // if(n%2==1){cout<<0;}
    // else
    // {   
    //     temp=1;
    //     cf(i,1,n/2)temp*=2;
    //     cout<<temp;
    // }
    // else temp=0;
    // cout<<temp;
    // int n,even=0,odd=0;cin>>n;int a[n];
    // f1(i,0,n)
    // {
    //     cin>>a[i];
    //     if(a[i]%2==0)even++;else odd++;
    // }

    // if(even%2==0)cout<<"YES"<<nl;
    // else
    // {
    //     int f=0;sort(a,a+n);
    //     f1(i,0,n-1){if(a[i+1]-a[i]==1){f++;break;}}
    //     if(f>0){cout<<"YES"<<nl;}
    //     else{cout<<"NO"<<nl;}
    // }
    // int n;cin>>n;
    // VI a(n);
    // f1(i,0,n)cin>>a[i];
    // sort(all(a));
    // int m=n/2;
    // f1(i,0,m)
    // {
    //     cout<<a[n-i-1]<<" "<<a[0]<<nl;
    // }
///
    // ll a,b,x,y,n;cin>>a>>b>>x>>y>>n;
    // ll t1,t2,t3,t4;
    // ll p=a-x;ll q=b-y;

    // ll min1=min(p,n);
    // ll min2=min(q,n-min1);
    // ll min3=min(q,n);
    // ll min4=min(p,n-min3);

    // cout<<min((a-min1)*(b-min2),(a-min4)*(b-min2))<<nl;
///
    // int n;cin>>n;
    // int tp=-1,counter=0,zero=0,one=0;
    // f1(i,0,n)
    // {
    //     int m;cin>>m;
    //     if(m==0)zero++;else{one++;zero--;}
    //     if(zero>tp)tp=zero;
    //     if(zero<0)zero=0;
    // }
    //     cout<<tp+one<<nl;

    // VI a(n);
    // f1(i,0,n)cin>>a[i];
    // // sort(a,a+1);
    // int res=-1;f1(i,0,n)
    // if(a[i]!=i)res=res&a[i];cout<<res<<nl;

    ll n,x,temp,sum=0;cin>>n>>x;
    // f1(i,0,n)
    cf(i,1,n-1)
    {
        cin>>temp;
        if((x>0 and temp>0) or(x<0 and temp<0)){x=max(temp,x);}
        else{sum+=x;x=temp;}
    }
    sum+=x;cout<<sum<<nl;
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {;
        // cout << "Case #" << t << ": ";
       solve();
    }
    return 0;
}