/*
 * Problem   : 1765N - Number Reduction
 * Link      : https://codeforces.com/contest/1765/problem/N
 * Submission: https://codeforces.com/contest/1765/submission/211363926
 * Rating    : 1500   Tags: greedy
 * Verdict   : Accepted (93 ms, 5500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-29 (Practice)
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
    string s;
    cin >> s;
    int k;
    cin >> k;
    vi pos[10];
    pre(i, s.size()-1, 0){
        int d = s[i]-'0';
        pos[d].pb(i);
    }
    string ans="";
    int n = s.size();
    int lst = 0, len = n - k;
    for (int i = 0; i < len; ++i) {
      for (int d = (i == 0); d <= 9; ++d) {
        while (!pos[d].empty() && pos[d].back() < lst)
          pos[d].pop_back();
        if (!pos[d].empty() && pos[d].back() - lst <= k) {
          ans += d + '0';
          k -= pos[d].back() - lst;
          lst = pos[d].back() + 1;
          break;
        }
      }
    }
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
