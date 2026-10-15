/*
 * Problem   : 1735B - Tea with Tangerines
 * Link      : https://codeforces.com/contest/1735/problem/B
 * Submission: https://codeforces.com/contest/1735/submission/181608168
 * Rating    : 900   Tags: greedy, math
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-19 (Practice)
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
    int mn = INT_MAX;
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    ll ans = 0;
    rep(i, 0, n){
        if(a[i]==mn) continue;
        ans += (a[i]/(mn*2-1));
        if(a[i]%(mn*2-1)==0) ans--;
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
