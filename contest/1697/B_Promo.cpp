/*
 * Problem   : 1697B - Promo
 * Link      : https://codeforces.com/contest/1697/problem/B
 * Submission: https://codeforces.com/contest/1697/submission/160312211
 * Rating    : 900   Tags: greedy, sortings
 * Verdict   : Accepted (296 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-12 (Contest)
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
    ll n, q;
    cin >> n >> q;
    vl arr(n+1);
    ll z;
    rep(i, 0, n){
        cin >> arr[i];
    }
    sort(all(arr), greater<int>());
    vl presum(n+1);
    presum[0] = 0;
    rep(i, 1, n+1){
        presum[i] = presum[i-1] + arr[i-1];
    }
    // rep(i, 0, n+1){
    //     cout << presum[i] << " ";
    // }
    // cout << endl;
    while(q--){
        int x, y;
        cin >> x >> y;
        // cout << dif << endl;
        // cout << x-dif << " " << x<< endl;
        cout << presum[x]-presum[x-y] << endl; 
    }


    return 0;
}
