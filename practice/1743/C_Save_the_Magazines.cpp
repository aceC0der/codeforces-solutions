/*
 * Problem   : 1743C - Save the Magazines
 * Link      : https://codeforces.com/contest/1743/problem/C
 * Submission: https://codeforces.com/contest/1743/submission/176953143
 * Rating    : 1100   Tags: constructive algorithms, dp, greedy
 * Verdict   : Accepted (62 ms, 2100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-19 (Practice)
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
    string s;
    cin >> s;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    ll ans = 0;
    rep(i, 0, n){
        if(s[i]=='1') ans += a[i];
    }
    vi b(n);
    rep(i, 0, n){
        bool f = false;
        if(s[i]=='0' && s[i+1]=='1'){
            f = true;
            int j = i;
            int mn = a[i];
            i++;
            while(i<n && s[i]=='1'){
                mn = min(a[i], mn);
                i++;
            }
            ans += a[j]-mn;
        }
        i -= f;
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
