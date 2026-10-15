/*
 * Problem   : 1957C - How Does the Rook Move?
 * Link      : https://codeforces.com/contest/1957/problem/C
 * Submission: https://codeforces.com/contest/1957/submission/262338279
 * Rating    : 1600   Tags: combinatorics, dp, math
 * Verdict   : Accepted (156 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-24 (Practice)
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

const int mod = 1e9+7;

ll add(ll a, ll b){
    return (a%mod + b%mod)%mod;
}

ll mul(ll a, ll b){
    return (a%mod * b%mod)%mod;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    pl moves;
    int cnt = 0;
    rep(i, 0, k) {
        cin >> moves.ff >> moves.ss;
        cnt += (moves.ff != moves.ss);
        cnt++;
    }
    vl dp(n+5);
    dp[0] = dp[1] = 1;
    ll mirPos = 0;
    ll sum = 1;
    rep(i, 2, n-cnt+1){
        mirPos = mul((i-1), 2);
        dp[i] = add(mul(mirPos, dp[i-2]), dp[i-1]);
    }
    // cout << n-cnt << " :";
    cout << dp[n-cnt] << endl; 

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
