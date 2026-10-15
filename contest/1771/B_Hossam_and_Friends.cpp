/*
 * Problem   : 1771B - Hossam and Friends
 * Link      : https://codeforces.com/contest/1771/problem/B
 * Submission: https://codeforces.com/contest/1771/submission/184779516
 * Rating    : 1400   Tags: binary search, constructive algorithms, dp, two pointers
 * Verdict   : Accepted (78 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-11 (Contest)
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
    ll n, m;
    cin >> n >> m;
    vl a(n+7, n+1);
    n++;
    rep(i, 1, m+1){
        ll x, y;
        cin >> x >> y;
        if(x>y) swap(x, y);
        a[x] = min(a[x], y);
    }
    // rep(i, 1, n) cout << a[i] << " " ; cout << endl;
    ll ans = 0;
    ll mn = a[n];
    pre(i, n, 1){
        mn = min(a[i], mn);
        // cout << i << " " << mn << endl;
        a[i] = max((ll)i, mn);
    }
    // rep(i, 1, n) cout << a[i] << " " ; cout << endl;
    rep(i, 1, n){
        ll x = a[i]-i;
        ans += x;
    }
    cout << ans << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
