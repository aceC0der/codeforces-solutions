/*
 * Problem   : 1975C - Chamo and Mocha's Array
 * Link      : https://codeforces.com/contest/1975/problem/C
 * Submission: https://codeforces.com/contest/1975/submission/262698043
 * Rating    : 1200   Tags: binary search, brute force, greedy
 * Verdict   : Accepted (93 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-26 (Practice)
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

ll med(vl arr){
    sort(all(arr));
    return arr[1];
}

void solve(){
    int n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    ll mx = -1;
    rep(i, 1, n){
        mx = max(mx, min(a[i-1], a[i]));
    }
    rep(i, 2, n){
        // cout << med({a[i-2], a[i-1], a[i]}) << endl;
        mx = max(mx, med({a[i-2], a[i-1], a[i]}));
    }
    cout << mx << endl;
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
