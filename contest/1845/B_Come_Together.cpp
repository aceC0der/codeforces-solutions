/*
 * Problem   : 1845B - Come Together
 * Link      : https://codeforces.com/contest/1845/problem/B
 * Submission: https://codeforces.com/contest/1845/submission/211472835
 * Rating    : 900   Tags: geometry, implementation, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-29 (Contest)
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
    int xa, xb, xc, ya, yb, yc;
    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xc >> yc;
    int distx = 0, disty = 0;
    // cout << ya << " " << yb << " " << yc << endl;
    if((xa>=xb && xa>=xc) || (xa<=xb && xa<=xc)){
        distx = min(abs(xa-xb), abs(xa-xc));
    }
    if((ya>=yb && ya>=yc) || (ya<=yb && ya<=yc)){
        disty = min(abs(ya-yb), abs(ya-yc));
        // cout << "*" << endl;
    }
    // cout << distx << " " << disty << endl;
    cout << distx+disty+1 << endl;
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
