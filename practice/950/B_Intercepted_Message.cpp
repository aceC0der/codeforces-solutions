/*
 * Problem   : 950B - Intercepted Message
 * Link      : https://codeforces.com/contest/950/problem/B
 * Submission: https://codeforces.com/contest/950/submission/204966687
 * Rating    : 1100   Tags: greedy, implementation
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-07 (Practice)
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
    int i, j;
    i = j = 1;
    ll sa, sb;
    sa = sb = 0;
    sa+=a[0];
    sb+=b[0];
    int ans = 0;
    while(i<n && j<m){
        if(sa==sb && sa){
            sa = sb = 0;
            ans++;
        }
        else if(sa>sb){
            sb+=b[j++];
        }
        else{
            sa += a[i++];
        }
    }
    if(sa!=0 || sb!=0){
        ans++;
    }
    cout << ans << endl;

}

int main()
{
    fios
    solve();
    return 0;
}
