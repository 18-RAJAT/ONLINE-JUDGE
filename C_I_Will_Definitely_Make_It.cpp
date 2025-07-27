#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;++i)cin>>a[i];
	k--;
	int cur=a[k],ok=1;
	sort(a.begin(),a.end());
	for(int i=0;i<n;++i)
	{
		if(cur<a[i])
		{
			int d=a[i]-cur;
			if(cur-ok+1>=d)
			{
				cur=a[i];
				ok+=d;
			}
		}
	}
	cout<<(cur==a.back()?"YES":"NO")<<endl;
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