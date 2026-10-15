/*
 * Problem   : 1720D1 - Xor-Subsequence (easy version)
 * Link      : https://codeforces.com/contest/1720/problem/D1
 * Submission: https://codeforces.com/contest/1720/submission/172418815
 * Rating    : 1800   Tags: bitmasks, brute force, dp, strings, trees, two pointers
 * Verdict   : Accepted (265 ms, 4300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-17 (Practice)
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
    rep(i, 0, n) cin >> a[i];
    vi dp(1);
    int res = 0;
    rep(i, 0, n){
        dp.push_back(1);
        for(int j=i-1; j>=max(0, i-512); j--){
            if((a[i]^j) > (a[j]^i)){
                dp.back() = max(dp.back(), dp[j+1]+1);
            }
        }
        res = max(res, dp.back());
    }
    cout << res << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
