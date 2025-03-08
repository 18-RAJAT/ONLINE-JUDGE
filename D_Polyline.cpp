#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if((x1==x2 && x2==x3) || (y1==y2 && y2==y3) || (x1==x3 && x3==x2) || (y1==y3 && y3==y2))cout<<1;
    else if(x1==x2 && (y3-y1)*(y3-y2)>=0)cout<<2;
    else if(y1==y2 && (x3-x1)*(x3-x2)>=0)cout<<2;
    else if(x1==x3 && (y2-y1)*(y2-y3)>=0)cout<<2;
    else if(y1==y3 && (x2-x1)*(x2-x3)>=0)cout<<2;
    else if(x2==x3 && (y1-y2)*(y1-y3)>=0)cout<<2;
    else if(y2==y3 && (x1-x3)*(x1-x2)>=0)cout<<2;
    else cout<<3;
}
signed main()
{
    sol();
    return 0;
}