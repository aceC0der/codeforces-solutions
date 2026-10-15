/*
 * Problem   : 2019D - Speedbreaker
 * Link      : https://codeforces.com/contest/2019/problem/D
 * Submission: https://codeforces.com/contest/2019/submission/283317869
 * Rating    : 1900   Tags: binary search, constructive algorithms, data structures, greedy, math
 * Verdict   : Accepted (109 ms, 1500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-28 (Practice)
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

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    vi diff(n+1);
    int i=0, j=n-1;
    int x = n;
    while(i<j){
        // cout << a[i] << " " << a[j] << " " << x << endl;
        if(a[i]<x && a[j]<x){
            cout << 0 << endl;
            return;
        }
        if(a[i]>=x){
            i++;
        }
        else{
            j--;
        }
        x--;
    }
    rep(i, 0, n){
        int mn = max(0, i-a[i]+1);
        int mx = min(n, i+a[i]);
        diff[mn]++;
        diff[mx]--;
    }
    rep(i, 1, n+1){
        diff[i]+=diff[i-1];
    }
    int cnt = 0;
    rep(i, 0, n){
        if(diff[i]>=n) {
            cnt++;
        }
    }
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
