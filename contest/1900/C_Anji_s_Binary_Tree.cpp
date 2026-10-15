/*
 * Problem   : 1900C - Anji's Binary Tree
 * Link      : https://codeforces.com/contest/1900/problem/C
 * Submission: https://codeforces.com/contest/1900/submission/234475717
 * Rating    : 1300   Tags: dfs and similar, dp, trees
 * Verdict   : Accepted (187 ms, 16300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-11-26 (Contest)
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
string s;
void do_dp(vi& dp, vpi& nd, int x, int p, char ch){
    dp[x] = dp[p];
    if(p){
        if(ch!=s[p-1]) dp[x]++;
    }
    if(nd[x].ff){
        do_dp(dp, nd, nd[x].ff, x, 'L');
    }
    if(nd[x].ss){
        do_dp(dp, nd, nd[x].ss, x, 'R');
    }
}


void solve(){
    int n;
    cin >> n;
    // string s;
    cin >> s;
    vpi nd(n+100);
    vi dp(n+100, INT_MAX);
    dp[0] = 0;
    rep(i, 0, n){
        cin >> nd[i+1].ff >> nd[i+1].ss;
        // nd[i].ff--;
        // nd[i].ss--;
    }
    do_dp(dp, nd, 1, 0, 'x');
    int mn = INT_MAX;
    rep(i, 0, n){
        if(!nd[i+1].ff && !nd[i+1].ss){
            mn = min(dp[i+1], mn);
        }
    }
    // int ans = *min_element(all(dp));
    cout << mn << endl;
    
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
