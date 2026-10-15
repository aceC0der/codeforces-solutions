/*
 * Problem   : 1914D - Three Activities
 * Link      : https://codeforces.com/contest/1914/problem/D
 * Submission: https://codeforces.com/contest/1914/submission/237995318
 * Rating    : 1200   Tags: brute force, dp, greedy, implementation, sortings
 * Verdict   : Accepted (124 ms, 2400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-12-19 (Contest)
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
    vpi a(n), b(n), c(n);
    rep(i, 0, n) {
        cin >> a[i].ff;
        a[i].ss = i;
    }
    rep(i, 0, n) {
        cin >> b[i].ff;
        b[i].ss = i;
    }
    rep(i, 0, n) {
        cin >> c[i].ff;
        c[i].ss = i;
    }


    sort(all(a), greater<pi>());
    sort(all(b), greater<pi>());
    sort(all(c), greater<pi>());

    ll mx = 0, sum = 0;
    rep(i, 0, 3){
        rep(j, 0, 3){
            rep(k, 0, 3){
                sum = 0;
                sum += a[i].ff + b[j].ff + c[k].ff;
                if(a[i].ss!=b[j].ss && a[i].ss!=c[k].ss && b[j].ss != c[k].ss){
                    mx = max(mx, sum);
                }
            }
        }
    }
    cout << mx << endl;
    
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("INPUT.txt", "r", stdin);
        freopen("OUTPUT.txt", "w", stdout);
    #endif
 
    fios
    TestCases{
        solve();
    }
    return 0;
}
