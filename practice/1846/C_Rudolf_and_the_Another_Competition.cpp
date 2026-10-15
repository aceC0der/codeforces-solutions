/*
 * Problem   : 1846C - Rudolf and the Another Competition
 * Link      : https://codeforces.com/contest/1846/problem/C
 * Submission: https://codeforces.com/contest/1846/submission/213001497
 * Rating    : 1200   Tags: constructive algorithms, data structures, dp, greedy, sortings
 * Verdict   : Accepted (78 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-07-09 (Practice)
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
    ll n, m, h;
    cin >> n >> m >> h;
    ll ans = 1;
    vl a(m);
    pl my;
    rep(i, 0, n){
        rep(j, 0, m){
            cin >> a[j];
        }
        sort(all(a));
        ll sum = 0;
        ll k=0;
        ll penalty=0;
        while(k<m && sum<h){
            if(sum+a[k]>h) break;
            sum+=a[k];
            penalty += sum;
            k++;
        }
        // cout << k << " " << penalty << " " << i+1 << endl;
        // cout << k << " " << penalty << endl;
        if(i) {
            if(mp(-k, penalty)<my) ans++;
        }
        else my = {-k, penalty};
    }
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
