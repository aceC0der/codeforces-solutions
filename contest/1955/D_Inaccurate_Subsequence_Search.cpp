/*
 * Problem   : 1955D - Inaccurate Subsequence Search
 * Link      : https://codeforces.com/contest/1955/problem/D
 * Submission: https://codeforces.com/contest/1955/submission/255712719
 * Rating    : 1400   Tags: data structures, two pointers
 * Verdict   : Accepted (624 ms, 13800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-04-08 (Contest)
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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n);
    vi b(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) cin >> b[i];
    map<int, int> freqb;
    rep(i, 0, m){
        freqb[b[i]]++;
    }
    map<int, int> freqc;
    int crr_match = 0;
    int l=0, r=0;
    while(r<m){
        freqc[a[r]]++;
        if(freqc[a[r]]<=freqb[a[r]]) crr_match++;
        r++;
    }
    int ans = (crr_match>=k);
    while(r<n){
        if(freqc[a[l]]<=freqb[a[l]]){
            crr_match--;
        }
        freqc[a[l]]--;
        l++;
        freqc[a[r]]++;
        if(freqc[a[r]]<=freqb[a[r]]) crr_match++;
        r++;
        if(crr_match>=k) ans++;
    }
    cout << ans << endl;
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
