/*
 * Problem   : 1916D - Mathematical Problem
 * Link      : https://codeforces.com/contest/1916/problem/D
 * Submission: https://codeforces.com/contest/1916/submission/239848739
 * Rating    : 1700   Tags: brute force, constructive algorithms, geometry, math
 * Verdict   : Accepted (15 ms, 600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-01-01 (Practice)
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


vector<string> ans[105];
void solve(){
    int n;
    cin >> n;
    rep(i, 0, n){
        cout << ans[n][i] << endl;
    }
    // cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("INPUT.txt", "r", stdin);
        freopen("OUTPUT.txt", "w", stdout);
    #endif
 
    fios
    ans[1].pb("1");
    ans[3].pb("169");
    ans[3].pb("196");
    ans[3].pb("961");
    string div = "0";
    for(int i=5; i<100; i+=2){
        int prev = i-2;
        // cout << prev << " : ";
        for(int j=0; j<prev; j++){
            string tmp = ans[prev][j]+"00";
            ans[i].pb(tmp);
            // cout << tmp << endl;
        }
        string tmp = "1"+div+"6"+div+"9";
        ans[i].pb(tmp);
        tmp = "9"+div+"6"+div+"1";
        ans[i].pb(tmp);
        div += "0";
    }
    TestCases{
        solve();
    }
    return 0;
}
