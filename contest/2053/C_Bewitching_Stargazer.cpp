/*
 * Problem   : 2053C - Bewitching Stargazer
 * Link      : https://codeforces.com/contest/2053/problem/C
 * Submission: https://codeforces.com/contest/2053/submission/298866247
 * Rating    : 1500   Tags: bitmasks, divide and conquer, dp, math
 * Verdict   : Accepted (171 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-28 (Contest)
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
    int n, k;
    cin >> n >> k;
    int x = 0;
    int ans = 0;
    int len = 0;
    // pre(i, 10, 0) cout << CheckBit(n, i); cout << endl;
    int cnt = 0;
    pre(i, 32, 0){
        x<<=1;
        if(CheckBit(n, i)){
            SetBit(x, 0);
        }
        if(x<k){
            continue;
        }
        // pre(i, 10, 0) cout << CheckBit(x, i); cout << endl;
        if(x&1){
            int mid = x/2 + 1;
            // cout << mid << " " << ans << " " << cnt << endl;
            ans = (ans*2)+(mid*cnt)+mid;
            cnt*=2;
            cnt++;
        }
        else{
            int mid = x/2;
            ans = (ans*2)+(mid*cnt);
            cnt*=2;
        }
        // cout << ans << " " << cnt << endl;
    }
    cout << ans << endl;

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
