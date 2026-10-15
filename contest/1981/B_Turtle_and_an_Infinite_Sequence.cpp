/*
 * Problem   : 1981B - Turtle and an Infinite Sequence
 * Link      : https://codeforces.com/contest/1981/problem/B
 * Submission: https://codeforces.com/contest/1981/submission/263481719
 * Rating    : 1300   Tags: bitmasks, math
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-31 (Contest)
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
    ll n, m;
    cin >> n >> m;
    ll tmp = n;
    ll ans = n;
    ll left = n, right = n;
    int msb = 0;
    pre(i, 31, 0){
        if(CheckBit(n, i)) {
            msb = i;
            break;
        }
    }
    ll mn = 1;
    left = (1<<msb)-1;
    ll dif = n-left;
    // if(dif<=m){
    //     ans = n|left;
    // }
    rep(i, 0, 32){
        if(!CheckBit(n, i)){
            SetBit(right, i);
            dif = abs(n-right);
            
            ll x = (1LL<<i)+1-dif;
            // cout << x << " " << dif << endl; 
            if(i<msb) dif = min(x, dif);
            if(dif<=m){
                SetBit(ans, i);
            }
        }
        ClearBit(right, i);
    }
    cout << ans << endl;
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
