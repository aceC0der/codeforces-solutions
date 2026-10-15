/*
 * Problem   : 1661B - Getting Zero
 * Link      : https://codeforces.com/contest/1661/problem/B
 * Submission: https://codeforces.com/contest/1661/submission/162989940
 * Rating    : 1300   Tags: bitmasks, brute force, dfs and similar, dp, graphs, greedy, shortest paths
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-06 (Practice)
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
    int dp[32769];
    int n = 32769;
    dp[n-1] = 0;
    pre(i, n-2, 1){
        int x = 0;
        rep(j, 0, 20){
            if(CheckBit(i, j)){
                x = j;
                break;
            }
        }
        x = 15-x;
        dp[i] = min(dp[i+1]+1, x);
        // cout << dp[i] << endl;
    }
    cin >> n;
    rep(i, 0, n){
        int x;
        cin >> x;
        cout << dp[x] << " ";
    }
    cout << endl;
    
    return 0;
}
