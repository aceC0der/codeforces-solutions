/*
 * Problem   : 1765K - Torus Path
 * Link      : https://codeforces.com/contest/1765/problem/K
 * Submission: https://codeforces.com/contest/1765/submission/211631509
 * Rating    : 1500   Tags: greedy, math
 * Verdict   : Accepted (31 ms, 700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-30 (Practice)
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

// ll dp[205][205];
ll arr[205][205];

// ll do_dp(int i, int j, int n){
//     // cout << i << " " << j << " " << arr[i][j] << " " << dp[i][j] << endl;
//     if(i==n-1 && j==n-1){
//         return arr[i][j];
//     }

//     if(i==n){
//         i = 0;
//     }
//     if(j==n) j = 0;
//     if(dp[i][j]!=-1) return dp[i][j];
//     dp[i][j] = INT_MIN;
//     // cout << "***" << endl;
//     dp[i][j] = max(do_dp(i+1, j, n), do_dp(i, j+1, n));
//     dp[i][j]+=arr[i][j];
    
//     return dp[i][j];
// }

void solve(){
    ll n;
    cin >> n;
    vector<vi> arr;
    arr.resize(n, vector<int>(n));
    rep(i, 0, n){
        rep(j, 0, n){
            cin >> arr[i][j];
            // dp[i][j] = -1;
        }
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += accumulate(arr[i].begin(), arr[i].end(), 0LL);
    
    int mn = arr[0][n - 1];
    for (int i = 0; i < n; i++)
        mn = min(mn, arr[i][n - 1 - i]);
    
    cout << sum - mn << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
        solve();
    return 0;
}
