/*
 * Problem   : 1731A - Joey Takes Money
 * Link      : https://codeforces.com/contest/1731/problem/A
 * Submission: https://codeforces.com/contest/1731/submission/187633425
 * Rating    : 800   Tags: greedy, math
 * Verdict   : Accepted (46 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-02 (Practice)
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
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    ll mul = 1;
    rep(i, 0, n) mul*=a[i];
    mul += n-1;
    cout << 2022*mul << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
