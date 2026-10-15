/*
 * Problem   : 1944B - Equal XOR
 * Link      : https://codeforces.com/contest/1944/problem/B
 * Submission: https://codeforces.com/contest/1944/submission/251725785
 * Rating    : 1100   Tags: bitmasks, constructive algorithms
 * Verdict   : Accepted (46 ms, 2200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-03-16 (Contest)
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
    int n, k;
    cin >> n >> k;
    vi a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    vi dupA, dupB, unA, unB;
    vi freq(n+1, 0);
    rep(i, 0, n){
        freq[a[i]]++;
    }
    rep(i, 1, n+1){
        if(freq[i]==2) dupA.pb(i);
        else if(freq[i]) unA.pb(i);
        freq[i]=0;
    }
    rep(i, 0, n){
        freq[b[i]]++;
    }
    rep(i, 1, n+1){
        if(freq[i]==2) dupB.pb(i);
        else if(freq[i]) unB.pb(i);
        freq[i]=0;
    }
    vi ansA, ansB;
    k*=2;
    // cout << k << "*******" << endl;
    rep(i, 0, dupA.size()){
        ansA.pb(dupA[i]);ansA.pb(dupA[i]);
        ansB.pb(dupB[i]);ansB.pb(dupB[i]);
        k-=2;
        if(!k) break;
    }
    // cout << k << ")))))))))))" << endl;
    rep(i, 0, unA.size()){
        if(!k) break;
        ansA.pb(unA[i]);
        ansB.pb(unB[i]);
        k--;
    }
    for(auto it: ansA) cout <<it << " "; cout << endl;
    for(auto it: ansB) cout <<it << " "; cout << endl;
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
