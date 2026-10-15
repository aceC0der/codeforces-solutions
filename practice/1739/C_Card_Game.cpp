/*
 * Problem   : 1739C - Card Game
 * Link      : https://codeforces.com/contest/1739/problem/C
 * Submission: https://codeforces.com/contest/1739/submission/211745116
 * Rating    : 1500   Tags: combinatorics, constructive algorithms, dp, games
 * Verdict   : Accepted (0 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-07-01 (Practice)
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

long long dp[65][65][3];

void solve(int n)
{
    memset(dp, 0, sizeof dp);
    int k = n / 2;
    dp[0][0][2] = 1;
    for(int i = 0; i <= k; i++)
        for(int j = 0; j <= k; j++)
            for(int t = 0; t <= 2; t++)
            {
                int turn = (i + j) % 4;
                if (turn == 0 || turn == 3)
                {
                    if(i < k) dp[i + 1][j][t == 2 ? 0 : t] += dp[i][j][t];
                    if(j < k) dp[i][j + 1][t] += dp[i][j][t];
                }
                else
                {
                    if(i < k) dp[i + 1][j][t] += dp[i][j][t];
                    if(j < k) dp[i][j + 1][t == 2 ? 1 : t] += dp[i][j][t];
                }
            }
    for(int i = 0; i < 3; i++)
        cout << dp[k][k][i] % 998244353 << " ";
    cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    TestCases{
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
