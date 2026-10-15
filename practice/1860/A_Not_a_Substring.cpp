/*
 * Problem   : 1860A - Not a Substring
 * Link      : https://codeforces.com/contest/1860/problem/A
 * Submission: https://codeforces.com/contest/1860/submission/219395637
 * Rating    : 900   Tags: constructive algorithms, strings
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-08-18 (Practice)
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
    int n = s.size();
    int cnt = 0;
    string ans = "";
    int i = 0;
    if(s=="()"){
        cout << "NO" << endl;
        return;
    }
    else if(s==")("){
        cout << "YES" << endl;
        cout << "(())" << endl;
        return;
    }
    cout << "YES" << endl;
    // int cnt = 0;
    rep(i, 0, n-1){
        if((s[i]=='(' && s[i+1]==')')||(s[i]==')'&&s[i+1]=='(')){
            cnt++;
        }
    }
    if(cnt>1){
        rep(i, 0, n) cout << "(";
        rep(i, 0, n) cout << ")";
    }
    else{
        bool f = true;
        n *= 2;
        rep(i, 0, n){
            if(i&1) cout << ")";
            else cout << "(";
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
