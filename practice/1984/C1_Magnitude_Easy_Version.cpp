/*
 * Problem   : 1984C1 - Magnitude (Easy Version)
 * Link      : https://codeforces.com/contest/1984/problem/C1
 * Submission: https://codeforces.com/contest/1984/submission/265041459
 * Rating    : 1300   Tags: dp, greedy, math
 * Verdict   : Accepted (202 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-10 (Practice)
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
    vl a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    pl c={0, 0};
    rep(i, 0, n){
        vl tmp;
        tmp.pb(c.ff+a[i]);
        tmp.pb(abs(c.ff)+a[i]);
        tmp.pb(c.ss+a[i]);
        tmp.pb(abs(c.ss)+a[i]);
        sort(all(tmp));
        c.ff = tmp[0];
        c.ss = tmp[3];
    }
    cout << max(abs(c.ff), abs(c.ss)) << endl;



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
