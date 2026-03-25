#include"bits/stdc++.h"
using namespace std;
#define int long long
int ask(int i,int j)
{
    cout<<"? "<<i<<" "<<j<<endl;
    int x;
    cin>>x;
    if(x==-1)exit(0);
    return x;
}
void sol()
{
    int n;
    cin>>n;
    if(ask(1,2)==1)
    {
        cout<<"! 1"<<endl;
        return;
    }
    if(ask(2,3)==1)
    {
        cout<<"! 2"<<endl;
        return;
    }
    if(ask(3,1)==1)
    {
        cout<<"! 3"<<endl;
        return;
    }
    for(int i=4;i<2*n;i+=2)
    {
        if(ask(i,i+1)==1)
        {
            cout<<"! "<<i<<endl;
            return;
        }
    }
    cout<<"! "<<2*n<<endl;
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