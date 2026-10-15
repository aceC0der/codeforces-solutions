/*
 * Problem   : 1659C - Line Empire
 * Link      : https://codeforces.com/contest/1659/problem/C
 * Submission: https://codeforces.com/contest/1659/submission/153931507
 * Rating    : 1500   Tags: binary search, brute force, dp, greedy, implementation, math
 * Verdict   : Accepted (78 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-17 (Contest)
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
        ll n, a, b;
        cin >> n >> a >> b;
        ll cost = 0;
        vl pos(n);
        rep(i, 0, n){
            cin >> pos[i];
            cost+=pos[i];
        }
        cost*=b;
        ll x = 0;
        rep(i, 0, n){
            ll dif = pos[i]-x;
            ll c = cost + dif*a - dif*(n-1-i)*b;
            if(c<=cost){
                cost = c;
                x = pos[i];
            }
        }
        cout << cost << endl;
    }
    return 0;
}
