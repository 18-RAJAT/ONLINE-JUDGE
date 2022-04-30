#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("Ofast")
#include <iostream>
#include <cmath>
#include <iomanip>
#include <set>
#include <algorithm>
#include <fstream>
#include <vector>
#include <string>
#include <climits>
#include <ctime>
#include <queue>
#include <map>
#include <stack>
#include <unordered_set>
#define ll long long
#define f .first
#define s .second
#define m_p make_pair
#define p_b push_back
using namespace std;
int main() {
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n, otv = LLONG_MAX, p = 0;
	cin >> n;
	vector<ll>a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		ll f= 0;
		p = 0;
		b[i] = 0;
		for (int j = i - 1; j >= 0; j--) {
			f= f+ abs(p / a[j]) + 1;
			p = -1 * abs(a[j]) * (abs(p / a[j]) + 1);
			//b[j] = p;
		}
		p = 0;
		for (int j = i + 1; j < n; j++) {
			f= f+ abs(p / a[j]) + 1;
			p = abs(a[j]) * (abs(p / a[j]) + 1);
			//b[j] = p;
		}		
		otv = min(otv, ans);
	}
	cout << otv << endl;
}