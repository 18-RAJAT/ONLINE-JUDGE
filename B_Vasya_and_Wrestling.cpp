#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>first,second;
    int FirstSum=0,SecondSum=0,ok=0;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            first.push_back(x);
            FirstSum+=x,ok=1;
        }
        else
        {
            second.push_back(-x);
            SecondSum-=x,ok=0;
        }
    }
    if(FirstSum!=SecondSum)
    {
        cout<<(FirstSum>SecondSum?"first":"second");
        return;
    }
    if(first!=second)
    {
        cout<<(first>second?"first":"second");
        return;
    }
    cout<<(ok?"first":"second");
}
signed main()
{
    sol();
    return 0;
}