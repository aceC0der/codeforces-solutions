/*
 * Problem   : 1922D - Berserk Monsters
 * Link      : https://codeforces.com/contest/1922/problem/D
 * Submission: https://codeforces.com/contest/1922/submission/242522386
 * Rating    : 1900   Tags: brute force, data structures, dsu, implementation, math
 * Verdict   : Accepted (623 ms, 40100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-01-20 (Practice)
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
    int n;
    cin >> n;
    vi a(n+2, 0), d(n+2, INT_MAX);
    rep(i, 0, n) cin >> a[i+1];
    rep(i, 0, n) cin >> d[i+1];
    set<int> alive, dead;
    set<int> lft, cur;
    for (int i = 0; i < n + 2; ++i) {
      lft.insert(i);
      cur.insert(i);
    }
    for (int z = 0; z < n; ++z) {
      set<int> del, ncur;
      for (int i : cur) {
        auto it = lft.find(i);
        if (it == lft.end()) continue;
        int prv = *prev(it);
        int nxt = *next(it);
        if (a[prv] + a[nxt] > d[i]) {
          del.insert(i);
          ncur.insert(prv);
          ncur.insert(nxt);
        }
      }
      cout << del.size() << ' ';
      for (auto it : del) lft.erase(it);
      cur = ncur;
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
