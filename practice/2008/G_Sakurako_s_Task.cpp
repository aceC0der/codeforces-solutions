/*
 * Problem   : 2008G - Sakurako's Task
 * Link      : https://codeforces.com/contest/2008/problem/G
 * Submission: https://codeforces.com/contest/2008/submission/279242272
 * Rating    : 1800   Tags: binary search, greedy, math, number theory
 * Verdict   : Accepted (109 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-02 (Practice)
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
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    // sort(all(a))
    if(n==1){
        int ans = 0;
        if(k<=a[0]) ans = k-1;
        else ans = k;
        cout << ans << endl;
        return;
    }
    int g = 0;
    rep(i, 0, n) g = __gcd(g, a[i]);
    int pk = k;
    int x = g-1;
    rep(i, 1, n){
        k-=x;
        if(k<=0){
            cout << (i-1)*g+pk << endl;
            return;
        }
        pk = k;
    }
    cout << (n-1)*g+k << endl;
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
