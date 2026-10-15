/*
 * Problem   : 1726A - Mainak and Array
 * Link      : https://codeforces.com/contest/1726/problem/A
 * Submission: https://codeforces.com/contest/1726/submission/171078866
 * Rating    : 900   Tags: greedy, math
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-06 (Contest)
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
    vi a(n);
    int mx = INT_MIN;
    int mn = INT_MAX;
    rep(i, 0, n){
        cin >> a[i];
        mx = max(a[i], mx);
        mn = min(a[i], mn);
    } 
    int ans = INT_MIN;
    rep(i, 0, n-1){
        ans = max(ans, a[i]-a[i+1]);
    }
    // cout <<"*" << endl;
    ans = max(a[n-1]-a[0], ans);
    ans = max(mx - a[0], ans);
    ans = max(a[n-1]-mn, ans);
    cout << ans << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
