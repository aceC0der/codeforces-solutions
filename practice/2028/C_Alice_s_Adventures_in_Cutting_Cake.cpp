/*
 * Problem   : 2028C - Alice's Adventures in Cutting Cake
 * Link      : https://codeforces.com/contest/2028/problem/C
 * Submission: https://codeforces.com/contest/2028/submission/293520020
 * Rating    : 1600   Tags: binary search, dp, greedy, two pointers
 * Verdict   : Accepted (93 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-27 (Practice)
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
    int n, m, v;
    cin >> n >> m >> v;
    vi a(n);
    rep(i, 0, n) cin >> a[i];

    vi left, right;

    int cnt = 0;
    int tsum = 0;
    rep(i, 0, n){
        tsum+=a[i];
        if(tsum>=v){
            left.pb(i);
            tsum=0;
            cnt++;
        }
        if(cnt==m) break;
    }
    int ans =0;
    cnt = 0;
    tsum = 0;
    pre(i, n-1, 0){
        tsum+=a[i];
        if(tsum>=v){
            right.pb(i);
            tsum=0;
            cnt++;
        }
        if(cnt==m) break;
    }
    vi pref(n+1);
    pref[0] = 0;
    rep(i, 1, n+1) pref[i] = pref[i-1]+a[i-1];
    ans = -1;
    int sz = left.size();
    if(left.size()==m){
        ans = pref[n]-pref[left.back()+1];
        // cout << ans << " ***" << endl;
    }
    sz = min(m-1, sz);
    rep(i, 0, sz){
        int j = m-(i+1);
        j--;
        // cout << i+1 << " " << j+1 << endl;
        if(j>=right.size()) continue;
        int l = left[i]+1;
        int r = right[j]-1;
        ans = max(ans, pref[r+1]-pref[l]);
    }
    if(right.size()==m) ans = max(ans, pref[right.back()]);
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
