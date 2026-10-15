/*
 * Problem   : 1634B - Fortune Telling
 * Link      : https://codeforces.com/contest/1634/problem/B
 * Submission: https://codeforces.com/contest/1634/submission/152793008
 * Rating    : 1400   Tags: bitmasks, math
 * Verdict   : Accepted (31 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-06 (Practice)
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
        ll n, x, y,z;
        cin >> n >> x >> y;
        vi arr(n);
        rep(i, 0, n){
            cin >> z;
            x += (z&1);
        }
        if((y&1)==(x&1)){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }

    }
    return 0;
}
