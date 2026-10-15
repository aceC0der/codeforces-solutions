/*
 * Problem   : 1618D - Array and Operations
 * Link      : https://codeforces.com/contest/1618/problem/D
 * Submission: https://codeforces.com/contest/1618/submission/164998765
 * Rating    : 1300   Tags: dp, greedy, math
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-20 (Practice)
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
        rep(i, 0, n) cin >> a[i];
        sort(all(a));
        // rep(i, 0, n) cout << a[i] << " ";
        // cout << endl;
        int i = k*2, j;
        int ans = 0;
        int z = 0;
        rep(x, 0, n-i){
            ans += a[x];
            z++;
            // cout << a[x] << " ";
        }
        // cout << endl;
        i = z;
        j = z+k;
        // if(n-)
        while(k--){
            ans += (a[i]/a[j]);
            // cout << a[i] << " " << a[j] << " ";
            i++;
            j++;
        }
        // cout << endl;
        cout << ans << endl;
    }
    return 0;
}
