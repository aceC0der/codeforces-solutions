/*
 * Problem   : 1692G - 2^Sort
 * Link      : https://codeforces.com/contest/1692/problem/G
 * Submission: https://codeforces.com/contest/1692/submission/162417262
 * Rating    : 1400   Tags: data structures, dp, sortings, two pointers
 * Verdict   : Accepted (62 ms, 800 KB)
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
        int p = 0;
        cin >> p;
        int x;
        vi a(n);
        rep(i, 1, n){
            cin >> x;
            a[i] = (x*2 > p) ;
            p = x;
        }
        int ans = 0;
        int tot = 0;
        rep(i, 0, k){ tot+=a[i];}
        if(tot == k) ans++;
        rep(i, k, n){
            tot += a[i];
            tot -= a[i-k];
            if(tot == k) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
