/*
 * Problem   : 2040D - Non Prime Tree
 * Link      : https://codeforces.com/contest/2040/problem/D
 * Submission: https://codeforces.com/contest/2040/submission/295654802
 * Rating    : 1900   Tags: brute force, constructive algorithms, dfs and similar, greedy, number theory, trees, two pointers
 * Verdict   : Accepted (249 ms, 12100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-09 (Practice)
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

const int N = 2000005;
vb primes(N, 1);


int dfs(int i, int p, vvi& adj, vi& arr, int v){
    arr[i] = v;
    v++;
    for(auto it: adj[i]){
        if(it==p) continue;
        while(primes[v-arr[i]]) v++;
        v = dfs(it, i, adj, arr, v);
    }
    return v;
}


void solve(){
    int n;
    cin >> n;

    vvi adj(n);
    rep(i, 0, n-1){
        int x, y;
        cin >> x >> y;
        x--;y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vi arr(n);
    dfs(0, -1, adj, arr, 1);
    rep(i, 0, n) cout << arr[i] << " "; cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios

    int n = N;
    primes[1] = 0;
    primes[0] = 0;
    for (int p = 2; p * p <= n; p++)
    {
        if (primes[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                primes[i] = false;
        }
    }    

    TestCases{
        solve();
    }
    return 0;
}
