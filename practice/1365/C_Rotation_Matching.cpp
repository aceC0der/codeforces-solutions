/*
 * Problem   : 1365C - Rotation Matching
 * Link      : https://codeforces.com/contest/1365/problem/C
 * Submission: https://codeforces.com/contest/1365/submission/163781717
 * Rating    : 1400   Tags: constructive algorithms, data structures, greedy, implementation
 * Verdict   : Accepted (124 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-12 (Practice)
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
    int n;
    cin >> n;
    vi a(n), b(n), ai(n), c(n, 0);
    rep(i, 0, n){
        cin >> a[i];
        ai[--a[i]] = i;
    }
    rep(i, 0, n){
        int x;
        cin >> x;
        x--;
        int sft = (ai[x]-i+n)%n;
        c[sft]++;
    }
    cout << *max_element(c.begin(), c.end()) << endl;

    return 0;
}
