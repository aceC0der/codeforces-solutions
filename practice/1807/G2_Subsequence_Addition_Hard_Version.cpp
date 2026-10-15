/*
 * Problem   : 1807G2 - Subsequence Addition (Hard Version)
 * Link      : https://codeforces.com/contest/1807/problem/G2
 * Submission: https://codeforces.com/contest/1807/submission/198257791
 * Rating    : 1100   Tags: bitmasks, dp, greedy, implementation, sortings
 * Verdict   : Accepted (93 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-19 (Practice)
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
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    ll sum = 1;
    sort(all(a));
    if(a[0]!=1){
        cout << "NO" << endl;
        return;
    }
    rep(i, 1, n){
        if(sum<a[i]){
            cout << "NO" << endl;
            return;
        }
        sum += a[i];
    }
    cout << "YES" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
