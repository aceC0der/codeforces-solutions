/*
 * Problem   : 1426A - Floor Number
 * Link      : https://codeforces.com/contest/1426/problem/A
 * Submission: https://codeforces.com/contest/1426/submission/94186937
 * Rating    : 800   Tags: implementation, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-09-29 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int x, n;
		cin >> n >> x;
		int ans;
		ans = 1;
		if(n>2){
			int currN=2;
			while(1){
				currN+=x;
				++ans;
				if(n<=currN)
					break;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
