/*
 * Problem   : 1810C - Make It Permutation
 * Link      : https://codeforces.com/contest/1810/problem/C
 * Submission: https://codeforces.com/contest/1810/submission/206305780
 * Rating    : 1300   Tags: brute force, greedy, sortings
 * Verdict   : Accepted (156 ms, 5200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-18 (Practice)
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
    ll n, c, d;
    cin >> n >> c >> d;
    vl a;
    a.clear();
    map<ll, bool> m;
    rep(i, 0, n){
        ll x;
        cin >> x;
        if(!m[x]){
            a.pb(x);
            // cout << x << " ";
            m[x] = true;
        }
    }
    // cout << endl;
    ll ans = (n-a.size())*c;
    sort(all(a));
    ll sz = a.size();
    ll cnt = 0;
    ll mn = LLONG_MAX;
    // rep(i, 0, sz) cout << a[i] << " "; cout << endl;
    pre(i, sz-1, 0){
        ll x = a[i]-i-1;
        x *= d;
        mn = min(mn, x+cnt*c);
        cnt++;
    }

    // cout << mn << endl;
    cout << min(ans+mn, n*c+d) << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
