#include<bits/stdc++.h>
#define Rajat_Joshi            main;
#define  CSE             ios_base::sync_with_stdio(false);
#define Joshi           cin.tie(NULL);
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define nL


#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int ttt; cin >> ttt;
while(ttt--) {
//_______________________________________________________//
Rajat_Joshi CSE;
int n;
cin>>n;

vector<int>arr(n);
int counter = 0;
for(int i=0;i<n;++i)
cin>>arr[i];

int flag1=0,flag2=0,ct=0;
for(int i=0;i<n;++i)
{
   if(arr[i]!=0)
   {continue;}
   else
   {flag1=1; ct++;}
}

sort(arr.begin(),arr.end());

for(int i=0;i<n-1;++i)
{
    if(arr[i] == arr[i+1])
    {
        flag2 = 1;
        break;
    }
}
if(flag1 == 1)
{
    cout<<n-ct<<endl;
}
else if(flag2 == 1)
{
    cout<<n<<endl;
}
else
{
    cout<<n+1<<endl;
}

}
return 0;
}











// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     int cnt = 0;
//     F(i, 0, n)
//     cin>>a[i];
    
//     int flag1 = 0, flag2 = 0, c = 0;
    
//     F(i, 0 , n)
//     {
//         if(a[i] != 0)
//         continue;
//         else
//         {
//             flag1 = 1;
//             c++;
//         }
//     }
//     sort(a.begin(), a.end());
    
//     F(i, 0, n-1)
//     {
//         if(a[i] == a[i+1])
//         {
//             flag2 = 1;
//             break;
//         }
//     }
//     if(flag1 == 1)
//     cout<<n - c<<nl;
//     else if(flag2 == 1)
//     cout<<n<<nl;
//     else
//     cout<<n+1<<nl;
// }