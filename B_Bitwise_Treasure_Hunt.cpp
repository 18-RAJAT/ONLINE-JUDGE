#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    bitset<64>bit(n);
    set<int>st;
    for(int i=0;i<64;++i)
    {
        if(bit[i])
        {
            for(;i<64 && bit[i];++i)bit[i]=0;   
            n=bit.to_ullong();
        }
        st.insert(n);
    }
    cout<<st.size()<<endl;
    for(auto& it:st)cout<<it<<" ";
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