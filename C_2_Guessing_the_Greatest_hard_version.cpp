#include<bits/stdc++.h>
using namespace std;
#define int long long
int query(int l,int r)
{
    cout<<"? "<<l<<" "<<r<<endl;
    cout.flush();
    int x;
    cin>>x;
    return x;
}
void sol()
{
    int n;
    cin>>n;
    int low=1,high=n,x=query(low,high);
    while(low<high)
    {
        int mid=low+(high-low)/2;
        if(x<=mid)
        {
            if(1<mid)
            {
                int y=query(1,mid);
                (x==y)?high=mid:low=mid+1;
            }
            else low=mid+1;
        }
        else
        {
            if(mid+1<n)
            {
                int y=query(mid+1,n);
                (x==y)?low=mid+1:high=mid;
            }
            else high=mid;
        }
    }
    cout<<"! "<<low<<endl;
}
signed main()
{
    sol();
    return 0;
}