/*
 * Problem   : 1646C - Factorials and Powers of Two
 * Link      : https://codeforces.com/contest/1646/problem/C
 * Submission: https://codeforces.com/contest/1646/submission/164028289
 * Rating    : 1500   Tags: bitmasks, brute force, constructive algorithms, dp, math
 * Verdict   : Accepted (343 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-13 (Practice)
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

ll bitCounter(ll n){
    int x = 0;
    rep(i, 0, 40){
        if(CheckBit(n, i)) x++;
    }
    return x;
}

vl fact(16);
ll solve(ll n, ll pos){
    if(pos>=15 || fact[pos]>n){
        return bitCounter(n);
    }
    return min(solve(n-fact[pos], pos+1)+1,min(bitCounter(n), solve(n, pos+1)));
}

int main()
{
    fios
    vi n;
    fact[0] = 1;
    rep(i, 1, 16){
        fact[i] = fact[i-1]*i;
    }
    TestCases{
        ll n;
        cin >> n;
        cout << solve(n, 1) << endl;
    }
    return 0;
}
