#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string a,b;
    cin>>a>>b;
    vector<int>ar(26),br(26);
    for(auto& it:a)ar[it-'a']++;
    for(auto& it:b)br[it-'a']++;
    for(int i=0;i<26;++i)
    {
        if(ar[i]<br[i])
        {
            cout<<"need tree";
            return;
        }
    }
    if(ar==br)
    {
        cout<<"array";
        return;
    }
    int i=0;
    string x;
    for(int j=0;j<b.size();++j)
    {
        while(i<a.size() && a[i]!=b[j])i++;
        if(i<a.size())
        {
            x+=a[i];i++;
        }
    }
    if(x==b)
    {
        cout<<"automaton";
        return;
    }
    cout<<"both"<<endl;
}
signed main()
{
    sol();
    return 0;
}