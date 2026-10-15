/*
 * Problem   : 1688D - The Enchanted Forest
 * Link      : https://codeforces.com/contest/1688/problem/D
 * Submission: https://codeforces.com/contest/1688/submission/159997500
 * Rating    : 1600   Tags: greedy, implementation, math
 * Verdict   : Accepted (93 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-09 (Practice)
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
    TestCases{
        ll n, k;
        cin >> n >> k;
        vl arr(n);
        rep(i, 0, n){
            cin >> arr[i];
        }
        vl pref(n+1);
        pref[0] = 0;
        rep(i, 1, n+1){
            pref[i] = pref[i-1] + arr[i-1];
            // cout << pref[i] << " ";
        }
        // cout << endl;
        ll ans = 0;
        if(k<=n){
            rep(i, 0, n-k+1){
                ans = max(ans, pref[i+k]-pref[i]);
            }
            ans += (k*(k-1))/2;
        }
        else{
            ans = pref[n] + (k-n)*n + (n*(n-1))/2;
        }
        cout << ans << endl;

    }
    return 0;
}
