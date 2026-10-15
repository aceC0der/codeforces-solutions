/*
 * Problem   : 1844C - Particles
 * Link      : https://codeforces.com/contest/1844/problem/C
 * Submission: https://codeforces.com/contest/1844/submission/214991879
 * Rating    : 1300   Tags: dp, greedy, implementation, math
 * Verdict   : Accepted (78 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-07-22 (Practice)
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
    ll n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    ll even = 0, odd = 0;
    rep(i, 0, n){
        if(i&1) even += max(a[i], 0LL);
        else odd += max(a[i], 0LL);
    }
    if(n==1) {
        cout << a[0] << endl;
        return;
    }
    bool f=true;
    ll mx = INT_MIN;
    rep(i, 0, n){
        f&=(a[i]<=0);
        mx = max(mx, a[i]);
    }
    if(f){
        cout << mx << endl;
        return;
    }
    cout << max(even, odd) << endl;

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
