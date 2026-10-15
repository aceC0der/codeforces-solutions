/*
 * Problem   : 1709A - Three Doors
 * Link      : https://codeforces.com/contest/1709/problem/A
 * Submission: https://codeforces.com/contest/1709/submission/165141002
 * Rating    : 800   Tags: brute force, greedy, implementation, math
 * Verdict   : Accepted (0 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-21 (Contest)
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
        int k;
        cin >> k;
        vi a(3);
        rep(i, 0, 3) cin>>a[i];
        int x = k-1;
        int y = a[x]-1;
        // cout << x << " " << a[x] << endl;
        if(a[x]!=0 && a[y]!=0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
