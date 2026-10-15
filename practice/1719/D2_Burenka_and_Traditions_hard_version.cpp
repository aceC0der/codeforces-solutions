/*
 * Problem   : 1719D2 - Burenka and Traditions (hard version)
 * Link      : https://codeforces.com/contest/1719/problem/D2
 * Submission: https://codeforces.com/contest/1719/submission/168759507
 * Rating    : 1900   Tags: bitmasks, dp, greedy, math
 * Verdict   : Accepted (217 ms, 3700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-18 (Practice)
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
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    ll x=a[0];
    int sv = 0;
    int xr = 0;
    set<int> xrs;
    rep(i, 0, n){
        xr ^= a[i];
        if(!xr || xrs.count(xr)){
            sv++;
            xrs.clear();
            xr = 0;
        }
        else{
            xrs.insert(xr);
        }
    }
    cout << n-sv << endl;
}

int main()
{
    // fios
    TestCases{
        solve();
    }
    return 0;
}
