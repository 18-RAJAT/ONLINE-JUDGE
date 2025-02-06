#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int n=s.size();
    s=" "+s;
	int q;
	cin>>q;
	int ans=0;
    auto calc=[&](int i)->bool
    {
        return (s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0');
    };
	for(int i=1;i<=n;++i)if(i+3<=n)ans+=calc(i);
	while(q--)
	{
		int x,y;
		cin>>x>>y;
        int mx=max<int>(1,x-3);
		for(int i=mx;i<=x+3;++i)
		{
			if(i+3<=n)ans-=calc(i);
		}
		s[x]=y+'0';
		for(int i=mx;i<=x+3;++i)
		{
			if(i+3<=n)ans+=calc(i);
		}
		cout<<(ans>=1?"YES":"NO")<<endl;
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