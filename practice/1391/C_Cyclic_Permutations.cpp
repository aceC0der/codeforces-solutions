/*
 * Problem   : 1391C - Cyclic Permutations 
 * Link      : https://codeforces.com/contest/1391/problem/C
 * Submission: https://codeforces.com/contest/1391/submission/104929907
 * Rating    : 1500   Tags: combinatorics, dp, graphs, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-20 (Practice)
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
    ll mod = 10e8+7;
    //cout << mod << endl;
    ll n;
    cin >> n;
    ll ans = 1;
    rep(i, 2, n+1){
        ans *= i%mod;
        ans %= mod;
        //cout << ans << endl;
    }
    ll nonc = 2;
    rep(i, 1, n-1){
        nonc *= 2%mod;
        nonc %= mod;
    }
    cout << (ans-nonc+mod)%mod << endl;

    return 0;
}
