#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<int>a(n);
	for(int i=0;i<n;++i)a[i]=(s[i]=='1');
	int cnt=0;
	for(int i=0;i<n;++i)if(a[i]==1)cnt++;
    cout<<(count(s.begin(),s.end(),'1')<=k || n<2*k?"Alice":"Bob")<<endl;
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