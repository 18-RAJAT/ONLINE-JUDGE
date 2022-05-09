#include<bits/stdc++.h>
using namespace std;

int main()
{
int h,w; cin>>h>>w;
int row,column; cin>>row>>column;

 int answer=0;

  if(column!=w)
  {answer++;}

  if(column!=1)
  {answer++;}

  if(row!=h)
  {answer++;}

  if(row!=1)
  {answer++;}

  
cout<<answer<<endl;
}