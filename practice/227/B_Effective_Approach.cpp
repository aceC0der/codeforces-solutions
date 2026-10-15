/*
 * Problem   : 227B - Effective Approach
 * Link      : https://codeforces.com/contest/227/problem/B
 * Submission: https://codeforces.com/contest/227/submission/95228681
 * Rating    : 1100   Tags: implementation
 * Verdict   : Accepted (654 ms, 4100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-11 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define F first
#define S second
#define PB push_back
using namespace std;

int main()
{
	ll n, a;
	cin >> n;
	map<ll , ll> ara;
	for(ll i=0; i<n; i++){
		cin >> a;
		ara.insert(make_pair(a, i+1));
	}
	ll m, q, v, p;
	v = p = 0;
	cin >> m;
	for(ll i=0; i<m; i++){
		cin >> q;
		//cout << ara[q] << endl;
		v+=ara[q];
		p+=n-ara[q]+1;
	}
	cout << v << " " <<  p << endl;

	return 0; 
}
