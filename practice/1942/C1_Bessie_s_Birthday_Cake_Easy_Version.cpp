/*
 * Problem   : 1942C1 - Bessie's Birthday Cake (Easy Version)
 * Link      : https://codeforces.com/contest/1942/problem/C1
 * Submission: https://codeforces.com/contest/1942/submission/254346081
 * Rating    : 1300   Tags: geometry, greedy, math
 * Verdict   : Accepted (233 ms, 13500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-04-01 (Practice)
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
// const int N = 300010;
// bool vis[N];

void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    int a[x];
    rep(i, 0, x) cin >> a[i];
    int cake = max(x-2, 0);
    map<int, bool> vis;
    rep(i, 0, x) vis[a[i]] = true;

    rep(i, 0, x){
        int mid = (a[i]+1)%n;
        if(!mid) mid = n;
        int nxt = (a[i]+2)%n;
        if(!nxt) nxt = n;
        // cout << a[i] << " " << mid << " " << nxt << endl;
        if(vis[nxt] && !vis[mid]){
            cake++;
        }
    }
    cout << cake << endl;
    // rep(i, 0, x) vis[a[i]] = false;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // rep(i, 0, N) vis[i] = false;
    fios
    TestCases{
        solve();
    }
    return 0;
}
