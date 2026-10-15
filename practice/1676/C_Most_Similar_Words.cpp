/*
 * Problem   : 1676C - Most Similar Words
 * Link      : https://codeforces.com/contest/1676/problem/C
 * Submission: https://codeforces.com/contest/1676/submission/156995463
 * Rating    : 800   Tags: brute force, greedy, implementation, math, strings
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-13 (Practice)
 */
#include "bits/stdc++.h"
using namespace std;

int cost(string& a, string& b) {
    int val = 0;
    for(int i = 0; i < a.size(); ++i) {
        val += abs(a[i] - b[i]);
    }
    return val;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<string> s(n);
        for(int i = 0; i < n; ++i) {
            cin >> s[i];
        }
        int ans = INT_MAX;
        for(int i = 0; i < n; ++i) {
            for(int j = i + 1; j < n; ++j) {
                ans = min(ans, cost(s[i], s[j]));
            }
        }
        cout << ans << "\n";
    }
}
