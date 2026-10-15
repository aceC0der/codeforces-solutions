/*
 * Problem   : 1842B - Tenzing and Books
 * Link      : https://codeforces.com/contest/1842/problem/B
 * Submission: https://codeforces.com/contest/1842/submission/210891896
 * Rating    : 1100   Tags: bitmasks, greedy, math
 * Verdict   : Accepted (124 ms, 2400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-24 (Contest)
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

bool ok(ll x, ll v){
    rep(i, 0, 33){
        if((CheckBit(x, i)==0) && (CheckBit(v, i)==1)) return false;
    }
    return true;
}

void solve(){
    ll n, x;
    cin >> n >> x;
    vl a(n), b(n), c(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    rep(i, 0, n) cin >> c[i];
    // rep(i, 0, n) cout << a[i] << " " ; cout << endl;
    ll ans = 0;
    int i=0;
    while(i<n && ok(x, a[i])){
        ans |= a[i];
        i++;
    }
    i=0;
    while(i<n && ok(x, b[i])) {
        ans |= b[i];
        i++;
    }
    i=0;
    while(i<n && ok(x, c[i])) {
        ans |= c[i];
        i++;
    }
    cout << (x==ans ? "YES" : "NO") << endl;
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
