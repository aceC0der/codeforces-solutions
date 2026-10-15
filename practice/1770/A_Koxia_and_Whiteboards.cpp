/*
 * Problem   : 1770A - Koxia and Whiteboards
 * Link      : https://codeforces.com/contest/1770/problem/A
 * Submission: https://codeforces.com/contest/1770/submission/187445475
 * Rating    : 1000   Tags: brute force, greedy
 * Verdict   : Accepted (109 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-31 (Practice)
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
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) cin >> b[i];
    ll sum = 0;
    int i=0, j=0;
    int cnt = 0;
    while(i<m){
        sort(all(a));
        a[0] = b[i];
        i++;
    }
    rep(i, 0, n) sum+=a[i];
    cout << sum  << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
