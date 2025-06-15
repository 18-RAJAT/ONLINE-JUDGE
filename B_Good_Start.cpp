#include<bits/stdc++.h>
using namespace std;
#define int long long
int recur(int x,int m)
{
    int r=x%m;
    return r<0?r+m:r;
}
void sol()
{
    int w,h,a,b;
    cin>>w>>h>>a>>b;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int X1=recur(x1,a),X2=recur(x2,a);
    int Y1=recur(y1,b),Y2=recur(y2,b);
    int chk1=(X1==X2),chk2=(Y1==Y2);
    bool ans=(chk1 && (x1!=x2 || chk2)) || (chk2 && (y1!=y2 || chk1));
    cout<<(ans?"Yes":"No")<<endl;
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