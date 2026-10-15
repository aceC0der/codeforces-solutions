/*
 * Problem   : 1419A - Digit Game
 * Link      : https://codeforces.com/contest/1419/problem/A
 * Submission: https://codeforces.com/contest/1419/submission/94289425
 * Rating    : 900   Tags: games, greedy, implementation
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-09-30 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
        string s;
        cin >> n >> s;
        bool odd = false, even = false;
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 1) {
                odd |= ((s[i - 1] - '0') % 2 == 1);
            } else {
                even |= ((s[i - 1] - '0') % 2 == 0);
            }
        }
        if (n % 2 == 1) {
            cout << (odd ? 1 : 2) << '\n';
        } else {
            cout << (even ? 2 : 1) << '\n';
        }
	}

	return 0;
}
