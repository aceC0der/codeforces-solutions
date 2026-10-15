/*
 * Problem   : 2020B - Brightness Begins
 * Link      : https://codeforces.com/contest/2020/problem/B
 * Submission: https://codeforces.com/contest/2020/submission/283646747
 * Rating    : 1200   Tags: binary search, math
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-29 (Contest)
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

bool isPossible(ll mid, ll k){
    ll nt = sqrt(mid)-1;
    ll rem = mid-nt-1;
    // cout << rem << " " << mid << endl;
    return (rem>=k);
}

void solve(){
    ll k;
    cin >> k;
    ll not_valid = sqrt(k) - 1;
    ll l = 2, r = 2e18;
    ll ans = 2;
    while(l<=r){
        ll mid = (l+r)/2;
        if(isPossible(mid, k)){
            ans = mid;
            r = mid-1;
        }else l = mid+1;
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
