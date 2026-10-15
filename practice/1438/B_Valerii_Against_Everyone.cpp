/*
 * Problem   : 1438B - Valerii Against Everyone
 * Link      : https://codeforces.com/contest/1438/problem/B
 * Submission: https://codeforces.com/contest/1438/submission/98329576
 * Rating    : 1000   Tags: constructive algorithms, data structures, greedy, sortings
 * Verdict   : Accepted (124 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-14 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define fi first
#define se second
#define pb push_back
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<ll> a;
		for(int i=0; i<n; i++){
			int k;
			cin >> k;
			a.insert(k);
		}
		cout << (a.size()<n ? "YES" : "NO") << "\n";
	}
}
