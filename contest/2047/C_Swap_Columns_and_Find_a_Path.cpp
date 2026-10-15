/*
 * Problem   : 2047C - Swap Columns and Find a Path
 * Link      : https://codeforces.com/contest/2047/problem/C
 * Submission: https://codeforces.com/contest/2047/submission/294565411
 * Rating    : 1200   Tags: data structures, greedy, sortings
 * Verdict   : Accepted (249 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-03 (Contest)
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

// bool cmp(pi& a, pi& b){
//     return (a.ff-a.ss)>(b.ff-b.ss);
// }

void solve(){
    int n;
    cin >> n;
    vpi arr(n);
    int v = LLONG_MIN;
    rep(i, 0, n) cin >> arr[i].ff;
    rep(i, 0, n) cin >> arr[i].ss;
    int ans = LLONG_MIN;
    rep(i, 0, n){
        int tmp = arr[i].ff+arr[i].ss;
        rep(j, 0, n){
            if(i==j) continue;
            tmp += max(arr[j].ff, arr[j].ss);
        }
        ans = max(ans, tmp);
    }
    cout << ans <<endl;
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
