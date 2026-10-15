/*
 * Problem   : 2014E - Rendez-vous de Marian et Robin
 * Link      : https://codeforces.com/contest/2014/problem/E
 * Submission: https://codeforces.com/contest/2014/submission/282359042
 * Rating    : 1800   Tags: dfs and similar, graphs, shortest paths
 * Verdict   : Accepted (890 ms, 17800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-21 (Contest)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
#define int ll

const int INF = 1e16;


void dijkstra(int s, vector<vi> & d, vb& horse, vector<vpi>& adj) {
    int n = adj.size();

    d[0][s] = 0;
    if(horse[s]){
        d[1][s] = 0;
    }
    set<pair<int, int>> q;
    q.insert({0, s});
    while (!q.empty()) {
        int v = q.begin()->second;
        q.erase(q.begin());

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            int lenh = len/2;
            if (d[1][v] + lenh < d[1][to]) {
                q.erase({d[1][to], to});
                d[1][to] = d[1][v] + lenh;
                q.insert({d[1][to], to});
            }

            if (d[0][v] + len < d[0][to]) {
                q.erase({d[0][to], to});
                d[0][to] = d[0][v] + len;
                q.insert({d[0][to], to});
                if(horse[to] && d[0][to]<d[1][to]){
                    d[1][to] = d[0][to];
                }
            }
        }

    }
}

void solve(){
    int n, m, h;
    cin >> n >> m >> h;
    vector<vpi> adj(n);
    // cout << n << " " << m << " " << h << endl;
    vb horse(n+10);
    rep(i, 0, h){
        int x;
        cin >> x;
        x--;
        horse[x] = true;
    }
    rep(i, 0, m){
        int u, v, w;
        cin >> u >> v >> w;
        u--;v--;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }
    vector<vi> dA(2, vi(n, INF)), dB(2, vi(n, INF));
    // cout << "****" << endl;
    // return;
    dijkstra(0, dA, horse, adj);
    dijkstra(n-1, dB, horse, adj);

    vi ddA(n), ddB(n);
    rep(i, 0, n){
        ddA[i] = min(dA[0][i], dA[1][i]);
        ddB[i] = min(dB[0][i], dB[1][i]);
    }
    int ans = LLONG_MAX;
    // rep(i, 0, n) cout << dA[0][i] << " "; cout << endl;
    // rep(i, 0, n) cout << dA[1][i] << " "; cout << endl;
    // cout << endl;
    // rep(i, 0, n) cout << dB[0][i] << " "; cout << endl;
    // rep(i, 0, n) cout << dB[1][i] << " "; cout << endl;
    // cout << endl;
    // rep(i, 0, n) cout << ddA[i] << " "; cout << endl;
    // rep(i, 0, n) cout << ddB[i] << " "; cout << endl;
    rep(i, 0, n){
        ans  = min(ans, max(ddA[i], ddB[i]));
    }
    if(ans>=INF){
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
}

int32_t main()
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
