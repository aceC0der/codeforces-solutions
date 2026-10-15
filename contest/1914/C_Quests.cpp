/*
 * Problem   : 1914C - Quests
 * Link      : https://codeforces.com/contest/1914/problem/C
 * Submission: https://codeforces.com/contest/1914/submission/237988418
 * Rating    : 1100   Tags: greedy, math
 * Verdict   : Accepted (93 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-12-19 (Contest)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/



void solve(){
    ll n, k;
    cin >> n >> k;
    vl a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    ll mn = min(n, k);
    ll sum = 0;
    // rep(i, 0, mn){
    //     sum += a[i];
    // }
    ll mx = sum;
    ll mxb = b[0];
    rep(i, 0, mn){
        mxb = max(b[i], mxb);
        sum += a[i];
        ll s = sum + (k-i-1)*mxb;
        // cout << s << " ";
        mx = max(mx, s);

    }
    // cout << endl;
    cout << mx << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("INPUT.txt", "r", stdin);
        freopen("OUTPUT.txt", "w", stdout);
    #endif
 
    fios
    TestCases{
        solve();
    }
    return 0;
}
