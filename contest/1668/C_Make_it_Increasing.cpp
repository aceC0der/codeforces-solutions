/*
 * Problem   : 1668C - Make it Increasing
 * Link      : https://codeforces.com/contest/1668/problem/C
 * Submission: https://codeforces.com/contest/1668/submission/154123271
 * Rating    : 1300   Tags: brute force, greedy, math
 * Verdict   : Accepted (374 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-19 (Contest)
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


int main()
{
    fios
    ll n;
    cin >> n;
    vl arr(n);
    rep(i, 0, n){
        cin >> arr[i];
    }
    ll res = LLONG_MAX;
    rep(in, 0, n){
        ll bm, bp;
        bm = bp = 0;
        ll i = in-1;
        ll j = in + 1;
        ll ans = 0;
        // cout << i << " " << j << endl;
        while(i>=0 || j<n){
            if(i>=0){
                ll c = ((ll)(bm/arr[i]))*-1 + 1;
                bm = -c*arr[i];
                // cout << b[i] << " " << c << endl;
                ans += c;
                i--;
            }
            if(j<n){
                // cout << " * " << endl;
                ll c = (ll)(bp/arr[j]) + 1;
                bp = c*arr[j];
                ans += c;
                j++;
            }
        }
        res = min(res, ans);
    }
    // rep(i, 0, n){
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    cout << res << endl;
    return 0;
}
