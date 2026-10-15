/*
 * Problem   : 1627C - Not Assigning
 * Link      : https://codeforces.com/contest/1627/problem/C
 * Submission: https://codeforces.com/contest/1627/submission/163029859
 * Rating    : 1400   Tags: constructive algorithms, dfs and similar, number theory, trees
 * Verdict   : Accepted (171 ms, 7600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-06 (Practice)
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
        // map<pi, int> m;
        vi adj[n+1];
        int maxi = -1;
        map<pi, int> m;
        vpi edge(n-1);
        int last, first;
        rep(i, 0, n-1){
            int u, v;
            cin >> u >> v;
            if(u>v) swap(u, v);
            edge[i] = mp(u, v);
            adj[u].pb(v);
            adj[v].pb(u);
            int m = max(adj[u].size(), adj[v].size());
            maxi = max(maxi, m);
        }
        if(maxi>2){
            cout << -1 << endl;
        }
        else{
            int start;
            rep(i, 1, n+1){
                if(adj[i].size()==1){
                    start = i;
                    break;
                }
            }
            // cout << start << endl;
            int x = start, y = adj[start][0];
            if(x>y) swap(x, y);
            m[mp(x, y)] = 2;
            int p = start;
            start = adj[start][0];
            bool f = true;
            while(adj[start].size()!=1){
                int i = 0;
                if(adj[start][i]==p) i++;
                int x = start, y = adj[start][i];
                if(x>y) swap(x, y);
                m[mp(x, y)] = (f? 5 : 2);
                p = start;
                start = adj[start][i];
                f = !f;
            }
            rep(i, 0, n-1){
                cout << m[edge[i]] << " ";
            }
            cout << endl;
            
        }

    }
    return 0;
}
