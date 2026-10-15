/*
 * Problem   : 1702E - Split Into Two Sets
 * Link      : https://codeforces.com/contest/1702/problem/E
 * Submission: https://codeforces.com/contest/1702/submission/163596064
 * Rating    : 1600   Tags: dfs and similar, dsu, graphs
 * Verdict   : Accepted (93 ms, 7200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-11 (Practice)
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


int main()
{
    fios
    TestCases{
        int n;
        cin >> n;
        vpi arr(n);
        bool flag = true;
        vector<int> adj[n];
        set<int> in;
        rep(i, 0, n){
            int x, y;
            cin >> x >> y;
            // cout << x << " " << y << endl;
            x--;
            y--;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        // cout << endl;
        vector<bool> vis(n+1, false);
        rep(i, 0, n){
            if(adj[i].size()<1) continue;
            if(adj[i].size()>2){
                flag = false;
                break;
            }
            int j = i, k = adj[i][0];
            int len = 0;
            while(!vis[j] && adj[j].size()==2){
                vis[j] = true;
                len++;
                k ^= adj[j][0] ^ adj[j][1];
                swap(j, k);
                // cout << j << " " << k << endl;
            }
            // cout << j << " " << i << " " << len << endl;
            if(j==i && (len&1)){
                flag = false;
                break;
            }
        }
        cout << (flag? "YES" : "NO") << endl;
    }
    return 0;
}
