/*
 * Problem   : 1901C - Add, Divide and Floor
 * Link      : https://codeforces.com/contest/1901/problem/C
 * Submission: https://codeforces.com/contest/1901/submission/263183347
 * Rating    : 1400   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (108 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-30 (Practice)
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
    sort(all(a));
    int dif = (a[n-1]-a[0]);
    int cnt = 0;
    int v = (dif&1);
    vi ans;
    int mn = a[0], mx = a[n-1];
    while(mn<mx){
        v = mn&1;
        ans.pb(mn&1);
        mn = (mn+v)/2;
        mx = (mx+v)/2;
    }
    cout << ans.size() << endl;
    if(ans.size()<=n) {for(auto it: ans) cout << it << " "; cout << endl;}

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
