/*
 * Problem   : 1783A - Make it Beautiful
 * Link      : https://codeforces.com/contest/1783/problem/A
 * Submission: https://codeforces.com/contest/1783/submission/188438470
 * Rating    : 800   Tags: constructive algorithms, math, sortings
 * Verdict   : Accepted (46 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-08 (Contest)
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
    sort(all(a), greater<int>());
    bool f = true;
    rep(i, 0, n){
        f &= (a[i]==a[0]);
    }
    if(f){
        cout << "NO" << endl;
        return;
    }
    cout <<"YES" << endl;
    cout << a[0] << " " << a[n-1] << " ";
    rep(i, 1, n-1) cout << a[i] << " "; cout <<endl;

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
