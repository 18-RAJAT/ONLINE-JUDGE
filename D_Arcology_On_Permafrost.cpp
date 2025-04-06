#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    if(n<=m*k)
    {
        cout<<"-1"<<endl;
        return;
    }
    int c=n/(m+1);
	if(c<k)c=k;
    for(int i=0;i<n;++i)
	{
	    cout<<i%c;
	    if(i!=n-1)cout<<" ";
	    else cout<<endl;
	}
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