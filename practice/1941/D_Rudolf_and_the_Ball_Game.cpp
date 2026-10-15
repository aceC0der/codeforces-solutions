/*
 * Problem   : 1941D - Rudolf and the Ball Game
 * Link      : https://codeforces.com/contest/1941/problem/D
 * Submission: https://codeforces.com/contest/1941/submission/250974727
 * Rating    : 1200   Tags: dfs and similar, dp, implementation
 * Verdict   : Accepted (62 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-03-12 (Practice)
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
    int n, m, xx;
    cin >> n >> m >> xx;
    set<int> exPlr;
    exPlr.insert(xx);
    while(m--){
        int len;
        char c;
        cin >> len >> c;
        set<int> tmp;
        for(auto x: exPlr){
            int clk = (x+len)%n;
            int aclk = (n-len+x)%n;
            if(!clk) clk+=n;
            if(!aclk) aclk+=n;
            // cout << x << " " << clk << " " << aclk << endl;
            if(c=='?'){
                tmp.insert(clk);
                tmp.insert(aclk);
            }
            else if(c=='0'){
                tmp.insert(clk);
            }
            else tmp.insert(aclk);
        }
        exPlr = tmp;
    } 
    cout << exPlr.size() << endl;
    for(auto x: exPlr) cout << x << " "; cout << endl;
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
