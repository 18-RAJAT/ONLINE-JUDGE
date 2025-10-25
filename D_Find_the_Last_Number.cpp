#include"bits/stdc++.h"
using namespace std;
#define int long long
void sol()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=1;i<=n;++i)a.push_back(i);
    for(int i=1;i<n;++i)
    {
        int x=0,y=-1;
        for(int j=0;j<20;++j)
        {
            int cnt=0;
            for(auto& it:a)if(it&(1<<j))cnt++;
            if(cnt>0 && cnt<a.size())
            {
                x=(1<<j),y=j;
                break;
            }
        }
        if(y==-1)x=1,y=0;
        int x1=0,y1=-1;
        for(int j=y+1;j<20;++j)
        {
            int cnt=0;
            for(auto& it:a)if(it&(1<<j))cnt++;
            if(cnt>0 && cnt<a.size())
            {
                x1=(1<<j),y1=j;
                break;
            }
        }
        if(y1==-1)
        {
            for(int j=0;j<y;++j)
            {
                int cnt=0;
                for(auto& it:a)if(it&(1<<j))cnt++;
                if(cnt>0 && cnt<a.size())
                {
                    x1=(1<<j),y1=j;
                    break;
                }
            }
            if(y1==-1)x1=x;
        }
        cout<<"? "<<i<<" "<<x<<endl;
        cout.flush();
        int b1;
        cin>>b1;
        if(b1==-1)return;
        cout<<"? "<<i<<" "<<x1<<endl;
        cout.flush();
        int b2;
        cin>>b2;
        if(b2==-1)return;
        int ans=-1;
        for(auto& it:a)
        {
            int c1=(it&x)?1:0,c2=(it&x1)?1:0;
            if(c1==b1 && c2==b2)
            {
                if(ans==-1)ans=it;
            }
        }
        if(ans==-1)ans=a[0];
        vector<int>b;
        for(auto& it:a)if(it!=ans)b.push_back(it);
        a=b;
    }
    cout<<"! "<<a[0]<<endl;
    cout.flush();
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