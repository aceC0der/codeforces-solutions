/*
 * Problem   : 1810E - Monsters
 * Link      : https://codeforces.com/contest/1810/problem/E
 * Submission: https://codeforces.com/contest/1810/submission/209877829
 * Rating    : 2100   Tags: brute force, data structures, dfs and similar, dsu, graphs, greedy
 * Verdict   : Accepted (420 ms, 27000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-16 (Practice)
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

ll find(ll p, vl& par){
    if(par[p]==p) return p;
    return par[p] = find(par[p], par);
}

void unionn(ll a, ll b, vl& par){
    ll pa = find(a, par);
    ll pbb = find(b, par);
    par[pa] = pbb;
}

void solve(){
    ll n, m;
    cin >> n >> m;
    vl adj[n];
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    vl freq(n, 0);
    vl par(n);
    rep(i, 0, n) par[i] = i;
    rep(i, 0, m){
        int u, v;
        cin >> u >> v;
        u--;v--;
        freq[u]++;
        freq[v]++;
        adj[u].pb(v);
        adj[v].pb(u);
        unionn(u, v, par);
    }
    ll cnt = 0;
    rep(i, 0,n){
        if(par[i]==i) cnt++;
    }
    if(cnt>1){
        cout << "NO" << endl;
        return;
    }
    set<pl> srcs;
    rep(i, 0, n){
        if(a[i]==0){
            srcs.insert({-freq[i], i});
        }
    }
    while(!srcs.empty()){
        auto it = *srcs.begin();
        ll src = it.ss;
        srcs.erase(it);
        priority_queue<pl> pq;
        pq.push({-a[src], src});
        vector<bool> vis(n, false);
        bool f = true;
        ll power = 0;
        vis[src] = true;
        // cout << "source :" << src+1 << endl;
        while(!pq.empty()){
            ll node = pq.top().ss;
            ll villain = pq.top().ff*-1;
            // cout << node+1 << " " << power << " " << villain << endl;
            pq.pop();
            if(power<villain){
                f = false;
                break;
            }
            power++;
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it] = true;
                    if(a[it]==0 && srcs.count({-freq[it], it})){
                        srcs.erase({-freq[it], it});
                    }
                    pq.push({-a[it], it});
                }
            }
        }
        if(power==n){
            // cout << src+1 << endl;
            cout << "YES" << endl;
            return;
        }
        // pq.clear();
    }
    cout << "NO" << endl;
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
