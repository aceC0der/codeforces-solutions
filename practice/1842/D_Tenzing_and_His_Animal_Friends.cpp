/*
 * Problem   : 1842D - Tenzing and His Animal Friends 
 * Link      : https://codeforces.com/contest/1842/problem/D
 * Submission: https://codeforces.com/contest/1842/submission/210992044
 * Rating    : 1900   Tags: constructive algorithms, graphs, greedy
 * Verdict   : Accepted (15 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-25 (Practice)
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

ll find(ll i, vl& par){
    if(par[i]==i) return i;
    return par[i] = find(par[i], par);
}

void unionn(ll u, ll v, vl& par){
    ll pu = find(u, par);
    ll pv = find(v, par);
    par[pu] = pv;
}

void solve(){
    ll n, m;
    cin >> n >> m;
    vl par(n);
    rep(i, 0, n) par[i] = i;
    vpl adj[n];
    rep(i, 0, m){
        ll u, v, w;
        cin >> u >> v >> w;
        u--;v--;
        unionn(u, v, par);
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }
    // rep(i, 0, n) cout << find(i, par) << " "; cout << endl;
    rep(i, 0, n) par[i] = find(i, par);
    if(find(0, par)!=find(n-1, par)){
        cout << "inf" << endl;
        return;
    }
    string s = "";
    rep(i, 0, n-1) s+="1";
    s+="0";
    vl dist(n, LONG_LONG_MAX);
    dist[n-1] = 0;
    priority_queue<pl> pq;
    pq.push({0, n-1});
    while(!pq.empty()){
        ll node = pq.top().ss;
        ll pos = pq.top().ff*-1;
        pq.pop();
        for(auto it: adj[node]){
            ll v = it.ff;
            ll w = it.ss;
            if(dist[node]+w<dist[v]){
                dist[v] = dist[node]+w;
                pq.push({-dist[v], v});
            }
        }
    }
    priority_queue<pl> pq2;
    rep(i, 0, n-1){
        pq2.push({-dist[i], i});
    }
    ll last = 0;
    vector<pair<string, ll>> ans;
    ll xp = 0;
    while(!pq2.empty()){
        ll node = pq2.top().ss;
        ll pos = pq2.top().ff*-1;
        pq2.pop();
        ll t = pos-last;
        xp += t;
        if(t) ans.pb({s, t});
        s[node] = '0';
        last = pos;
        if(node==0) break;
    }
    int sz = ans.size();
    // vector<pair<string, ll>> rans;
    // int i = 0;
    // for(auto it: ans){
    //     while(it.ss>1 && sz<n*n){
    //         ans.pb({it.ff, 1});
    //         ans[i].ss--;
    //         it.ss--;
    //         sz++;
    //     }
    //     i++;
    // }
    cout << dist[0] << " " << ans.size() << endl;
    for(auto it: ans){
        cout << it.ff << " " << it.ss << endl;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
        solve();
    return 0;
}
