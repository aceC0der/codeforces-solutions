/*
 * Problem   : 1934D1 - XOR Break --- Solo Version
 * Link      : https://codeforces.com/contest/1934/problem/D1
 * Submission: https://codeforces.com/contest/1934/submission/249215534
 * Rating    : 2100   Tags: bitmasks, constructive algorithms, greedy
 * Verdict   : Accepted (62 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-03-02 (Practice)
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
    ll n, m;
    cin >> n >> m;
    vl ans;
    ll xr = n^m;
    ans.pb(n);
    if(xr>0 && xr<n){
        cout << 1 << endl;
        cout << n << " " << m << endl;
        return;
    }
    ll mask = 0;
    rep(i, 0, 63){
        if(CheckBit(xr, i)){
            SetBit(mask, i);
            ClearBit(xr, i);
            if(mask>=n){
                cout << -1 
                 << endl;
                return;
            }
            ll nxr = n^mask;
            if(0<nxr && nxr<n){
                mask = 0;
                n = nxr;
                ans.pb(n);
            }
        }
        
    }
    cout << ans.size()-1 << endl;
    rep(i, 0, ans.size()) cout << ans[i] << " "; cout << endl;
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
