/*
 * Problem   : 1709B - Also Try Minecraft
 * Link      : https://codeforces.com/contest/1709/problem/B
 * Submission: https://codeforces.com/contest/1709/submission/225816859
 * Rating    : 900   Tags: data structures, dp, implementation
 * Verdict   : Accepted (124 ms, 2400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-29 (Practice)
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
    ll n, q;
    cin >> n >> q;
    vl a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    vl pref(n+1), suf(n+2);
    rep(i, 2, n+1){
        ll dif = a[i-1]-a[i];
        pref[i] = pref[i-1]+max(0LL, dif);
    }
    pre(i, n-1, 1){
        ll dif = a[i+1]-a[i];
        suf[i] = suf[i+1]+max(0LL, dif);
    }
    // rep(i, 1, n+1) cout << pref[i] << " " ; cout << endl;
    // rep(i, 1, n+1) cout << suf[i] << " " ; cout << endl;
    while(q--){
        ll s, d;
        cin >> s >> d;
        if(s>d){
            cout << suf[d]-suf[s] << endl;
        }
        else{
            cout << pref[d]-pref[s] << endl;
        }
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
