/*
 * Problem   : 1771A - Hossam and Combinatorics
 * Link      : https://codeforces.com/contest/1771/problem/A
 * Submission: https://codeforces.com/contest/1771/submission/184858210
 * Rating    : 900   Tags: combinatorics, math, sortings
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-12 (Practice)
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
    ll n;
    cin >> n;
    vl a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    ll mx = *max_element(all(a));
    ll mn = *min_element(all(a));
    ll mx_cnt = 0;
    ll mn_cnt = 0;
    rep(i, 0, n){
        if(a[i]==mx) mx_cnt++;
        else if(a[i]==mn) mn_cnt++;
    }
    ll ans = mx_cnt*mn_cnt*2;
    if(ans==0){
        ans = n*(n-1);
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
