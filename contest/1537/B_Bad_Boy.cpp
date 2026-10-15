/*
 * Problem   : 1537B - Bad Boy
 * Link      : https://codeforces.com/contest/1537/problem/B
 * Submission: https://codeforces.com/contest/1537/submission/119835838
 * Rating    : 900   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-18 (Contest)
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
        ll n, m, i, j;
        cin >> n >> m >> i >> j;
        ll p , q;
        p = n/2;
        q = m/2;
        ll x1, x2, y1, y2;
        if((i<=p && j<=q) || (i>p && j>q)){
            x1 = 1; y1 = 1; x2 = n; y2 = m;
        }
        else if((i<=p && j > q) || (i>p && j<=q)){
            x1 = 1; y1 = m; x2 = n; y2 = 1;
        }

        cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    }

    return 0;
}
