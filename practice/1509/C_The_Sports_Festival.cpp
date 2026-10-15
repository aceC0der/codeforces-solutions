/*
 * Problem   : 1509C - The Sports Festival
 * Link      : https://codeforces.com/contest/1509/problem/C
 * Submission: https://codeforces.com/contest/1509/submission/116243636
 * Rating    : 1800   Tags: dp, greedy
 * Verdict   : Accepted (93 ms, 31700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-05-15 (Practice)
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

ll dec(vector<vl> &dp, vl &a, ll i, ll j){
    if(i == j){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    dp[i][j] = min(dec(dp, a, i+1, j), dec(dp, a, i, j-1)) + (a[j] - a[i]);
    //cout << "i : " << i << " j: " << j << " dp " << dp[i][j] <<endl;

    return dp[i][j];
}

int main()
{
    I

    ll n;
    cin >> n;
    vector<vl> dp(n, vl(n, -1));
    vl a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    sort(all(a));
    ll d = dec(dp, a, 0, n-1);

    cout << d << endl;

    return 0;
}
