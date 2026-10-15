/*
 * Problem   : 1997D - Maximize the Root
 * Link      : https://codeforces.com/contest/1997/problem/D
 * Submission: https://codeforces.com/contest/1997/submission/277770898
 * Rating    : 1500   Tags: binary search, dfs and similar, dp, greedy, trees
 * Verdict   : Accepted (218 ms, 16200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-08-23 (Practice)
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


int dfs(int i, vi& a, vector<vi>& adj){
    int mn = INT_MAX;
    for(int x: adj[i]){
        mn = min(dfs(x, a, adj), mn);
    }
    if(mn==INT_MAX) mn = a[i];
    if(mn>=a[i]){
        a[i] = (a[i]+mn)/2;
        return a[i];
    }
    return mn;
}



void solve(){
    int n;
    cin >> n;
    vi a(n), p(n);
    rep(i, 0, n) cin >> a[i];
    vector<vi> adj(n);
    rep(i, 1, n){
        cin >> p[i];
        p[i]--;
        adj[p[i]].push_back(i);
    }
    int mn = INT_MAX, mnPos = 0;
    for(auto x: adj[0]){
        mn = min(mn, dfs(x, a, adj));
    }
    
    cout << a[0]+mn << endl;


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
