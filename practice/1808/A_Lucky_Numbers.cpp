/*
 * Problem   : 1808A - Lucky Numbers
 * Link      : https://codeforces.com/contest/1808/problem/A
 * Submission: https://codeforces.com/contest/1808/submission/209956563
 * Rating    : 900   Tags: brute force, implementation
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-17 (Practice)
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

int diffs(int x){
    int mx=-1;
    int mn=10;
    while(x){
        int d = x%10;
        x/=10;
        mx = max(mx, d);
        mn = min(mn, d);
    }
    return mx-mn;
}

void solve(){
    // int n;
    // cin >> n;
    int l, r;
    cin >> l >> r ;
    int mx = -1;
    int ans = 0;
    if(r-l>=100){
        int ans = l%100;
        if(ans>90){
            ans = ans%10;
            ans = 10-ans;
            l += ans+90;
            cout << l << endl;
            // return;
            // ans = l+100
        }
        else{
            ans = 90-ans;
            l += ans;
            cout << l << endl;
        }
        // ans+=l;
        // cout << ans << endl;
        return;
    }
    rep(i, l, r+1){
        int df = diffs(i);
        if(df>mx){
            ans = i;
            mx = df;
        }
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
