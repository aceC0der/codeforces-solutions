/*
 * Problem   : 1985G - D-Function
 * Link      : https://codeforces.com/contest/1985/problem/G
 * Submission: https://codeforces.com/contest/1985/submission/265382583
 * Rating    : 1600   Tags: combinatorics, math, number theory
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-11 (Contest)
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

const ll MOD = 1e9+7;

ll mul(ll a, ll b){
    return ((a%MOD) * (b%MOD))%MOD;
}

ll sub(ll a, ll b){
    return ((a-b)%MOD + MOD)%MOD;
}

long long power(long long A, long long B)
{
    if (B == 0)
        return 1;

    long long res = power(A, B / 2);

    if (B % 2)
        return mul(mul(res, res), A);
    else
        return mul(res, res);
}

void solve(){
    ll l, r, k;
    cin >> l >> r >> k;
    if(k<10){
        ll x = 9/k + 1;
        ll v1 = power(x, r);
        ll v2 = power(x, l);
        cout << sub(v1, v2) << endl;
        return;
    }
    cout << 0 << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    TestCases{
        solve();
    }
    return 0;
}
