/*
 * Problem   : 1767D - Playoff
 * Link      : https://codeforces.com/contest/1767/problem/D
 * Submission: https://codeforces.com/contest/1767/submission/185546673
 * Rating    : 1500   Tags: combinatorics, constructive algorithms, dp, greedy, math
 * Verdict   : Accepted (61 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-16 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
// #define ss second
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
    string s;
    cin >> s;
    int l=0, ss=0;
    rep(i, 0, n) l+=(s[i]=='0');
    ss=n-l;
    // cout << l << " " << ss << endl;
    int x, y;
    x = ((1<<l)-1);
    y = ((1<<ss)-1);
    // cout << x << " " << y << endl;
    vi ans;
    int t= 1<<n;
    int lr, sm;
    rep(k, 1, t+1){
        lr = t-k;
        sm = k-1;
        if(lr>=x && sm>=y) cout << k << " ";
    }
    cout << endl;
}

int main()
{
    fios
        solve();
    return 0;
}
