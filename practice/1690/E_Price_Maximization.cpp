/*
 * Problem   : 1690E - Price Maximization
 * Link      : https://codeforces.com/contest/1690/problem/E
 * Submission: https://codeforces.com/contest/1690/submission/162420469
 * Rating    : 1500   Tags: binary search, greedy, math, two pointers
 * Verdict   : Accepted (78 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-01 (Practice)
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
        int n, k;
        cin >> n >> k;
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        ll ans = 0;
        rep(i, 0, n){
            ans += (a[i]/k);
            a[i] %= k;
        }
        sort(all(a));
        int l = 0, r = n-1;
        while(l<r){
            if((a[l]+a[r])>=k) {
                ans++;
                r--;
            }
            l++;
        }
        cout << ans << endl;
    }
    return 0;
}
