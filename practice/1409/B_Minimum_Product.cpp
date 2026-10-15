/*
 * Problem   : 1409B - Minimum Product
 * Link      : https://codeforces.com/contest/1409/problem/B
 * Submission: https://codeforces.com/contest/1409/submission/104521484
 * Rating    : 1100   Tags: brute force, greedy, math
 * Verdict   : Accepted (108 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-16 (Practice)
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
        ll a, b , x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll mina, minb;
        mina = max(a-n, x);
        n -= (a-mina);
        minb = max(b-n, y);
        n += (a-mina);
        ll ans = mina * minb;
        minb = max(b-n, y);
        n -= (b-minb);
        mina = max(a-n, x);
        //cout << ans << endl;
        ans = min(ans, mina*minb);

        cout << ans << endl;

    }
    return 0;
}
