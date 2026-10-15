/*
 * Problem   : 1677A - Tokitsukaze and Strange Inequality
 * Link      : https://codeforces.com/contest/1677/problem/A
 * Submission: https://codeforces.com/contest/1677/submission/168421535
 * Rating    : 1600   Tags: brute force, data structures, dp
 * Verdict   : Accepted (93 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-15 (Practice)
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
    vi fb(n);
    rep(i, 0, n){
        int cnt = 0;
        rep(j, i+1, n){
            cnt += (a[i]>a[j]);
        }
        fb[i] = cnt;
        if(i>0) fb[i] += fb[i-1];
    }
    // rep(i, 0, n) cout << fb[i] << " " ; cout << endl;
    ll ans = 0;
    rep(ci, 2, n){
        // fb[ci]-=cnt;
        int cnt = 0;
        rep(b, 0, ci){
            fb[b]-=cnt;
            if(a[b]>a[ci]) {fb[b]--;cnt++;}
        }
        rep(b, ci, n) fb[b]-=cnt;
        // rep(i, 0, n) cout << fb[i] << " " ; cout << endl;
        rep(ai, 0, ci-1){
            if(a[ai]<a[ci]){
                ans += (fb[ci-1]-fb[ai]);
                // cout << ai << " " << ci << " " <<  ans << endl;
            }
        }
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
