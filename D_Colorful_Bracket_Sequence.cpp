#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    string s;
    cin>>s;
    stack<int>st;
    for(auto& it:s)
    {
        if(it=='(' || it=='[' || it=='<')
        {
            st.push(it);
        }
        else
        {
            if(st.empty())
            {
                cout<<"No"<<endl;
                return;
            }
            auto tp=st.top();
            st.pop();
            if((it==')' && tp!='(') || (it==']' && tp!='[') || (it=='>') && tp!='<')
            {
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<(st.empty()?"Yes":"No");
}
signed main()
{
    sol();
    return 0;
}