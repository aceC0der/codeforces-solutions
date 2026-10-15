/*
 * Problem   : 1843E - Tracking Segments
 * Link      : https://codeforces.com/contest/1843/problem/E
 * Submission: https://codeforces.com/contest/1843/submission/210564898
 * Rating    : 1600   Tags: binary search, brute force, data structures, two pointers
 * Verdict   : Accepted (93 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-21 (Practice)
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

bool ok(vi &query, vpi& ranges, ll n, ll mid){
    // cout << "*****" << endl;
    // cout << mid << endl;
    vi pref(n+1, 0);
    rep(i, 0, mid+1){
        // cout << query[i] << " ";
        pref[query[i]]=1;
    }
    // cout << endl;
    rep(i, 1, n+1){
        pref[i] += pref[i-1];
    }
    int cnt = 0;
    // rep(i, 0, n+1) cout << pref[i] << " "; cout << endl;
    rep(i, 0, ranges.size()){
        ll val = pref[ranges[i].ss]-pref[ranges[i].ff-1];
        ll hf = ranges[i].ss-ranges[i].ff+1;
        // cout << ranges[i].ff << " " << ranges[i].ss << endl;
        hf = hf/2 + 1;
        // cout << val << " " << hf << endl;
        if(val>=hf){
            cnt++;
        }
    }
    // cout << "*******" << endl;
    return (cnt>0);
}

void solve(){
    ll n, m;
    cin >> n >> m;
    vpi ranges(m);
    rep(i, 0, m){
        cin >> ranges[i].ff >> ranges[i].ss;
    }
    ll q;
    cin >> q;
    vi query(q);
    rep(i, 0, q) cin >> query[i];
    ll l=0, r=q-1;
    ll ans = -2;
    while(l<=r){
        ll mid = (l+r)/2;
        if(ok(query, ranges, n, mid)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout << ans+1 << endl;
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
