/*
 * Problem   : 1774E - Two Chess Pieces
 * Link      : https://codeforces.com/contest/1774/problem/E
 * Submission: https://codeforces.com/contest/1774/submission/185809255
 * Rating    : 1900   Tags: dfs and similar, dp, greedy, trees
 * Verdict   : Accepted (264 ms, 19800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-18 (Practice)
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

class st{
public:
    int cnt1=0, cnt2=0, mxd1=0, mxd2=0;
};

class Graph{
public:
    vector<vi> adj;
    vector<st> dp;
    vector<bool> d1, d2;
    int n;
    int d;
    int cnt;
    Graph(int s, int dd){
        adj.resize(s);
        dp.resize(s);
        d1.resize(s);
        d2.resize(s);
        n = s;
        d = dd;
        cnt = 0;
    }
    void addEdge(int i, int j){
        adj[i].pb(j);
        adj[j].pb(i);
    }
    st dfs(int root, vector<bool>& visited){
        visited[root] = true;
        rep(i, 0, adj[root].size()){
            int crnt = adj[root][i];
            if(visited[crnt]) continue;
            st s = dfs(crnt, visited);
            // cout << root << " " << crnt << endl;
            // cout << s.cnt1 << " " << s.mxd1 << " " << s.cnt2 << " " << s.mxd2 << endl; 
            dp[root].cnt1 += d1[crnt]+s.cnt1;
            dp[root].cnt2 += d2[crnt]+s.cnt2;
            // cout << dp[root].cnt1 << " " << dp[root].mxd1 << " " << dp[root].cnt2 << " " << dp[root].mxd2 << endl;
            if(s.cnt1 || d1[crnt]) dp[root].mxd1 = max(s.mxd1+1, dp[root].mxd1);
            if(s.cnt2 || d2[crnt]) dp[root].mxd2 = max(s.mxd2+1, dp[root].mxd2);
        }
        // dp[root].cnt1+=d1[root];
        // dp[root].cnt2+=d2[root];
        return dp[root];
    }
    void dodfs(int root){
        vector<bool> visited(n);
        visited[root] = true;
        rep(i, 0, adj[root].size()){
            int crnt = adj[root][i];
            st s = dfs(crnt, visited);
            // cout << root << " " << crnt << endl;
            // cout << s.cnt1 << " " << s.mxd1 << " " << s.cnt2 << " " << s.mxd2 << endl;

            dp[root].cnt1 += d1[crnt]+s.cnt1;
            dp[root].cnt2 += d2[crnt]+s.cnt2;
            // cout << dp[root].cnt1 << " " << dp[root].mxd1 << " " << dp[root].cnt2 << " " << dp[root].mxd2 << endl;
            dp[root].mxd1 = max(s.mxd1+1, dp[root].mxd1);
            dp[root].mxd2 = max(s.mxd2+1, dp[root].mxd2);
        }
    }

    void calc(int root, bool dsk1, bool dsk2, vector<bool>& visited){
        visited[root] = true;
        // cout << root << " " << dsk1 << " " << dsk2 << endl;
        cnt += dsk1 + dsk2;
        rep(i, 0, adj[root].size()){
            int crnt = adj[root][i];
            if(visited[crnt]) continue;
            bool ds1 = dsk1, ds2 = dsk2;
            ds1 &= ((d1[crnt] || dp[crnt].cnt1) || (dp[crnt].mxd2+1)>d);
            ds2 &= ((d2[crnt] || dp[crnt].cnt2) || (dp[crnt].mxd1+1)>d);
            if(dsk1 || dsk2) calc(crnt, ds1, ds2, visited);
        }
    }

    void doCalc(int root){
        vector<bool> visited(n);
        visited[root] = true;
        bool dsk1 = true, dsk2 = true;
        rep(i, 0, adj[root].size()){
            int crnt = adj[root][i];
            bool ds1 = dsk1, ds2 = dsk2;
            ds1 &= ((d1[crnt] || dp[crnt].cnt1) || (dp[crnt].mxd2+1)>d);
            ds2 &= ((d2[crnt] || dp[crnt].cnt2) || (dp[crnt].mxd1+1)>d);
            // cout << d1[crnt]+dp[crnt].cnt1 << " " << crnt << " " << ds1 << " " << ds2 << " " dp[crnt]<< endl;
            if(dsk1 || dsk2) calc(crnt, ds1, ds2, visited);
        }
    }
};

void solve(){
    int n, d;
    cin >> n >> d;
    Graph gh(n, d);
    rep(i, 0, n-1){
        int x, y;
        cin >> x >> y;
        x--;y--;
        // cout << x << " " << y << endl;
        gh.addEdge(x, y);
    }
    int m1, m2;
    cin >> m1;
    rep(i, 0, m1) {int x; cin >> x; gh.d1[--x]=true;}
    cin >> m2;
    rep(i, 0, m2) {int x; cin >> x; gh.d2[--x]=true;}
    gh.dodfs(0);
    // rep(i, 0, n) cout << gh.dp[i].cnt1 << " " << gh.dp[i].mxd1 << " " << gh.dp[i].cnt2 << " " << gh.dp[i].mxd2 << endl;
    gh.doCalc(0);
    cout << gh.cnt*2 << endl;

}

int main()
{
    fios
    
    solve();
    
    return 0;
}
