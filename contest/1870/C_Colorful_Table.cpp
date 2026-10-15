/*
 * Problem   : 1870C - Colorful Table
 * Link      : https://codeforces.com/contest/1870/problem/C
 * Submission: https://codeforces.com/contest/1870/submission/223898036
 * Rating    : 1300   Tags: binary search, data structures, dp, implementation, math, two pointers
 * Verdict   : Accepted (155 ms, 10400 KB)
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
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    // vi ans(k, 0);
    vi mx(k, -1);
    vi mn(k, INT_MAX);
    set<int> row, col;
    rep(i, 0, n){
        row.insert(i);
        col.insert(i);
    }
    vector<vi> pos(k);
    rep(i, 0, n) a[i]--;
    rep(i, 0, n){
        pos[a[i]].pb(i);
    }
    rep(i, 0, k){
        int sz = pos[i].size();
        // cout << sz << " ";
        if(!sz) continue;
        rep(j, 0, sz){
            int x = pos[i][j];
            int mnn = min(*row.begin(), *col.begin()), mxx = max(*row.rbegin(), *col.rbegin());
            mx[i] = max(mx[i], mxx);
            mn[i] = min(mn[i], mnn);
            row.erase(x);
            col.erase(x);
        }
    }

    // cout << endl;
    // cout << "Max: ";
    // rep(i, 0, k) cout << mx[i] << "\t"; cout << endl;
    // cout << "Min: "; rep(i, 0, k) cout << mn[i] << "\t"; cout << endl;
    rep(i, 0, k){
        if(mx[i]==-1) cout << 0 << " ";
        else{
            cout << (mx[i]-mn[i]+1)*2 << " ";
        }
    }
    cout << endl;
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
