#include<bits/stdc++.h>

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

int n;
cin>>n;

 	    
	       
	        int c=0,o=0,d=0,e=0,h=0,f=0;
	        while(n--){
	            string a;
	            cin>>a;
	        for(int i=0;i<a.size();i++){
	            if(a[i]=='c')
	            c++;
	            else if(a[i]=='o')
	            o++;
	            else
	            if(a[i]=='d')
	            d++;
	            else if(a[i]=='e')
	            e++;
	            else if(a[i]=='h')
	            h++;
	            else if(a[i]=='f')
	            f++;}} 
	        
	            int z[6]={c,o,d,e,h,f};
	            z[0]=z[0]/2;
	            z[3]=z[3]/2;
	            sort(z,z+6);
	            cout<<z[0]<<endl;}
	              
                  return 0;
}
