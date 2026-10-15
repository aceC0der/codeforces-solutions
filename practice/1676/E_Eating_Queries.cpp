/*
 * Problem   : 1676E - Eating Queries
 * Link      : https://codeforces.com/contest/1676/problem/E
 * Submission: https://codeforces.com/contest/1676/submission/156999221
 * Rating    : 1100   Tags: binary search, greedy, sortings
 * Verdict   : Accepted (155 ms, 600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-13 (Practice)
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
        int n, q;
        cin >> n >> q;
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        // cout << a[0] << " ";
        rep(i, 1, n){
            a[i] = a[i-1]+a[i];
            // cout << a[i] << " ";
        }
        // cout << endl;
        while(q--) {
            long long x; cin >> x;
            int l = 1, r = n, ans = -1;
            while(l <= r) {
                int mid = (l + r) / 2;
                if(a[mid - 1] >= x) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
