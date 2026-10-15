/*
 * Problem   : 1987D - World is Mine
 * Link      : https://codeforces.com/contest/1987/problem/D
 * Submission: https://codeforces.com/contest/1987/submission/268332173
 * Rating    : 1800   Tags: dp, games
 * Verdict   : Accepted (265 ms, 98100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-01 (Practice)
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

const int N = 5005;
int dp[N][N];
int n;
int calc(int i, int j, vi& a){
    if(i>=n){
        return j;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int mn = calc(i+1, j+1, a);
    if(a[i]<=j){
        mn = min(mn, a[i]+calc(i+1, j-a[i], a));
    }
    // cout << i << " " << j << ": " << mn << endl;
    return dp[i][j] = mn;
}

void solve(){
    // int n;
    cin >> n;
    vi a;
    map<int, int> freq;
    rep(i, 0, n){
        int x; cin >> x;
        freq[x]++;
    }
    for(auto it: freq){
        a.pb(it.ss);
    }
    n = a.size();
    rep(i, 0, a.size()){
        rep(j, 0, a.size()){
            dp[i][j] = -1;
        }
    }
    // pre(i, n-1, 0) dp[i][n] = (n-i);
    // pre(j, n-1, 0){
    //     rep(k, j, n){
    //         int i=
    //     }
    // }

    // rep(i, 0, n) cout << a[i] << " "; cout << endl;
    cout << calc(0, 0, a) << endl;
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
