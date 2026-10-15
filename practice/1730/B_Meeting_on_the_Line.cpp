/*
 * Problem   : 1730B - Meeting on the Line
 * Link      : https://codeforces.com/contest/1730/problem/B
 * Submission: https://codeforces.com/contest/1730/submission/173498637
 * Rating    : 1600   Tags: binary search, geometry, greedy, implementation, math, ternary search
 * Verdict   : Accepted (93 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-25 (Practice)
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
    int n;
    cin >> n;
    vector<int> a(n), t(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) {
        cin >> t[i];
    }
    int l = INT_MAX, r = INT_MIN;
    rep(i, 0, n){
        int x, y;
        x = a[i]+t[i], y = a[i]-t[i];
        l = min(l, y);
        r = max(r, x);
    }
    cout << (l+r)*0.5 <<endl;

}

int main()
{
    fios
    cout << fixed;
    TestCases{
        solve();
    }
    return 0;
}
