#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
	int n;
	cin>>n;
    int ans=0;
	for(int i=0;i<n;++i)
    {
        int x;
		cin>>x;
		(x==0?ans++:ans+=x);
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