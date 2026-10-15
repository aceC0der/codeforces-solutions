/*
 * Problem   : 1869B - 2D Traveling
 * Link      : https://codeforces.com/contest/1869/problem/B
 * Submission: https://codeforces.com/contest/1869/submission/222738037
 * Rating    : 1100   Tags: geometry, math, shortest paths, sortings
 * Verdict   : Accepted (140 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-10 (Contest)
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

ll calc_dist(pl a, pl b){
    return abs(a.ff-b.ff)+abs(a.ss-b.ss);
}

void solve(){
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vpl city(n);
    rep(i, 0, n) cin >> city[i].ff >> city[i].ss;
    ll ab, a_major=1e18, b_major=1e18;
    if(a<=k && b<=k){
        ab = 0;
        cout << 0 << endl;
        return;
    }
    else{
        ab = calc_dist(city[a-1], city[b-1]);
    }
    rep(i, 0, k){
        a_major = min(a_major, calc_dist(city[a-1], city[i]));
    }
    rep(i, 0, k){
        b_major = min(b_major, calc_dist(city[b-1], city[i]));
    }
    ll ans = min(ab, a_major+b_major);
    cout << ans << endl;

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
