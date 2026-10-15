/*
 * Problem   : 810B - Summer sell-off
 * Link      : https://codeforces.com/contest/810/problem/B
 * Submission: https://codeforces.com/contest/810/submission/95376655
 * Rating    : 1300   Tags: greedy, sortings
 * Verdict   : Accepted (389 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-13 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define fi first
#define se second
#define pb push_back
using namespace std;

int main(){
	vector<pair<int, int> > a;
	ll k[100005], l[100005];
	ll n, f;
	cin >> n >> f;
	for (int i = 0; i < n; i++) {
	    cin >> k[i] >> l[i];
	    a.push_back(make_pair(min(2 * k[i], l[i]) - min(k[i], l[i]), i));
	}
	sort(a.rbegin(), a.rend());

	long long ans = 0;
	for (int i = 0; i < f; i++) {
	    int pos = a[i].second;
	    ans += min(2 * k[pos], l[pos]);
	}
	for (int i = f; i < n; i++) {
	    int pos = a[i].second;
	    ans += min(k[pos], l[pos]);
	}
	cout << ans;

}
