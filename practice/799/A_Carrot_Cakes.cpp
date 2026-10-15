/*
 * Problem   : 799A - Carrot Cakes
 * Link      : https://codeforces.com/contest/799/problem/A
 * Submission: https://codeforces.com/contest/799/submission/221782848
 * Rating    : 1100   Tags: brute force, implementation
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-04 (Practice)
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
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int time = (n/k + (n%k!=0))*t;
    int timed = d;
    int x = (d/t)*k;
    int ex = d%t;
    bool f = true;
    // cout << x << endl;
    // cout << ex << endl;
    while(x<n){
        if(f) timed += (t-ex);
        else timed += ex;
        f = !f;
        x+=k+(!ex)*k;
    }
    // cout << timed << " " << time << endl;
    cout << (timed<time ? "YES" : "NO") << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    // TestCases{
        solve();
    // }
    return 0;
}
