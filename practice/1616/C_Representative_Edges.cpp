/*
 * Problem   : 1616C - Representative Edges
 * Link      : https://codeforces.com/contest/1616/problem/C
 * Submission: https://codeforces.com/contest/1616/submission/165035752
 * Rating    : 1500   Tags: brute force, geometry, implementation, math
 * Verdict   : Accepted (46 ms, 100 KB)
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
        int n;
        cin >> n;
        vi a(n);
        rep(i, 0, n) cin >> a[i];
        map<pi, int> m;

        int mx = -1;
        rep(i, 0, n){
            int tmp = -1;
            rep(j, i+1, n){
                int x = abs(a[i]-a[j]);
                int l = j-i;
                // cout << x/l << endl;
                int g = gcd(x, l);
                if(a[i]>a[j]) x*=-1;
                x/=g;l/=g;
                int t = ++m[mp(x, l)];
                tmp = max(tmp, t);
            }
            mx = max(mx, tmp);
            // cout << mx << " " << tmp << endl;
            m.clear();
        }
        if(mx==-1) mx = n-1;
        cout << n-mx-1 << endl;
    }
    return 0;
}
