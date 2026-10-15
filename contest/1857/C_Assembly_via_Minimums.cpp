/*
 * Problem   : 1857C - Assembly via Minimums
 * Link      : https://codeforces.com/contest/1857/problem/C
 * Submission: https://codeforces.com/contest/1857/submission/217665168
 * Rating    : 1200   Tags: greedy, sortings
 * Verdict   : Accepted (156 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-08-07 (Contest)
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
    ll x = (n*(n-1))/2;
    map<ll, ll> m;
    ll mx = INT_MIN;
    rep(i, 0, x){
        ll num;
        cin >> num;
        mx = max(num, mx);
        m[num]++;
    }
    vi ans;
    int cnt = n-1;
    for(auto it: m){
        while(it.ss){
            it.ss-=cnt;cnt--;
            ans.pb(it.ff);
        }
    }
    ans.pb(mx);
    rep(i, 0, n) cout << ans[i] << " "; cout << endl;
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
