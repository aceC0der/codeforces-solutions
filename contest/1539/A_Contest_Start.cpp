/*
 * Problem   : 1539A - Contest Start
 * Link      : https://codeforces.com/contest/1539/problem/A
 * Submission: https://codeforces.com/contest/1539/submission/120115898
 * Rating    : 1000   Tags: combinatorics, geometry, greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-20 (Contest)
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
#define vpi vector<pi>
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int main()
{
    I
    T{
        ll n, x, t;
        cin >> n >> x >> t;
        ll dif = min(t/x, n), ans = 0;

        ans = (n-dif)*dif + (dif*(dif-1))/2;
        cout << ans << endl;
    }

    return 0;
}
