/*
 * Problem   : 1968C - Assembly via Remainders
 * Link      : https://codeforces.com/contest/1968/problem/C
 * Submission: https://codeforces.com/contest/1968/submission/259173908
 * Rating    : 1000   Tags: constructive algorithms, number theory
 * Verdict   : Accepted (109 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-02 (Contest)
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
    vi a(n);
    rep(i, 1, n) cin >> a[i];
    vi ans(n);
    ans[n-1] = a[n-1];
    ans[n-2] = 500*501;
    if(n==2){
        cout << 1000 << " " << a[1] << endl;
        return;
    }
    // 
    pre(i, n-3, 0){
        // int dif = ans[i+1]-a[i];
        ans[i] = ans[i+1]-a[i+1];
        // cout << i << " : " << ans[i] << " " << a[i] << " " << ans[i+1] << endl;
    }
    rep(i, 0, n) cout << ans[i] << " "; cout << endl;
    // rep(i, 1, n){
    //     cout << ans[i]%ans[i-1] << " ";
    // }
    // cout << endl;
    // rep(i, 1, n) cout << a[i] << " "; cout << endl;
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
