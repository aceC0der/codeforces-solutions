/*
 * Problem   : 1792C - Min Max Sort
 * Link      : https://codeforces.com/contest/1792/problem/C
 * Submission: https://codeforces.com/contest/1792/submission/199698271
 * Rating    : 1500   Tags: binary search, brute force, greedy, math, two pointers
 * Verdict   : Accepted (249 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-29 (Practice)
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> pos(n + 1);
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      pos[x] = i;
    }
    int l = (n + 1) / 2, r = (n + 2) / 2;
    while (l > 0 && (l == r || (pos[l] < pos[l + 1] && pos[r - 1] < pos[r]))) {
      --l;
      ++r;
    }
    cout << (n - r + l + 1) / 2 << '\n';
  }
}
