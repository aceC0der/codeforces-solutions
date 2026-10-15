/*
 * Problem   : 1691E - Number of Groups
 * Link      : https://codeforces.com/contest/1691/problem/E
 * Submission: https://codeforces.com/contest/1691/submission/226575990
 * Rating    : 2300   Tags: data structures, dfs and similar, dsu, graphs, greedy, sortings
 * Verdict   : Accepted (155 ms, 7900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-10-04 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds; 
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef pair<int, int> pii;
typedef vector<int> vi;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define vi vector<int>
// #define vl vector<ll>
// #define pi pair<int, int>
// #define pl pair<ll, ll>
// #define vpi vector<pi >
// #define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)
#define sz(x) (int)(x).size()


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

struct DSU{
    vi dsu, szx;
 
    DSU() = default;
    DSU(int n) : dsu(n), szx(n, 1) { 
        for(int i=0; i<n; i++) dsu[i] = i;
    }
    
    int parent(int i){
        if(dsu[i]==i) return i;
        else return dsu[i] = parent(dsu[i]);
    }
 
    int size(int i) { return szx[parent(i)]; }
    int operator[](int i){ return parent(i); }
    int num_comps(){
        int ct = 0;
        for(int i=0; i<sz(dsu); i++) if(dsu[i] == i) ct++;
        return ct;
    }
 
    void unify(int a, int b){
        a = parent(a);
        b = parent(b);
        if(szx[a] < szx[b]) swap(a, b);
        if(a!=b) dsu[b] = a, szx[a] += szx[b];
    }
};
 
struct Point{
    int t, p, pc, id;
    bool close;
    bool operator<(Point &other){
        if(p == other.p) return close < other.close;
        return p < other.p;
    }
};
 
void solve(){
 
    int n; cin>>n;
    vector<Point> points;
    for(int i=0; i<n; i++){
        int t, l, r; cin>>t>>l>>r;
        points.pb({t, l, r, i, false});
        points.pb({t, r, l, i, true});
    }
    sort(all(points));
 
    DSU dsu(n);
    vector<set<pii>> open(2); // {r, id}
    for(auto &p:points){
        if(p.close) open[p.t].erase({p.p, p.id});
        else{
            open[p.t].insert({p.pc, p.id});
            while(sz(open[p.t ^ 1]) > 1){
                auto [r, id] = *open[p.t ^ 1].begin();
                dsu.unify(p.id, id);
                open[p.t ^ 1].erase({r, id});
            }
            if(sz(open[p.t ^ 1]) == 1) dsu.unify(p.id, open[p.t ^ 1].begin()->second);
        }
    }
 
    cout<<dsu.num_comps()<<endl;
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
