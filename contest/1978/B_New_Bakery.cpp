/*
 * Problem   : 1978B - New Bakery
 * Link      : https://codeforces.com/contest/1978/problem/B
 * Submission: https://codeforces.com/contest/1978/submission/265993750
 * Rating    : 800   Tags: binary search, greedy, math, ternary search
 * Verdict   : Accepted (61 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-16 (Contest)
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

ll n, a, b;
ll profit(ll k){
    ll mns = (k*(k-1))/2;
    ll scnd = (n-k)*a;
    return (k*b - mns)+scnd;
}

void solve(){
    cin >> n >> a >> b;
    ll ans = n*a;
    ll k = b-a;
    k = max(k, 0LL);
    k = min(n, k);
    ans = profit(k);
    cout << ans << endl;
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
