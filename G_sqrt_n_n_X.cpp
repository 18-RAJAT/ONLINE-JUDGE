#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x;
    cin>>x;
    vector<int>a;
    int tmp=4*x-1,dif=abs(tmp);
    // cout<<tmp<<" ";//last
    for(int i=1;i*i<=dif;i+=2)
    {
        if(dif%i==0)
        {
            a.push_back(i);
            int j=dif/i;
            if(i!=j)a.push_back(j);
        }
    }
    vector<int>ans;
    for(auto& it:a)
    {
        for(auto& it1:{1,-1})
        {
            int tot=it*it1;            
            if(tot==0)continue; 
            if(tmp%tot!=0)continue;
            int div=tmp/tot;
            if(((tot+div)&3)!=0)continue;
            int n=(div-tot-2)/4;
            ans.push_back(n);
        }
    }
    sort(ans.begin(),ans.end());
    vector<int>res;
    for(auto& it:ans)
    {
        if(res.empty() || res.back()!=it)res.push_back(it);
    }
    ans.swap(res);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();++i)
    {
        if(i)cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;
}
signed main()
{
    sol();
    return 0;
}