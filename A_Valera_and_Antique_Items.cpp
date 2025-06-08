#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,k;
    cin>>n>>k;
    set<int>st;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        while(x--)
        {
            int p;
            cin>>p;
            if(p<k)st.insert(i+1);
        }
    }
    cout<<st.size()<<endl;
    for(auto& it:st)cout<<it<<" ";
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}