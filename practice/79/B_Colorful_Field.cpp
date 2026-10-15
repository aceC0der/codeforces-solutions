/*
 * Problem   : 79B - Colorful Field
 * Link      : https://codeforces.com/contest/79/problem/B
 * Submission: https://codeforces.com/contest/79/submission/221786779
 * Rating    : 1400   Tags: implementation, sortings
 * Verdict   : Accepted (30 ms, 0 KB)
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
    ll n, m, k, t;
    cin >> n >> m >> k >> t;
    vi a(k);
    rep(i, 0, k){
        ll x, y;
        cin >> x >> y;
        int value = (x-1)*m + y;
        a[i] = value;
    }
    sort(all(a));
    // rep(i, 0, k) cout << a[i] << " "; cout << endl;
    while(t--){
        ll i, j;
        cin >> i >> j;
        ll x = (i-1)*m+j;
        // cout << i << " " << j << ": " << x << ": ";
        ll l = 0, r = k-1;
        // int res = 0;
        string ans[] = {"Grapes", "Carrots", "Kiwis" };
        ll v = 0;
        while(l<=r){
            ll mid = (r+l)/2;
            if(a[mid]==x){
                v = mid;
                break;
            }
            if(a[mid]<x){
                // if(mid==l) break;
                v = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        // cout << a[v] << "**" << endl;
        if(a[v]==x){
            cout << "Waste" << endl;
            continue;
        }
        if(a[v]>x) v--;
        ll valid = x-(v+1);
        ll res = (valid)%3;
        cout << ans[res] << endl;
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
