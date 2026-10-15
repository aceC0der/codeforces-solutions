/*
 * Problem   : 1419D1 - Sage's Birthday (easy version)
 * Link      : https://codeforces.com/contest/1419/problem/D1
 * Submission: https://codeforces.com/contest/1419/submission/221778882
 * Rating    : 1000   Tags: binary search, constructive algorithms, greedy, sortings
 * Verdict   : Accepted (77 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-04 (Practice)
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
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    int l = 0, r = n/2 - 1 + n%2;
    cout << r << endl;
    if(!(n&1)) r++;
    bool f=true;
    int cnt = 0;
    while(cnt < n){
        if(f){
            cout << a[r] << " ";
            r++;
        }
        else{
            cout << a[l] << " ";
            l++;
        }
        cnt++;
        f = !f;
    }


}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    // TestCases{
        solve();
    // }
    return 0;
}
