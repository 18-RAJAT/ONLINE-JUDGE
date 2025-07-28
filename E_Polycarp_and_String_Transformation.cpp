#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    int n=s.size();
    map<char,int>mp;
    string st="";
    for(int i=n-1;~i;--i)
    {
        if(mp[s[i]]==0)
        {
            st+=s[i];
            mp[s[i]]++;
        }
        else mp[s[i]]++;
    }
    reverse(st.begin(),st.end());
    int ok=1;
    map<char,int>chk;
    for(int i=0;i<st.size();++i)
    {
        int k=i+1;
        if(mp[st[i]]%k)
        {
            ok=0;
            break;
        }
        else chk[st[i]]=mp[st[i]]/k;
    }
    if(!ok)cout<<"-1"<<endl;
    else
    {
        int res=0;
        for(auto& it:st)res+=chk[it];
        string tmp=string(s.begin(),s.begin()+res),ans=tmp,t1="";
        t1+=tmp;
        for(auto& it:st)
        {
            string t2="";
            for(auto& it1:tmp)
            {
                if(it==it1)continue;
                else t2+=it1;
            }
            t1+=t2,tmp=t2;
        }
        if(s!=t1)cout<<"-1"<<endl;
        else cout<<ans<<" "<<st<<endl;
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