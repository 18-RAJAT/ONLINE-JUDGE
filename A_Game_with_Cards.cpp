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
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
const int N=55;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int ttt; cin >> ttt;
while(ttt--) {
//_______________________________________________________//
Rajat_Joshi CSE;
int a[N];
int b[N];
   int mx1=0,mx2=0;
  int n,m;    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
        mx1=max(mx1,a[i]);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
        mx2=max(mx2,b[i]);
    }
    if(mx1>=mx2){
        cout<<"Alice\n";
    }
    else{
        cout<<"Bob\n";
    }
    if(mx1<=mx2){
        cout<<"Bob\n";
        
    }
    else{
        cout<<"Alice\n";
    }
}
return 0;
}