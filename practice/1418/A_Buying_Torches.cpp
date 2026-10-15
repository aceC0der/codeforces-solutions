/*
 * Problem   : 1418A - Buying Torches
 * Link      : https://codeforces.com/contest/1418/problem/A
 * Submission: https://codeforces.com/contest/1418/submission/94297669
 * Rating    : 1000   Tags: math
 * Verdict   : Accepted (186 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-09-30 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		ll x, y, k, ans;
		cin >> x >> y >> k ;
		ans=((y*k+k-1)/(x-1))+k;
		if((y*k+k-1)%(x-1)!=0)
			ans++;
		cout << ans << endl;
	}

	return 0;
}
