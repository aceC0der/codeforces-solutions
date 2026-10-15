/*
 * Problem   : 2026B - Black Cells
 * Link      : https://codeforces.com/contest/2026/problem/B
 * Submission: https://codeforces.com/contest/2026/submission/288633940
 * Rating    : 1300   Tags: binary search, brute force, constructive algorithms, greedy
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-29 (Practice)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
#define int ll

void solve(){
    int n;
    cin >> n; 
    vi a(n+3);
    rep(i, 0, n) cin >> a[i];
    int mn = LLONG_MAX;
    if(n&1){
        a[n]=a[n-1]+2;
        
        for(int i=0; i<n; i++){
            if(a[i+1]-a[i]==1) continue;
            vi tmp;
            rep(j, 0, n){
                tmp.pb(a[j]);
                if(i==j) {
                    tmp.pb(a[j]+1);
                }
            }
            int mx = 0;
            for(int j=1; j<tmp.size(); j+=2){
                mx = max(mx, tmp[j]-tmp[j-1]);
            }
            mn = min(mx, mn);
            if(i==n-1){
                tmp.clear();
                rep(j, 0, n){
                    tmp.pb(a[j]);
                    if(i==j) {
                        tmp.pb(a[j+1]-1);
                    }
                }
                mx = 0;
                for(int j=1; j<tmp.size(); j+=2){
                    mx = max(mx, tmp[j]-tmp[j-1]);
                }
                mn = min(mx, mn);
            }
        }
        if(a[0]){
            vi tmp;
            tmp.pb(a[0]-1);
            rep(j, 0, n){
                tmp.pb(a[j]);
            }
            int mx = 0;
            for(int j=1; j<tmp.size(); j+=2){
                mx = max(mx, tmp[j]-tmp[j-1]);
            }
            mn = min(mx, mn);
        }
    }
    else{
        mn = 0;
        for(int j=1; j<a.size(); j+=2){
            mn = max(mn, a[j]-a[j-1]);
        }

    }
    if(mn==LLONG_MAX) mn=1; 
    cout << mn << endl;

}

int32_t main()
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
