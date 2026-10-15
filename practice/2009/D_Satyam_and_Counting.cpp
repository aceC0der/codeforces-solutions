/*
 * Problem   : 2009D - Satyam and Counting
 * Link      : https://codeforces.com/contest/2009/problem/D
 * Submission: https://codeforces.com/contest/2009/submission/279853858
 * Rating    : 1400   Tags: geometry, math
 * Verdict   : Accepted (171 ms, 4300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-05 (Practice)
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
    vpi points(n);
    rep(i, 0, n) cin >> points[i].ff >> points[i].ss;
    sort(all(points));
    set<pi> isPresent;
    rep(i, 0, n) isPresent.insert(points[i]);
    ll ans = 0;
    rep(i, 1, n){
        if(points[i].ff == points[i-1].ff){
            ans += (n-2);
        }
        if(isPresent.count({points[i].ff-1, !points[i].ss}) && isPresent.count({points[i].ff+1, !points[i].ss})){
            ans++;
        }
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
