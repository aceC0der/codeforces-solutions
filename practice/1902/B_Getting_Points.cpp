/*
 * Problem   : 1902B - Getting Points
 * Link      : https://codeforces.com/contest/1902/problem/B
 * Submission: https://codeforces.com/contest/1902/submission/248430752
 * Rating    : 1100   Tags: binary search, brute force, greedy
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-02-27 (Practice)
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
    ll n, p, l, t;
    cin >> n >> p >> l >> t;
    ll fullWk = n/7 + (n%7!=0);
    ll dtask = fullWk/2;
    ll points = dtask*2*t + dtask*l;
    // cout << p << " " << dtask << " " << points << endl;
    if(p<points){
        // cout << "******" << endl;
        ll ans = p/(2*t+l) + (p%(2*t+l)!=0);
        cout << n-ans << endl;
        return;
    }
    p-=points;
    ll days = dtask;
    if(fullWk%2){
        p-=(l+t);
        days++;
        if(p<=0){
            cout << n-days << endl;
            return;
        }
    }
    // cout << p << " ^^ " << days << endl;
    days += (p/l)+(p%l!=0);
    cout << n-days << endl;


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
