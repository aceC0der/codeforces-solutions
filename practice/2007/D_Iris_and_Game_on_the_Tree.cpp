/*
 * Problem   : 2007D - Iris and Game on the Tree
 * Link      : https://codeforces.com/contest/2007/problem/D
 * Submission: https://codeforces.com/contest/2007/submission/278955753
 * Rating    : 1700   Tags: games, graphs, greedy, trees
 * Verdict   : Accepted (218 ms, 2600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-08-31 (Practice)
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


void dfs(int node, vector<vi>& adj, vector<bool>& isLeaf, int par){
    bool f= true;
    for(auto nxt: adj[node]){
        if(nxt!=par){
            dfs(nxt, adj, isLeaf, node);
            f = false;
        }
    }
    isLeaf[node] = f;
}



void solve(){
    int n;
    cin >> n;
    string s;
    vector<vi> adj(n);
    rep(i, 0, n-1){
        int u, v;
        cin >> u >> v;
        u--;v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    cin >> s;
    vector<bool> isLeaf(n);
    dfs(0, adj, isLeaf, -1);
    int uImp = 0, zero = 0, one = 0, q = 0;
    rep(i, 1, n){
        if(isLeaf[i]){
            zero+=(s[i]=='0');
            one+=(s[i]=='1');
            q+=(s[i]=='?');
        }
        else if(s[i]=='?') uImp++;
    }
    // cout << zero << " " << one << " " << q << endl;
    int ans = 0;
    if(s[0]=='?'){
        if(one==zero && uImp%2){
            ans = one+(q+1)/2;
        }
        else ans = max(one, zero) + q/2;
    }
    else if(s[0]=='1'){
        ans = zero + (q+1)/2;
    }
    else{
        ans = one + (q+1)/2;
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
