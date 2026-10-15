/*
 * Problem   : 1870B - Friendly Arrays
 * Link      : https://codeforces.com/contest/1870/problem/B
 * Submission: https://codeforces.com/contest/1870/submission/223872228
 * Rating    : 1200   Tags: bitmasks, greedy, math
 * Verdict   : Accepted (155 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-18 (Contest)
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
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) cin >> b[i];
    int xr = 0;
    rep(i, 0, n){
        xr ^= a[i];
    }
    int y = xr;
    int sb = n%2;
    rep(bit, 0, 31){
        int cnt = 0;
        bool isOne = false;
        rep(i, 0, m){
            if(CheckBit(b[i], bit)){
                if(sb){
                    SetBit(y, bit);
                }
                else{
                    ClearBit(y, bit);
                }
            }
        }
    }
    cout << min(xr, y) << " " << max(xr, y) << endl;
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
