#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    set<int>s={1,2,3};
    vector<int>a(s.begin(),s.end());
    int ans;
    do
    {
        cout<<"? "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        cin>>ans;
        if(ans==-1)return;
        if(ans!=0)
        {
            s.erase(next(s.begin(),rand()%3));
            s.insert(ans);
            a.assign(s.begin(),s.end());
        }
    }while(ans!=0);
    vector<int>ar(s.begin(),s.end());
    cout<<"! "<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<endl;
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