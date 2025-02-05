#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int>ar(n+1,0),br(n+1,0);
    for(int i=1;i<=n;++i)
    {
        int d=s[i-1]-'0';
        ar[i]=ar[i-1],br[i]=br[i-1];
        (i%2)?ar[i]+=d:br[i]+=d;
    }
    int ec0=0,ec1=0,ec2=0,oc0=0,oc1=0,oc2=0;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int chk=r-l+1,p=chk%2;
        int so=ar[r]-(l-1>=1?ar[l-1]:0),se=br[r]-(l-1>=1?br[l-1]:0);
        int f=(r%2?so-se:se-so),v=(f%3+3)%3;
        if(p==0)
        {
            if(v==0)ec0++;
            else if(v==1)ec1++;
            else ec2++;
        }
        else
        {
            if(v==0)oc0++;
            else if(v==1)oc1++;
            else oc2++;
        }
        int te=ec0+ec1+ec2,to=oc0+oc1+oc2;
        string ans;
        if(to==0)
        {
            int o=(ec1+2*ec2)%3;
            ans=(o==0?"YES":"NO");
        }
        else if(te>0)ans="YES";
        else
        {
            int o=to,p=(o+1)/2,a=oc1,b=oc2,z=oc0,t=a+b;
            bool ok=0;
            if(t==0)ok=1;
            else
            {
                int mxi=max(0LL,p-z),mni=min(p,t),tar=(a+2*b)%3;
                for(int k=mxi;k<=mni;++k)
                {
                    int L=max(0LL,k-b),R=min(k,a);
                    if(L>R)continue;
                    int chk=R-L+1,f=0;
                    if(chk>=3)f=1;
                    else
                    {
                        for(int r=L;r<=R;++r)
                        {
                            int lft=(k-2*r)%3;
                            if(lft<0)lft+=3;
                            if(lft==tar){f=1;break;}
                        }
                    }
                    if(f){ok=1;break;}
                }
            }
            ans=(ok?"YES":"NO");
        }
        cout<<ans<<endl;
    }
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