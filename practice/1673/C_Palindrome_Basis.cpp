/*
 * Problem   : 1673C - Palindrome Basis
 * Link      : https://codeforces.com/contest/1673/problem/C
 * Submission: https://codeforces.com/contest/1673/submission/164025981
 * Rating    : 1500   Tags: brute force, dp, math, number theory
 * Verdict   : Accepted (342 ms, 78600 KB)
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

int rev(int n){
    int ret = 0;
    while(n){
        int dig = n%10;
        n/=10;
        ret = ret*10 + dig;
    }
    return ret;
}


bool isPallindrome(int n){
    return rev(n)==n;
}

const int mod = (int)1e9+7;
int dp[(int)4e4+2][502];
int ways(vi& a, int c,int i){
    // cout << c << endl;
    if(c==0) return 1;
    if(c<0 || i<0){
        return 0;
    }
    if(dp[c][i]!=-1) return dp[c][i];
    int ret = ways(a, c-a[i], i)%mod + ways(a, c, i-1)%mod;
    return dp[c][i] = ret%mod;
}

int main()
{
    fios
    int n = 4*1e4 + 1;
    // cout << n << endl;
    vi pal;
    rep(i, 1, n){
        if(isPallindrome(i)){
            // cout << i << " ";
            pal.pb(i);
        }
    }
    // cout << endl;
    // cout << pal.size() << endl;
    rep(i, 0, 4e4+2){
        rep(j, 0, 500){
            dp[i][j] = -1;
        }
    }
    TestCases{
        int x;
        cin >> x;
        cout << ways(pal, x, 497) << endl;
    }

    return 0;
}
