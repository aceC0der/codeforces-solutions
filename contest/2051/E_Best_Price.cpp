/*
 * Problem   : 2051E - Best Price
 * Link      : https://codeforces.com/contest/2051/problem/E
 * Submission: https://codeforces.com/contest/2051/submission/297928048
 * Rating    : 1600   Tags: binary search, brute force, data structures, greedy, sortings
 * Verdict   : Accepted (796 ms, 39400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-22 (Contest)
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

void solve(){
    int n, k;
    cin >> n >> k;
    vpi arrr(n);
    vi b(n);
    rep(i, 0, n) cin >> arrr[i].ff;
    rep(i, 0, n) cin >> arrr[i].ss;
    rep(i, 0, n){
        b[i] = arrr[i].ss;
    }
    vi a(n);
    rep(i, 0, n){
        a[i] = arrr[i].ff;
    }
    map<int, int> freqA;
    map<int, int> freqB;
    rep(i, 0, n){
        freqA[a[i]]++;
        freqB[b[i]]++;
    }
    vi arr;
    rep(i, 0, n){
        arr.pb(a[i]);
        arr.pb(b[i]);
    }
    sort(all(arr));
    int ans = 0;
    int cntA = 0, cntB = 0;
    int rem = 0;
    int neg = 0;
    int tmp = 1;
    rep(i, 0, arr.size()){
        if(i>0 && arr[i]!=arr[i-1]){
            cntA += freqA[arr[i-1]];
            cntB += freqB[arr[i-1]];
        }
        neg =cntA-cntB;
        if(neg<=k){
            ans = max(ans, (n-cntB)*arr[i]);
        }
        // cout << cntA << " " << cntB << endl;
        // cout << n << " " << ans << " " << neg << "  " << arr[i] << endl;
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
