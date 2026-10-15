/*
 * Problem   : 1971E - Find the Car
 * Link      : https://codeforces.com/contest/1971/problem/E
 * Submission: https://codeforces.com/contest/1971/submission/260434573
 * Rating    : 1500   Tags: binary search, math, sortings
 * Verdict   : Accepted (187 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-10 (Practice)
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
    ll n, k, q;
    cin >> n >> k >> q;
    ll a[k+1];
    ll b[k+1];
    rep(i, 1, k+1) cin >> a[i];
    rep(i, 1, k+1) cin >> b[i];
    a[0] = b[0] = 0;
    while(q--){
        ll ask;
        cin >> ask;
        if(ask==n){
            cout << b[k] << " ";
            continue;
        }
        ll p = 0;
        ll l = 0, r = k;
        while(l<=r){
            ll mid = (l+r)/2;
            if(a[mid]<=ask){
                p = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        if(p>=k){
            cout << b[k] << " ";
            continue;
        }
        // cout << a[p] << "** ";
        ll dif = (b[p+1]-b[p]);
        ll dist = (a[p+1]-a[p]);
        ll d = ask-a[p];
        ll extra = (dif*d)/dist;
        ll e = extra;

        ll ans = b[p]+e;
        // cout << extra << " " << round(extra) << " | ";
        cout << ans << " ";
    }
    cout << endl;



}

int main()
{
    
    fios
    TestCases{
        solve();
    }
    return 0;
}
