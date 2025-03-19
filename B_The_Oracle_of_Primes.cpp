#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>ar;
bitset<100010>b;
void sol()
{
    int n;
    cin>>n;
    cout<<*lower_bound(ar.begin(),ar.end(),n)<<endl;
}
signed main()
{
    b[0]=b[1]=1;
    for(int i=2;i*i<=100010;++i)if(!b[i])for(int j=i*i;j<=100010;j+=i)b[j]=1;
    for(int i=2;i<=100010;++i)if(!b[i])ar.push_back(i);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}