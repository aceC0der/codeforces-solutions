/*
 * Problem   : 1818C - Almost Increasing Subsequence
 * Link      : https://codeforces.com/contest/1818/problem/C
 * Submission: https://codeforces.com/contest/1818/submission/209634899
 * Rating    : 1500   Tags: binary search, dp, greedy
 * Verdict   : Accepted (202 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-14 (Practice)
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
    int n, q;
    cin >> n >> q;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    vi pref(n+1);
    rep(i, 0, n){
        int cnt = 0;
        bool f = false;
        int j = i;
        while(j<n-1 && a[j]>=a[j+1]){
            cnt++;
            f = true;
            j++;
        }
        // cout << cnt << endl;
        if(cnt>1){
            // cout << a[i] << " " << j << endl;
            rep(k, i+2, j+1){
                pref[k] = 1;
            }
            i = j;
        }
    }
    rep(i, 1, n+1){
        pref[i] += pref[i-1];
    }
    // rep(i, 0, n+1){
    //     cout << pref[i] << " " ;
    // }
    // cout << endl;
    while(q--){
        int l, r;
        cin >> l >> r;
        if(l==r) cout << 1 << endl;
        else{
            cout << (r-l+1)-pref[r-1]+pref[l] << endl;
        }
    }

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    // TestCases{
        solve();
    // }
    return 0;
}
