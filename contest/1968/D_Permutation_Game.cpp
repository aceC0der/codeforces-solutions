/*
 * Problem   : 1968D - Permutation Game
 * Link      : https://codeforces.com/contest/1968/problem/D
 * Submission: https://codeforces.com/contest/1968/submission/259204201
 * Rating    : 1300   Tags: brute force, dfs and similar, games, graphs, greedy, math
 * Verdict   : Accepted (187 ms, 5800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-02 (Contest)
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

void solve(){
    ll n, k, pb, pa;
    cin >> n >> k >> pb >> pa;
    pb--;pa--;
    vl a(n), p(n);
    rep(i, 0, n) cin >> p[i];
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) p[i]--;

    // rep(i, 0, n) cout << p[i] << " " ; cout << endl;
    // rep(i, 0, n) cout << a[i] << " " ; cout << endl;
    // return;
    vpl posb(n, {-1, -1});
    int crr = p[pb];
    ll sum = a[pb];
    posb[pb] = {sum, k-1};
    int kk = k;
    // cout << crr << " " << pb << " " << kk << endl;
    // return;
    while(crr!=pb && kk--){
        // cout << crr << " " << pb << endl;
        if(kk==0) break;
        sum += a[crr];
        posb[crr] = {sum, kk-1};
        crr = p[crr];
    }
    ll valB = 0;
    rep(i, 0, n){
        if(posb[i].ff == -1) continue;

        valB = max(posb[i].ff+posb[i].ss*a[i], valB);
        // cout << i << " " << posb[i].ff << " " << posb[i].ss << " " << a[i] << " " << valB << endl;
    }
    // cout << valB << endl;
    vpl posa(n, {-1, -1});
    crr = p[pa];
    sum = a[pa];
    posa[pa] = {0, k};
    kk = k;
    // cout << crr << " " << pb << " " << kk << endl;
    // return;
    while(crr!=pa && kk--){
        // cout << crr << " " << pb << endl;
        if(kk==0) break;
        sum += a[crr];
        posa[crr] = {sum, kk-1};
        crr = p[crr];
    }
    ll valA = 0;
    rep(i, 0, n){
        if(posa[i].ff == -1) continue;

        valA = max(posa[i].ff+posa[i].ss*a[i], valA);
        // cout << i << " " << posa[i].ff << " " << posa[i].ss << " " << a[i] << " " << valA << endl;
    }
    // cout << valA << endl;
    if(valA==valB){
        cout << "Draw" << endl;
    }
    else if(valB>valA){
        cout << "Bodya" << endl;
    }
    else{
        cout << "Sasha" << endl;
    }

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
