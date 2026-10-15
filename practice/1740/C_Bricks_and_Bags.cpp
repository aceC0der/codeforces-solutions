/*
 * Problem   : 1740C - Bricks and Bags
 * Link      : https://codeforces.com/contest/1740/problem/C
 * Submission: https://codeforces.com/contest/1740/submission/184398405
 * Rating    : 1400   Tags: constructive algorithms, games, greedy, sortings
 * Verdict   : Accepted (93 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-09 (Practice)
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
    sort(a.begin(), a.end());
    
    int ans = a[n - 1] - a[0];
    for (int i = 0; i < n - 1; i++) {
        int dif1 = (a[i + 1] + a[n - 1] - 2 * a[i]);
        int dif2 = (2 * a[i + 1] - a[i] - a[0]);
        ans = max(ans, max(dif1, dif2));
    }
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
