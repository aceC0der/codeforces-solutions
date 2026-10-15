/*
 * Problem   : 2000F - Color Rows and Columns
 * Link      : https://codeforces.com/contest/2000/problem/F
 * Submission: https://codeforces.com/contest/2000/submission/282962060
 * Rating    : 1900   Tags: dp, greedy, implementation, math
 * Verdict   : Accepted (62 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-26 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)



void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 1e9));
    dp[0][0] = 0;
    for (int i = 0; i < n; ++i) {
        int x = a[i], y = b[i];
        int xy = x + y;
        int cost = 0;
        for (int j = 0; j <= xy; ++j) {
            for (int j1 = 0; j1 + j <= k; ++j1) {
                dp[i + 1][j1 + j] = min(dp[i + 1][j1 + j], dp[i][j1] + cost);
            }
            if (j < xy) {
                if (x >= y) {
                    x--, cost += y;
                } else {
                    y--, cost += x;
                }
            }
        }
    }
    cout << (dp[n][k] == 1e9 ? -1 : dp[n][k]) << '\n';


}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    TestCases{
        solve();
    }
    return 0;
}
