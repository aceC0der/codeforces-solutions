/*
 * Problem   : 1976B - Increase/Decrease/Copy
 * Link      : https://codeforces.com/contest/1976/problem/B
 * Submission: https://codeforces.com/contest/1976/submission/263296086
 * Rating    : 1100   Tags: greedy, implementation
 * Verdict   : Accepted (155 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-30 (Contest)
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
    vl a(n), b(n+1);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n+1) cin >> b[i];
    ll last = b.back();
    ll ttl = 0;
    bool f = false;
    ll extra = INT_MAX;
    rep(i, 0, n){
        ttl += abs(a[i]-b[i]);
        ll mn = min(a[i], b[i]);
        ll mx = max(a[i], b[i]);
        if(mn<=last && last<=mx){
            f = true;
        }
        extra = min(extra, abs(a[i]-last));
        extra = min(extra, abs(b[i]-last));
    }
    if(!f) ttl+=extra;
    ttl++;
    cout << ttl << endl;
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
