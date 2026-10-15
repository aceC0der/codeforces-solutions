/*
 * Problem   : 2027C - Add Zeros
 * Link      : https://codeforces.com/contest/2027/problem/C
 * Submission: https://codeforces.com/contest/2027/submission/288227306
 * Rating    : 1500   Tags: brute force, data structures, dfs and similar, dp, graphs, greedy
 * Verdict   : Accepted (281 ms, 19200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-27 (Practice)
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
    ll n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    // map<ll, vl> val;
    vpl need(n+1);

    rep(i, 0, n){
        ll v = a[i]+i;
        need[i+1].ff = v;
        need[i+1].ss = i;
    }
    sort(all(need));
    ll ans = 0;
    map<ll, bool> okk;
    okk[n] = true;
    rep(i, 1, n+1){
        ll x=need[i].ff;
        ll y = need[i].ss;

        if(!okk[x]) continue;
        
        okk[x+y] = true;
    }

    for(auto v: okk){
        if(!v.ss) continue;
        ans = max(ans, v.ff);
    }
    cout << ans << endl;
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
