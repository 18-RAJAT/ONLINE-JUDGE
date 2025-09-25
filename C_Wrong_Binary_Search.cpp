#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a(n);
    for(int i=0;i<n;++i)
    {
        (s[i]=='1')?a[i]=i+1:a[i]=0;
    }
    int ok=1;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='0')
        {
            int l=i,r=i-1;
            while(i<n && s[i]=='0')i++;
            if(r-l==0)
            {
                ok=0;
                break;
            }
            for(int j=l;j<r;++j)a[j]=j+2;
            a[r]=l+1;
        }
    }
    if(!ok)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(auto& it:a)cout<<it<<" ";
        cout<<endl;
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