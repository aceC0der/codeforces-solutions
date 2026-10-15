/*
 * Problem   : 1969D - Shop Game
 * Link      : https://codeforces.com/contest/1969/problem/D
 * Submission: https://codeforces.com/contest/1969/submission/258993131
 * Rating    : 1900   Tags: data structures, greedy, math, sortings
 * Verdict   : Accepted (187 ms, 6800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-01 (Practice)
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
    int n, k;
    cin >> n >> k;
    vpl a(n);
    rep(i, 0, n) cin >> a[i].ff;
    rep(i, 0, n) cin >> a[i].ss;

    vpl b;
    rep(i, 0, n){
        if(a[i].ff<=a[i].ss){
            b.pb(a[i]);
        }
    }
    sort(all(b));
    ll mx = 0;
    ll sumA = 0, sumB = 0;
    n = b.size();
    if(n<=k){
        cout << mx << endl;
        return;
    }

    priority_queue<ll> pq;
    rep(i, 0, k){
        pq.push(-b[i].ss);
        sumA += b[i].ff;
    }
    // rep(i, 0, n) cout << b[i].ff << " "; cout << endl;
    rep(i, k, n){
        pq.push(-b[i].ss);
        sumA += b[i].ff;
        sumB += pq.top()*-1;
        pq.pop();
        // cout << sumA << " " << sumB << endl;

        mx = max(mx, sumB-sumA);
    }

    cout << mx << endl;

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
