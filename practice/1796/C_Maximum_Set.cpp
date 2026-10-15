/*
 * Problem   : 1796C - Maximum Set
 * Link      : https://codeforces.com/contest/1796/problem/C
 * Submission: https://codeforces.com/contest/1796/submission/198476191
 * Rating    : 1600   Tags: binary search, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-21 (Practice)
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
#define mod 998244353

void solve(){
    ll l, r;
    cin >> l >> r;
    ll m = 0;
    int d = l;
    while(d<=r){
        m++;
        d<<=1;
    }
    ll rr = (r/(1<<(m-1)));
    rr = (rr-l)+1;
    ll rr2 = (r/((1<<(m-2))*3));
    ll ans = rr%mod;
    if(rr2>=l){
        rr2 = (rr2-l)+1;
        rr2 = (rr2%mod * (m-1)%mod)%mod;
        ans  = (ans%mod + rr2%mod)%mod;
    }
    // cout << rr << " " << rr2 << " ";
    cout << m << " " << ans << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
