/*
 * Problem   : 1875B - Jellyfish and Game
 * Link      : https://codeforces.com/contest/1875/problem/B
 * Submission: https://codeforces.com/contest/1875/submission/225973454
 * Rating    : 1200   Tags: brute force, greedy, implementation
 * Verdict   : Accepted (78 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-30 (Contest)
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
    int n, m, k;
    cin >> n >> m >> k;
    ll sum_j = 0, sum_g = 0;
    set<int> jelly, gelly;
    ll mn_j, mn_g, mx_j, mx_g;
    mn_j = mn_g = INT_MAX;
    mx_j = mx_g = -1;
    rep(i, 0, n){
        ll x;
        cin >> x;
        sum_j+= x;
        mn_j = min(mn_j, x);
        mx_j = max(x, mx_j);
    }
    rep(i, 0, m){
        ll x;
        cin >> x;
        sum_g+= x;
        mn_g = min(mn_g, x);
        mx_g = max(x, mx_g);
    }
    if(mx_g>mn_j) sum_j += (mx_g-mn_j), sum_g -= (mx_g-mn_j);
    ll mx = max(mx_g, mx_j), mn = min(mn_j, mn_g);
    k--;
    if(k%2==0){
        cout << sum_j << endl;
    }
    else{
        cout << sum_j-mx+mn << endl;
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
