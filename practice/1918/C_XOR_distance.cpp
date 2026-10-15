/*
 * Problem   : 1918C - XOR-distance
 * Link      : https://codeforces.com/contest/1918/problem/C
 * Submission: https://codeforces.com/contest/1918/submission/244175750
 * Rating    : 1400   Tags: bitmasks, greedy, implementation, math
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-01-31 (Practice)
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
    ll a, b, r;
    cin >> a >> b >> r;
    ll x = a^b;
    ll t = 0;
    if(a>b) swap(a, b);
    bool f = false;
    pre(i, 62, 0){
        // ll na = 0, nb = 0;
        if(CheckBit(b,i) && !CheckBit(a,i)){
            if(f && (t+(1ll<<i))<=r){
                t += (1ll<<i);
            }
            f = true;
        }
    }
    a^=t;
    b^=t;
    cout << abs(a-b) << endl;
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
