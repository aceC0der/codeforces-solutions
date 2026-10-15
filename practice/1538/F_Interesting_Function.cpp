/*
 * Problem   : 1538F - Interesting Function
 * Link      : https://codeforces.com/contest/1538/problem/F
 * Submission: https://codeforces.com/contest/1538/submission/223446042
 * Rating    : 1500   Tags: binary search, dp, math, number theory
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-15 (Practice)
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

vl contribution;

void solve(){
    ll L, R;
    cin >> L >> R;
    int ans = 0;
    while (L != 0 || R != 0) {
        ans += R - L;
        L /= 10;
        R /= 10;
    }
    cout << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    contribution.pb(1);
    rep(i, 1, 12){
        contribution.pb(contribution.back()*10+1);
    }
    // rep(i, 0, 10){
    //     cout << contribution[i] << " ";
    // }
    // cout << endl;
    fios
    TestCases{
        solve();
    }
    return 0;
}
