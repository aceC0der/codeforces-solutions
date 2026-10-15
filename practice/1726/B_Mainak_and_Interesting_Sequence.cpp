/*
 * Problem   : 1726B - Mainak and Interesting Sequence
 * Link      : https://codeforces.com/contest/1726/problem/B
 * Submission: https://codeforces.com/contest/1726/submission/226853493
 * Rating    : 1100   Tags: bitmasks, constructive algorithms, math
 * Verdict   : Accepted (77 ms, 400 KB)
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
    int n, m;
    cin >> n  >> m;
    vi a(n);
    if(m<n){
        cout << "No" << endl;
        return;
    }
    int rem = m%n;
    // cout << rem << endl;
    if(!rem){
        cout << "Yes" << endl;
        int div = m/n;
        rep(i, 0, n) cout << div << " "; cout << endl;
        return;
    }
    if(rem%2==n%2 && n%2==0){
        cout << "Yes" << endl;
        rep(i, 0, n-2){
            cout << m/n << " ";
        }
        cout << m/n + rem/2 << " " << m/n + rem/2 << endl;
    }
    else if(n%2){
        cout << "Yes" << endl;
        rep(i, 0, n-1){
            cout << m/n << " ";
        }
        cout << m/n + rem << endl;
    }
    else{
        cout << "No" << endl;
    }

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
