/*
 * Problem   : 2020D - Connect the Dots
 * Link      : https://codeforces.com/contest/2020/problem/D
 * Submission: https://codeforces.com/contest/2020/submission/283661058
 * Rating    : 1800   Tags: brute force, dp, dsu, graphs, math, trees
 * Verdict   : Accepted (265 ms, 6300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-30 (Practice)
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

int find(int a, vi& par){
    if(par[a]==a) return a;
    return par[a] = find(par[a], par);
}

void connect(int a, int b, vi& par){
    int ppa = find(a, par);
    int ppb = find(b, par);
    if(ppa!=ppb) par[ppa] = ppb;
}

void pairConnect(int from, int to, int gap, vi& par){
    for(int i=from+gap; i<=to; i+=gap){
        connect(from, i, par);
        from = i;
    }
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vpi> d(11);
    rep(i, 0, m){
        int a, td, k;
        cin >> a >> td >> k;
        d[td].pb({a, k});
    }
    vi par(n+1);
    rep(i, 1, n+1) par[i] = i;
    rep(i, 1, 11){
        sort(all(d[i]));
        vpi crr = d[i];
        vi rem(i, -1);
        rep(j, 0, crr.size()){
            int a = crr[j].ff;
            int k = crr[j].ss;
            int r = a%i;
            int from, to = a+k*i;
            if(rem[r]>=to) continue;
            if(rem[r]<=a){
                from = a;
            }else{
                from = rem[r];
            }
            pairConnect(from, to, i, par);
            rem[r] = to;
        }
    }
    int cnt = 0;
    rep(i, 1, n+1) cnt+=(i==find(i, par));
    cout << cnt << endl;
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
