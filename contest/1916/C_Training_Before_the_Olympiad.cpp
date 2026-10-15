/*
 * Problem   : 1916C - Training Before the Olympiad
 * Link      : https://codeforces.com/contest/1916/problem/C
 * Submission: https://codeforces.com/contest/1916/submission/239662566
 * Rating    : 1200   Tags: constructive algorithms, games, greedy, implementation, math
 * Verdict   : Accepted (77 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-12-30 (Contest)
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
    ll n;
    cin >> n;
    vl a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    int odd=0, even=0;
    ll sum = 0;
    rep(i, 0, n){
        sum += a[i];
        if(a[i]&1){
            odd++;
        }
        int mv = odd/3 + (odd%3==1 && i>0);
        cout << sum-mv << " ";
    }
    cout << endl;

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
