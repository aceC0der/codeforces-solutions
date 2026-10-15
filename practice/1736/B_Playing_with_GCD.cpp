/*
 * Problem   : 1736B - Playing with GCD
 * Link      : https://codeforces.com/contest/1736/problem/B
 * Submission: https://codeforces.com/contest/1736/submission/226876224
 * Rating    : 1200   Tags: math, number theory
 * Verdict   : Accepted (31 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-10-06 (Practice)
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

int lcm(int a, int b){
    int g = __gcd(a, b);
    return (1LL*a*b)/g;
}

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
    rep(i, 0, n) cin >> a[i];
    int x = a[0];
    vi b(n+1);
    b[0] = a[0];
    b[n] = a[n-1];
    rep(i, 1, n){
        b[i] = lcm(a[i-1], a[i]);
    }
    // rep(i, 0, n+1) cout << b[i] << " " ; cout << endl;
    rep(i, 1, n){
        int g = __gcd(b[i-1], b[i]);
        if(g!=a[i-1]){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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
