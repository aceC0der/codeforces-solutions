/*
 * Problem   : 1733A - Consecutive Sum
 * Link      : https://codeforces.com/contest/1733/problem/A
 * Submission: https://codeforces.com/contest/1733/submission/172673575
 * Rating    : 800   Tags: greedy, sortings
 * Verdict   : Accepted (46 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-19 (Contest)
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
    int n, k;
    cin >> n >> k;
    vl a(n);
    vl ans(k);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n){
        int x = (i+1)%k;
        ans[x] = max(ans[x], a[i]);
    }
    ll res = 0;
    rep(i, 0, k) res+=ans[i];
    cout << res << endl;
    
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
