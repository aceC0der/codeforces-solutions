/*
 * Problem   : 1989D - Smithing Skill
 * Link      : https://codeforces.com/contest/1989/problem/D
 * Submission: https://codeforces.com/contest/1989/submission/267827458
 * Rating    : 1900   Tags: brute force, data structures, dp, greedy, math, sortings, two pointers
 * Verdict   : Accepted (624 ms, 19900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-28 (Practice)
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

void solve(){
    int n, m;
    cin >> n >> m;
    vi a(n), b(n), c(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    rep(i, 0, m) cin >> c[i];
    int mx = *max_element(all(a));
    // cout << mx << endl;
    vi dif(mx+10, INT_MAX);
    vl dp(mx+10);
    rep(i, 0, n){
        int d = a[i]-b[i];
        dif[a[i]] = min(dif[a[i]], d);
    }
    int mn = INT_MAX;

    
    int st = -1;
    rep(i, 1, mx+1){
        if(mn>dif[i]){
            st = i;
            mn = dif[i];
        }
        if(mn>i) continue;
        // cout << i << " " << mn << " " << dp[i-mn] << endl;
        dp[i] = 2*1LL + dp[i-mn];
    }
    ll ans = 0;
    // rep(i, 0, mx+1) cout << dif[i] << " "; cout << endl;
    // rep(i, 0, mx+1) cout << dp[i] << " "; cout << endl;
    rep(i, 0, m){
        if(c[i]>mx){
            int d = c[i]-st;
            int x = d/mn + 1;
            c[i] = st-mn + d%mn;
            ans += 2LL*x;
        }
        // cout << c[i] << " ";
        ans += dp[c[i]];
    }
    // cout << endl;
    cout << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    // TestCases{
        solve();
    // }
    return 0;
}
