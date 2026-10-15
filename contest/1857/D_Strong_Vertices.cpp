/*
 * Problem   : 1857D - Strong Vertices
 * Link      : https://codeforces.com/contest/1857/problem/D
 * Submission: https://codeforces.com/contest/1857/submission/217683028
 * Rating    : 1300   Tags: math, sortings, trees
 * Verdict   : Accepted (140 ms, 4700 KB)
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
    int n;
    cin >> n;
    vi a(n), b(n);
    vpi lst(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    rep(i, 0, n){
        lst[i].ff = a[i]-b[i];
        lst[i].ss = i+1;
    }
    sort(all(lst));
    int i = n-1;
    vi ans;
    while(i>=0 && lst[n-1].ff==lst[i].ff){
        ans.pb(lst[i].ss);
        i--;
    }
    sort(all(ans));
    cout << ans.size() << endl;
    for(auto it: ans) cout << it << " "; cout << endl;
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
