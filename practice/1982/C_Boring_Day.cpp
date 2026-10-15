/*
 * Problem   : 1982C - Boring Day
 * Link      : https://codeforces.com/contest/1982/problem/C
 * Submission: https://codeforces.com/contest/1982/submission/267426804
 * Rating    : 1200   Tags: binary search, data structures, dp, greedy, two pointers
 * Verdict   : Accepted (108 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-26 (Practice)
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

ll n, l, r;

int isValid(ll x){
    if(x>r) return 1;
    if(x<l) return -1;
    return 0;
}

void solve(){
    cin >> n >> l >> r;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    vl dp(n);
    ll sum = 0;
    ll i=-1,j=-1;
    if(isValid(a[n-1])==0){
        dp[n-1]=1;
    }
    else{
        dp[n-1]=0;
        if(isValid(a[n-1])<0)sum+=a[n-1],j=n-1;
    }
    pre(it, n-2, 0){
        i = it;
        sum+=a[i];
        if(j==-1) j=i;
        while(isValid(sum)>0){
            sum-=a[j];
            j--;
        }
        if(isValid(sum)==0) {
            dp[it]=dp[it+1]+1;
            i=-1, j=-1;
            sum = 0;
        }
        else dp[it] = dp[it+1];
    }
    cout << dp[0] << endl;

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
