// #include<bits/stdc++.h>
// #define Rajat_Joshi            main;
// #define  CSE             ios_base::sync_with_stdio(false);
// #define Joshi           cin.tie(NULL);
// #include <iostream>
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
// //_______________________________________________________//
// Rajat_Joshi CSE;
// int k;cin>>k;
// int res=0;
//     res=10-k;
//     cout<<k<<res;
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int k, f;
int main()
{
    // cin>>k;
    // f=10-k;
    // cout<<k<<f;


    ////////////////

//        int n;cin>>n;
//    cout<<10+9*n+9*n/10<<"\n";

int  n;cin>>n; //int m=0;
    // n=(n+1)*9;
    // int ans=n+1;
    int m=n/10;
    int res=19+9*(n-1+m);
    cout<<res<<"\n";
    return 0;
}