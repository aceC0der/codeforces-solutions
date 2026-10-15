/*
 * Problem   : 1974E - Money Buys Happiness
 * Link      : https://codeforces.com/contest/1974/problem/E
 * Submission: https://codeforces.com/contest/1974/submission/261994554
 * Rating    : 1800   Tags: dp
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-21 (Practice)
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

const ll INF = 5e14;

void solve(){
    ll m, x;
    cin >> m >> x;
    vl cost(m), happ(m);
    int sum = 0;
    rep(i, 0, m) {
        cin >> cost[i] >> happ[i];
        sum+=happ[i];
    }
    vl dp(sum+100, INF);
    dp[0] = 0;
    rep(i, 0, m){
        pre(j, sum, happ[i]){
            if(dp[j-happ[i]]+cost[i]<=i*x){
                dp[j] = min(dp[j], dp[j-happ[i]]+cost[i]);
            }
        }
    }
    // dp[0] = 0;
    pre(i, sum, 0){
        if(dp[i]<INF){
            cout << i << endl;
            return;
        }
    }
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
