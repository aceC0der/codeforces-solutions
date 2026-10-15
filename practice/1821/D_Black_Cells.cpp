/*
 * Problem   : 1821D - Black Cells
 * Link      : https://codeforces.com/contest/1821/problem/D
 * Submission: https://codeforces.com/contest/1821/submission/210833831
 * Rating    : 1900   Tags: binary search, brute force, greedy, math
 * Verdict   : Accepted (140 ms, 9300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-24 (Practice)
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
    ll n, k;
    cin >> n >> k;
    vl l(n), r(n);
    rep(i, 0, n) cin >> l[i];
    rep(i, 0, n) cin >> r[i];
    vpl ranges;
    ranges.pb({l[0], r[0]});
    rep(i, 1, n){
        pi last = ranges.back();
        if(last.ss==l[i]-1){
            ranges[ranges.size()-1].ss = r[i];
        }
        else{
            ranges.pb({l[i], r[i]});
        }
    }
    n = ranges.size();
    // rep(i, 0, n) cout << ranges[i].ff << " " << ranges[i].ss << endl;
    ll i=0;
    priority_queue<ll> pq;
    ll rem = 0, last = 0;
    ll cnt = 0;
    ll c = 0;
    ll s = 0;
    ll mn = INT_MAX;
    while(i<n){
        ll val = ranges[i].ss-ranges[i].ff+1;
        // cout <<i << " " << n << " " <<  k << " " << val << "**)*" << endl;
        if(val==1) c++;
        else s+=val;
        if(s>=k) mn = min(mn,  ranges[i].ss-(s-k)+2*(i+1-c));
        else if(s<k && s+c>=k) mn = min(mn, ranges[i].ss+2*(i+1-c+k-s)*1LL);
        i++;
    }
    if(mn==INT_MAX) mn = -1;
    cout << mn << endl;
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
