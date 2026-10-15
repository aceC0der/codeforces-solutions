/*
 * Problem   : 1748E - Yet Another Array Counting Problem
 * Link      : https://codeforces.com/contest/1748/problem/E
 * Submission: https://codeforces.com/contest/1748/submission/181535313
 * Rating    : 2300   Tags: binary search, data structures, divide and conquer, dp, flows, math, trees
 * Verdict   : Accepted (514 ms, 77100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-19 (Practice)
 */
// E. Yet Another Array Counting Problem
// time limit per test2 seconds
// memory limit per test512 megabytes
// inputstandard input
// outputstandard output
// The position of the leftmost maximum on the segment [l;r] of array x=[x1,x2,…,xn] is the smallest integer i such that l≤i≤r and xi=max(xl,xl+1,…,xr).

// You are given an array a=[a1,a2,…,an] of length n. Find the number of integer arrays b=[b1,b2,…,bn] of length n that satisfy the following conditions:

// 1≤bi≤m for all 1≤i≤n;
// for all pairs of integers 1≤l≤r≤n, the position of the leftmost maximum on the segment [l;r] of the array b is equal to the position of the leftmost maximum on the segment [l;r] of the array a.
// Since the answer might be very large, print its remainder modulo 109+7.

// Input
// Each test contains multiple test cases. The first line contains a single integer t (1≤t≤103) — the number of test cases.

// The first line of each test case contains two integers n and m (2≤n,m≤2⋅105, n⋅m≤106).

// The second line of each test case contains n integers a1,a2,…,an (1≤ai≤m) — the array a.

// It is guaranteed that the sum of n⋅m over all test cases doesn't exceed 106.

// Output
// For each test case print one integer — the number of arrays b that satisfy the conditions from the statement, modulo 109+7.

// Example
// inputCopy
// 4
// 3 3
// 1 3 2
// 4 2
// 2 2 2 2
// 6 9
// 6 9 6 9 6 9
// 9 100
// 10 40 20 20 100 60 80 60 60
// outputCopy
// 8
// 5
// 11880
// 351025663
// Note
// In the first test case, the following 8 arrays satisfy the conditions from the statement:

// [1,2,1];
// [1,2,2];
// [1,3,1];
// [1,3,2];
// [1,3,3];
// [2,3,1];
// [2,3,2];
// [2,3,3].
// In the second test case, the following 5 arrays satisfy the conditions from the statement:

// [1,1,1,1];
// [2,1,1,1];
// [2,2,1,1];
// [2,2,2,1];
// [2,2,2,2].

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

const int MOD = (int)1e9+7;

int n, m;
vi msb((int)1e6+6);

void create_table(vector<vector<ll> >& tbl, vl& a){
    ll nn = a.size();
    ll mm = tbl.size();
    rep(i, 0, nn){
        tbl[0][i] = i;
    }
    rep(j, 1, mm){
        int gap = 1<<(j-1);
        rep(i, 0, nn){
            if(i+gap*2>nn) break;
            int lsb = 9;
            int l = a[tbl[j-1][i]], r = a[tbl[j-1][i+gap]];
            tbl[j][i] = ((l>=r) ? tbl[j-1][i] : tbl[j-1][i+gap]);
        }
    }
    // rep(j, 0, mm){
    //     rep(i, 0, nn){
    //         cout << tbl[j][i] << " ";
    //     }
    //     cout << endl;
    // }
}

ll query(vector<vl>& tbl, ll l, ll r, vl& a){
    ll gap = r-l+1;
    ll j = msb[gap];
    gap = (1<<j);
    ll div = r-gap+1;
    if(j==0) return tbl[j][l];
    ll k = a[tbl[j][l]], p = a[tbl[j][div]];
    return ((k>=p)? tbl[j][l] : tbl[j][div]);
}

void calcMSB(){
    ll cnt=-1;
    rep(i, 1, (int)1e6+5){
        if(!(i&(i-1))) cnt++;
        msb[i] = cnt;
    }
}

void calc_perm(vl& a, vector<vl>& tbl, vector<vl>& dp, ll l, ll r){
    if(r-l+1==1) return;
    ll lsb = query(tbl, l, r, a);
    ll lsb_l=-1, lsb_r=-1;
    if(lsb==l){
        calc_perm(a, tbl, dp, l+1, r);
        lsb_r = query(tbl, lsb+1, r, a);
    }
    else if(lsb==r){
        calc_perm(a, tbl, dp, l, r-1);
        lsb_l = query(tbl, l, lsb-1, a);
    }
    else{
        calc_perm(a, tbl, dp, l, lsb-1);
        calc_perm(a, tbl, dp, lsb+1, r);
        lsb_l = query(tbl, l, lsb-1, a);
        lsb_r = query(tbl, lsb+1, r, a);
    }
    ll sum_l = 0, sum_r = 0;
    if(lsb_l==-1) sum_l = 1;
    if(lsb_r==-1) sum_r = 1;
    rep(i, 1, m+1){
        if(lsb_l!=-1){
            if(i==1){
                sum_l = 0;
            }
            else sum_l = (sum_l%MOD +  dp[lsb_l][i-1]%MOD)%MOD;
        }
        if(lsb_r!=-1) sum_r = (sum_r%MOD + dp[lsb_r][i]%MOD)%MOD;
        dp[lsb][i] = (sum_l%MOD * sum_r%MOD)%MOD;
    }
}

void solve(){
    cin >> n >> m;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    vector<vl> tbl(20, vector<ll>(n, 0));
    create_table(tbl, a);
    vector<vl> dp(n, vector<ll>(m+5, 1));
    calc_perm(a, tbl, dp, 0, n-1);
    ll lsb = query(tbl, 0, n-1, a);
    // cout << a[lsb] << endl;
    ll ans = 0;
    rep(i, 1, m+1){
        ans = (ans%MOD + dp[lsb][i]%MOD)%MOD;
    }
    cout << ans << endl;
    
}

int main()
{
    // fios
    calcMSB();
    TestCases{
        solve();
    }
    return 0;
}
