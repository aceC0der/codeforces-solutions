/*
 * Problem   : 1886B - Fear of the Dark
 * Link      : https://codeforces.com/contest/1886/problem/B
 * Submission: https://codeforces.com/contest/1886/submission/227370905
 * Rating    : 1200   Tags: binary search, geometry, math
 * Verdict   : Accepted (187 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-10-09 (Contest)
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
double dist(pair<double, double> a, pair<double, double> b){
    double dx = (a.ff-b.ff);
    double dy = (a.ss-b.ss);
    double dist = (dx*dx + dy*dy);
    return dist;
}

void solve(){
    pair<double, double> a, b, p;
    cin >> p.ff >> p.ss;
    cin >> a.ff >> a.ss;
    cin >> b.ff >> b.ss;
    // int zp = 0, pp = 0;
    double za, pa, zb, pb, ab;
    za = dist(a, {0, 0});
    zb = dist(b, {0, 0});
    pa = dist(a, p);
    pb = dist(b, p);
    ab = dist(a, b);
    ab/=4;
    double aa = max(za, pa);
    double bb = max(zb, pb);
    double ab_ans = max(ab, max(min(za, zb), min(pa, pb)));
    // cout << za << " " << zb << " " << pa << " " << pb << " " << ab << endl;
    // cout << aa << " " << bb << " " << ab_ans << endl;
    double ans = min({aa, bb, ab_ans});
    ans = sqrt(ans);
    cout << setprecision(11) << ans << endl;

    // ll ab = 
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
