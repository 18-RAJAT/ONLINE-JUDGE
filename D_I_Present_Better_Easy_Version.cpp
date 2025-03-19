#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>ar(n);
    for(int i=0;i<n;++i)cin>>ar[i];
    vector<int>l(n+1,0),r(n+1,0);
    for(int i=1;i<=n;++i)
    {
        l[i]=l[i-1]+(ar[i-1]<a),r[i]=r[i-1]+(ar[i-1]<b);
    }
    vector<int>A(n+1),B(n+1);
    for(int i=0;i<=n;++i)
    {
        // cout<<"P-> "<<l[i*2]<<" ";
        A[i]=2*l[i]-i,B[i]=2*r[i]-i;
    }
    int Ba=(a<b)?1:(a>b?-1:0),Ab=-Ba,ans=0;
    for(int i=0;i<=n;++i)
    {
        for(int j=0;j<=n;++j)
        {
            // cout<<A[i]<<" \n"<<B[j]<<" ";
            if(i<j)
            {
                if(A[i]>B[j]+Ba)ans++;
            }
            else if(i>j)
            {
                if(A[i]+Ab>B[j])ans++;
            }
            else
            {
                if(A[i]>B[i]+Ba)ans++;
                if(A[i]+Ab>B[i])ans++;
            }
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    sol();
    return 0;
}