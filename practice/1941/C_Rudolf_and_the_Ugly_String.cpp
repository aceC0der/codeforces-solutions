/*
 * Problem   : 1941C - Rudolf and the Ugly String
 * Link      : https://codeforces.com/contest/1941/problem/C
 * Submission: https://codeforces.com/contest/1941/submission/250971805
 * Rating    : 900   Tags: dp, greedy, strings
 * Verdict   : Accepted (62 ms, 2000 KB)
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

int counter(string s, string m){
    int ln = m.size();
    int n = s.size();
    int cnt = 0;
    rep(i, 0, n-ln+1){
        string sb = s.substr(i, ln);
        if(sb==m) cnt++;
    }
    return cnt;
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string m="map", p = "pie", pm= "mapie";
    int cntm = counter(s, m), cntp = counter(s, p), cntpm = counter(s, pm);
    int ans = cntm+cntp-cntpm;
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
