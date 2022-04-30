// #include<bits/stdc++.h>

// #include <string>
// #include <vector>
// #include <algorithm>
// #include <sstream>
// #include <queue>
// #include <deque>
// #include <bitset>
// #include <iterator>
// #include <list>
// #include <stack>
// #include <map>
// #include <set>
// #include <functional>
// #include <numeric>
// #include <utility>
// #include <limits>
// #include <time.h>
// #include <math.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <assert.h>
// using namespace std;
// #define read(type) readInt<type>()
// #define ll long long
// #define nL


// #define pb push_back
// #define mk make_pair
// #define pii pair<int, int>
// #define a first
// #define b second
// #define vi vector<int>
// #define all(x) (x).begin(), (x).end()
// #define umap unordered_map
// #define uset unordered_set
// #define MOD 1000000007
// #define imax INT_MAX
// #define imin INT_MIN
// #define exp 1e9
// #define sz(x) (int((x).size()))
// int32_t main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int ttt; cin >> ttt;
// while(ttt--) {

//     int n;
//     int result;
//     cin>>n;
//     cin>>result;

//     int arr[n],arr1[n]; 
    
//     for(int i=0;i<n;++i)
//     {
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;++i)
//     {
//         cin>>arr1[i];
//     }
    
//     int current [n]; 
//     for(int i=0;i<n;++i)
//     {
//       current[i] = arr[i] - arr1[i];
//     } 

//     sort(current,current + n); 
    
//     bool canIBuyMore= true; 

//     int counter = 0;

//     while(canIBuyMore==true)
//     { 
//       if(result > current[0]){ 
        
//         counter++;

//         result -= current[0]; 
//         }
//         else
//         { 
//           canIBuyMore = false; 
//         } 
//       } 
//       cout<<counter<<endl; 
//   } 
//   return 0; 
// }




#include <bits/stdc++.h> 

#define nl "\n" 

#define ll long long 

#define auto auto c: a 

#define all(v) v.begin(),v.end() 

#define bb make_pair(a[i]-b[i],make_pair(a[i],b[i])) 

#define aa r>=v[i].second.first 

ll inf = pow(10,18); 

 

using namespace std; 

 
void solve()  

{  

    int n,r; 

    cin>>n>>r; 

    int count=0; 

    vector<int>a,b; 


    vector<pair<int,pair<int,int>>>v; 

    for(int i=0;i<n;i++){ 

        int x; 

        cin>>x; 

        a.push_back(x); 

    } 

    for(int i=0;i<n;i++){ 

        int x; 

        cin>>x; 

        b.push_back(x); 

    }

    for(int i=0;i<n;i++){ 

        v.push_back(bb); 

    } 

    sort(v.begin(),v.end()); 
    for(int i=0;i<n;i++){ 

        while(aa){ 

            int cc=(r)/v[i].second.first; 

            cc+=(1&0); 

            count+=cc; 

            count+=(1&0); 


            r-=(cc*(v[i].second.first)); 

            r-=(1&0); 

            r+=(cc*(v[i].second.second)); 

            r+=(1&0); 

        } 

    } 

    cout<<count<<endl; 

} 

 

int main() { 

  ll k; 

  cin >> k; 

 ll temp = k; 

 while (k--) { 

  solve(); 

 } 

 return 0; 

}