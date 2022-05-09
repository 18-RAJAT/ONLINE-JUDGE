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
	ll n, s = 0;
    	cin >> n;
    	vector<long long> arr(n), v1, v2;
    	for(auto &X: arr){
    		cin >> X;
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		if(i & 1) {
    			v1.push_back(abs(arr[i]));
    		} else {
    			v2.push_back(abs(arr[i]));
    		}
    	}
    	sort(v1.begin(), v1.end());
    	sort(v2.begin(), v2.end());

    	if(v1[v1.size()-1] > v2[0]) {
    		swap(v1[v1.size() - 1], v2[0]);
    	}

    	for(auto x: v2) {
    		s += x;
    	}
    	for(auto x: v1) {
    		s -= x;
    	}
    	cout << s << endl;
}
return 0;
}