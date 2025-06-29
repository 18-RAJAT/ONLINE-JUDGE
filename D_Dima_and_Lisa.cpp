#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    auto Prime=[&](int x)
    {
        if(x<2)return 0;
        for(int i=2;i*i<=x;++i)if(x%i==0)return 0;
        return 1;
    };
    if(Prime(n))cout<<1<<endl<<n<<endl;
    else
    {
        int l=max(2LL,n-500);
        for(int i=n;i>=l;--i)
        {
            if(Prime(i))
            {
                for(int j=n-i;j>=2;--j)
                {
                    if(Prime(j) && Prime(n-i-j))
                    {
                        cout<<3<<endl<<i<<" "<<j<<" "<<n-i-j<<endl;
                        return;
                    }
                }
            }
        }
    }
}
signed main()
{
    sol();
    return 0;
}