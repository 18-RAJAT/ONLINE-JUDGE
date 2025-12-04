#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int a=0,b=((1<<9)<<1)-1;
    for(int i=0;i<n;++i)
    {
        char c;
        cin>>c;
        int x;
        cin>>x;
        if(c=='&'){a&=x,b&=x;}
        if(c=='^'){a^=x,b^=x;}
        if(c=='|'){a|=x,b|=x;}
    }
    cout<<2<<endl;
    cout<<"& "<<(a^b)<<endl;
    cout<<"^ "<<a<<endl;
}
signed main()
{
    sol();
    return 0;
}