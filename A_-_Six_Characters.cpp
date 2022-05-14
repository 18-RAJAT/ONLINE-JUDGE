#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;cin>>s;
   string answer=" ";

   if(s.size()==1)
   {
       answer += s;
       answer += s;
       answer += s;
       answer += s;
       answer += s;
       answer += s;
   }
   else if(s.size()==2)
   {
       answer += s;
       answer += s;
       answer += s;
   }
   else
   {
       answer += s;
       answer += s;
   }
   cout<<answer<<endl;
    return 0;
}