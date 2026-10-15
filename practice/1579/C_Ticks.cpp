/*
 * Problem   : 1579C - Ticks
 * Link      : https://codeforces.com/contest/1579/problem/C
 * Submission: https://codeforces.com/contest/1579/submission/211855881
 * Rating    : 1500   Tags: greedy, implementation
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-07-02 (Practice)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> status(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
            if (s[j] == '*')
                status[i][j] = 1;
    }
    for (int i = n - 1; i > -1; i--) {
        for (int j = 0; j < m; j++) {
            if (status[i][j] == 0)
                continue;
            int len = 0;
            while (j > len && j + len + 1 < m && i > len) {
                if (status[i - len - 1][j - len - 1] == 0 || status[i - len - 1][j + len + 1] == 0)
                    break;
                len++;
            }
            if (len >= k) {
                for (int d = 0; d <= len; d++) {
                    status[i - d][j - d] = 2;
                    status[i - d][j + d] = 2;
                }
            }
        }
    }
    bool ok = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (status[i][j] == 1)
                ok = false;

    cout << (ok ? "YES" : "NO") << endl;
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
