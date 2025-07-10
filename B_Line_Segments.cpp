#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
	int n;
	cin>>n;
	long double sx,sy,tx,ty;
	cin>>sx>>sy>>tx>>ty;
	auto dist=[&](long double x1,long double y1,long double x2,long double y2)
    {
		long double dx=abs(x1-x2),dy=abs(y1-y2);
		return sqrt(dx*dx+dy*dy);
	};
	long double d=dist(sx,sy,tx,ty);
	vector<long double>v(n);
	for(int i=0;i<n;++i)cin>>v[i];
	if(n==1)cout<<(v[0]==d?"Yes":"No")<<endl;
	else
	{
		v.push_back(d);
		sort(v.begin(),v.end());
		long double sum=0;
		for(int i=0;i+1<v.size();++i)sum+=v[i];
		cout<<(sum>=v.back()?"Yes":"No")<<endl;
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