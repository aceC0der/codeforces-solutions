/*
 * Problem   : 1979C - Earning on Bets
 * Link      : https://codeforces.com/contest/1979/problem/C
 * Submission: https://codeforces.com/contest/1979/submission/264574835
 * Rating    : 1200   Tags: binary search, combinatorics, constructive algorithms, number theory
 * Verdict   : Accepted (93 ms, 4100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-07 (Practice)
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

ll LCM(ll a, ll b){
    return ((a*b)/(__gcd(a, b)));
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    int lcm = 1;
    rep(i, 0, n){
        lcm = LCM(a[i], lcm);
    }
    int sum = 0;
    vi ans(n);
    rep(i, 0, n){
        ans[i] = lcm/a[i];
        sum += ans[i];
    }
    if(sum>=lcm){
        cout << -1 << endl;
        return;
    }
    rep(i, 0, n) cout << ans[i] << " "; cout << endl;
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
