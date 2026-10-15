/*
 * Problem   : 1362C - Johnny and Another Rating Drop
 * Link      : https://codeforces.com/contest/1362/problem/C
 * Submission: https://codeforces.com/contest/1362/submission/119690926
 * Rating    : 1400   Tags: bitmasks, greedy, math
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-17 (Practice)
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
        ll n;
        cin >> n;
        ll res = 0, x = 1;
        while(x <= n){
            res += (n+x)/x - 1;
            x <<= 1;
        }
        cout << res << endl;
    }

    return 0;
}
