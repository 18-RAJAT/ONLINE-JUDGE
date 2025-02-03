#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n*m),b(n*m);
    for(int i=0;i<n*m;++i)cin>>a[i];
    for(int i=0;i<n*m;++i)cin>>b[i];
    vector<int>temp=a;
    a=b,b=temp;
    int ans=0,cnt=0;
    for(int i=0;i<n;++i)
    {
        int j=0,ok,val=0;
        do
        {
            int pos=i*m+j,ele=pos+1;
            if(ans==j)ele=m*(i+1);
            ok=1,val=ele-pos;
            //minimize or range->>a[pos] to a[pos+val-1] with the range b[cnt] to b[cnt+val-1]....
            ok&=equal(a.begin()+pos,a.begin()+pos+val,b.begin()+cnt) && (find(a.begin()+pos,a.begin()+pos+val,0LL)==a.begin()+pos+val);
            assert(j<=ans);
            (!ok)?ans++:cnt+=val;
            if(j==ans)break;
            j++;
        }while(j<m && j<=ans);
    }
    cout<<ans<<endl;
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