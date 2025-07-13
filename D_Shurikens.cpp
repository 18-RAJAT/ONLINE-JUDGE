#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    int N=2*n;
    vector<int>a(N);
    for(int i=0;i<N;++i)
    {
        char ch;
        cin>>ch;
        if(ch=='+')a[i]=-1;
        else cin>>a[i];
    }
    set<int>s;
    vector<int>ar;
    int ok=1;
    for(int i=N-1;~i;--i)
    {
        if(a[i]<0)
        {
            if(s.empty())
            {
                ok=0;
                break;
            }
            ar.push_back(*s.begin());
            s.erase(s.begin());
        }
        else
        {
            if(!s.empty() && a[i]>*s.begin() && ~a[i])
            {
                ok=0;
                break;
            }
            s.insert(a[i]);
        }
    }
    if(!ok)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=n-1;~i;--i)cout<<ar[i]<<" ";
        cout<<endl;
    }
}
signed main()
{
    sol();
    return 0;
}