/*
 * Problem   : 1409A - Yet Another Two Integers Problem
 * Link      : https://codeforces.com/contest/1409/problem/A
 * Submission: https://codeforces.com/contest/1409/submission/94387857
 * Rating    : 800   Tags: greedy, math
 * Verdict   : Accepted (139 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-01 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	ll t;
	cin >> t;
	while(t--){
		ll a, b, ans;
		cin >> a >> b;
		ans = abs(a-b)/10;
		if(abs(a-b)%10!=0)
			ans++;

		cout << ans << endl;
	}

	return 0;
}
