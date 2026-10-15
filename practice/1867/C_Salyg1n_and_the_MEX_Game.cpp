/*
 * Problem   : 1867C - Salyg1n and the MEX Game
 * Link      : https://codeforces.com/contest/1867/problem/C
 * Submission: https://codeforces.com/contest/1867/submission/223027633
 * Rating    : 1300   Tags: constructive algorithms, data structures, games, greedy, interactive
 * Verdict   : Accepted (1232 ms, 3300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-12 (Practice)
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

void query(int q){
    cout << q << endl;
    cout.flush();
}

void solve(){
    int n;
    cin >> n;
    set<int> st;
    rep(i, 0, n){
        int x;
        cin >> x;
        st.insert(x);
    }
    int mex = 0;
    for(auto it: st){
        if(mex==it) mex++;
        else break;
    }
    query(mex);
    int ans;
    cin >> ans;
    while(ans>=0){
        query(ans);
        cin >> ans;
    }

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
