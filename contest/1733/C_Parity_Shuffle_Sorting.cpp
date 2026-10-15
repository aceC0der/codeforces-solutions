/*
 * Problem   : 1733C - Parity Shuffle Sorting
 * Link      : https://codeforces.com/contest/1733/problem/C
 * Submission: https://codeforces.com/contest/1733/submission/172725811
 * Rating    : 1300   Tags: constructive algorithms, sortings
 * Verdict   : Accepted (62 ms, 2000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-19 (Contest)
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
    if(n==1){
        cout << 0 << endl;
        return;
    }
    vpi ans;
    if(a[0]%2){
        int idx = n-1;
        if(a[idx]%2!=0){
            ans.pb({1, n});
            a[0] = a[idx];
        }
        rep(i, 1, n){
            if(!(a[i]&1)){
                ans.pb({1, i+1});
                a[i] = a[0];
            }
        }
        rep(i, 1, n-1){
            if(a[i]!=a[0]){
                a[i] = a[0];
                ans.pb({i+1, n});
            }
        }
    }
    else{
        int idx = n-1;
        if(a[idx]%2==0){
            ans.pb({1, n});
            a[0] = a[idx];
        }
        rep(i, 1, n){
            if((a[i]&1)){
                ans.pb({1, i+1});
                a[i] = a[0];
            }
        }
        rep(i, 1, n-1){
            if(a[i]!=a[0]){
                a[i] = a[0];
                ans.pb({i+1, n});
            }
        }
    }
    // rep(i, 0, n) cout << a[i] << " "; cout << endl;
    cout << ans.size() << endl;
    rep(i, 0, ans.size()) cout << ans[i].ff << " " << ans[i].ss << endl;

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
