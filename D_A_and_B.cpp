#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int A=0,B=0;
    int a=count(s.begin(),s.end(),'a'),b=count(s.begin(),s.end(),'b');
    if(a==0 || b==0)
    {
        cout<<0<<endl;
        return;
    }
    int ca=0,cb=0;
    for(int i=0;i<n;++i)
    {
        A+=(s[i]=='a'),B+=(s[i]=='b');
        (s[i]=='b')?ca+=min(A,a-A):cb+=min(B,b-B);
    }
    cout<<min(ca,cb)<<endl;
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