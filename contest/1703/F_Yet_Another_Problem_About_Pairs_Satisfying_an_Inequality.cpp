/*
 * Problem   : 1703F - Yet Another Problem About Pairs Satisfying an Inequality
 * Link      : https://codeforces.com/contest/1703/problem/F
 * Submission: https://codeforces.com/contest/1703/submission/163891158
 * Rating    : 1300   Tags: binary search, data structures, dp, greedy, sortings
 * Verdict   : Accepted (62 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-12 (Contest)
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
        int n;
        cin >> n;
        vl a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        int jj = 0;
        vl pref(n+1, 0);
        rep(i, 0, n){
            if(a[i]<i+1){
                pref[i]++;
            }
        }
        rep(i, 1, n){
            pref[i] += pref[i-1];
        }
        ll ans = 0;
        pre(j, n-1, 1){
            if(a[j]<j+1){
                if(a[j]>1)
                    ans += pref[a[j]-1-1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
