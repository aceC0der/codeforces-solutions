/*
 * Problem   : 1611D - Weights Assignment For Tree Edges
 * Link      : https://codeforces.com/contest/1611/problem/D
 * Submission: https://codeforces.com/contest/1611/submission/203073706
 * Rating    : 1500   Tags: constructive algorithms, trees
 * Verdict   : Accepted (109 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-22 (Practice)
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

void solve(){
    int n;
    cin >> n;
    vi t(n+5), p(n+5);
    rep(i, 0, n) cin >> t[i];
    rep(i, 0, n) cin >> p[i];
    vi e(n+5, -1);
    int root = -1;
    rep(i, 0, n) {
        t[i]--, p[i]--;
        if(t[i]==i) root = i;
    }
    vi dist(n+10);
    e[root] = dist[root] = 0;
    if(p[0]!=root){
        cout << -1 << endl;
        return;
    }
    rep(i, 1, n){
        if(e[t[p[i]]]==-1) {
            cout << -1 << endl;
            return;
        }
        e[p[i]] = dist[p[i-1]]+1 - dist[t[p[i]]];
        dist[p[i]] = dist[p[i-1]]+1;
    }
    rep(i, 0, n){
        cout << e[i] << " ";
    }
    cout << endl;
    // rep(i, 0, n) cout << dist[p[i]] << " "; cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
