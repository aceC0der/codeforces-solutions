/*
 * Problem   : 1712A - Wonderful Permutation
 * Link      : https://codeforces.com/contest/1712/problem/A
 * Submission: https://codeforces.com/contest/1712/submission/168097396
 * Rating    : 800   Tags: greedy, implementation
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-13 (Contest)
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
    int n, k;
    cin >> n >>k;
    vi a(n), b;
    rep(i, 0, n) cin >> a[i];
    b = a;
    sort(all(a));
    int lv = a[k-1];
    int ans = 0;
    rep(i, 0, k){
        if(b[i]>lv) ans++;
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
