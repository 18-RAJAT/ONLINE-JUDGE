#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    array<array<int,2>,3>ar;
    for(auto& it:ar)cin>>it[0]>>it[1];
    int tot=0;
    for(auto& it:ar)tot+=it[0]*it[1];
    int S=sqrt(tot);
    if(S*S!=tot)
    {
        cout<<"NO"<<endl;
        return;
    }
    int ok=0;
    array<int,3>id={0,1,2};
    sort(id.begin(),id.end());
    do
    {
        auto& a=ar[id[0]],&b=ar[id[1]],&c=ar[id[2]];
        if(a[0]==S && b[0]==S && c[0]==S && a[1]+b[1]+c[1]==S){ok=1;break;}
        if(a[1]==S && b[1]==S && c[1]==S && a[0]+b[0]+c[0]==S){ok=1;break;}
        if(a[1]==b[1] && a[0]+b[0]==S && a[1]+c[1]==S && c[0]==S){ok=1;break;}
        if(a[0]==b[0] && a[1]+b[1]==S && a[0]+c[0]==S && c[1]==S){ok=1;break;}
    }while(next_permutation(id.begin(),id.end()));
    cout<<(ok?"YES":"NO")<<endl;
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