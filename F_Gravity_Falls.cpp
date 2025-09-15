#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    set<vector<int>>st;
    int mx=0;
    for(int i=0;i<n;++i)
    {
        int k;
        cin>>k;
        mx=max(mx,k);
        vector<int>v(k);
        for(int j=0;j<k;++j)cin>>v[j];
        st.insert(v);
    }
    vector<int>ans;
    while(ans.size()<mx)
    {
        auto it=*st.begin();
        int sz=it.size();
        for(int i=0;i<sz;++i)ans.push_back(it[i]);
        set<vector<int>>st1;
        for(auto& j:st)
        {
            if(j.size()<=sz)continue;
            vector<int>v2(j.begin()+sz,j.end());
            st1.insert(v2);
        }
        st.swap(st1);
    }
    for(int i=0;i<ans.size();++i)
    {
        if(i)cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;
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