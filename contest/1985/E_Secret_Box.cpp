/*
 * Problem   : 1985E - Secret Box
 * Link      : https://codeforces.com/contest/1985/problem/E
 * Submission: https://codeforces.com/contest/1985/submission/265352575
 * Rating    : 1200   Tags: brute force, combinatorics, math
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-11 (Contest)
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
    ll x, y, z, k;
    cin >> x >> y >> z>> k;
    ll ans = 0;
    rep(i, 1, x+1){
        rep(j, 1, y+1){
            if(k%(i*j)==0){
                ll c = k/(i*j);
                if(c>z || c==0) continue;
                // cout << i << " " << j << " " << c << endl;
                ll a = ((x-i)+1)*((y-j)+1)*((z-c)+1);
                ans = max(ans, a);
            }
        }
    }
    cout << ans << endl;
    // cout << endl;
}

int main()
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
