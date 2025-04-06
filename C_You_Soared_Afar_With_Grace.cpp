#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int>a,b,Ar,Br;
vector<array<int,2>>ans;
void recur(int i,int j)
{
    if(i==j)return;
    ans.push_back({i+1,j+1});
    swap(a[i],a[j]);
    swap(b[i],b[j]);
    swap(Ar[a[i]],Ar[a[j]]);
    swap(Br[b[i]],Br[b[j]]);
}
void sol()
{
    int n;
    cin>>n;
    a=vector<int>(n),b=vector<int>(n),Ar=vector<int>(n),Br=vector<int>(n);
    for(int i=0;i<n;++i)cin>>a[i],a[i]--,Ar[a[i]]=i;
    for(int i=0;i<n;++i)cin>>b[i],b[i]--,Br[b[i]]=i;
    ans.clear();
    int cnt=0;
    for(;cnt<n-1-cnt;)
    {
        if(a[cnt]==b[cnt])
        {
            if(n%2==0 || a[n/2]==b[n/2])
            {
                cout<<"-1"<<endl;
                return;
            }
            recur(cnt,n/2);
        }
        else
        {
            if(Ar[b[cnt]]!=Br[a[cnt]])
            {
                cout<<"-1"<<endl;
                return;
            }
            recur(n-1-cnt,Ar[b[cnt]]);
            cnt++;
        }
    }
    cout<<ans.size()<<endl;
    for(auto& it:ans)cout<<it[0]<<" "<<it[1]<<endl;
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}