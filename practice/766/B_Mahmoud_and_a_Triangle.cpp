/*
 * Problem   : 766B - Mahmoud and a Triangle
 * Link      : https://codeforces.com/contest/766/problem/B
 * Submission: https://codeforces.com/contest/766/submission/95953241
 * Rating    : 1000   Tags: constructive algorithms, geometry, greedy, math, number theory, sortings
 * Verdict   : Accepted (202 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-19 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define fi first
#define se second
#define pb push_back
using namespace std;

int main(){
	vector<ll> seg;
	ll n,x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		seg.pb(x);
	}
	sort(seg.begin(), seg.end());
	bool chk=false;
	for(int i=0, j=1, k=2; k<n; i++, j++, k++){
		if(seg[i]+seg[j]>seg[k]){
			chk = true;
			cout << "YES\n";
			break;
		}
	}
	if(!chk)
		cout << "NO\n";


	return 0;
}
