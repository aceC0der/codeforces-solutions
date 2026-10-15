/*
 * Problem   : 1875C - Jellyfish and Green Apple
 * Link      : https://codeforces.com/contest/1875/problem/C
 * Submission: https://codeforces.com/contest/1875/submission/226044005
 * Rating    : 1400   Tags: bitmasks, greedy, math, number theory
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-30 (Contest)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/
// vl dp(100);
void solve(){
    ll n, m;
    cin >> n >> m;
    n = n%m;
    if(!n){
        cout << 0 << endl;
        return;
    }
    ll g = __gcd(n, m);
    ll x = n; 
    ll y = m;
    while(g%2==0){
        g/=2;
    }
    n/=g;
    m/=g;
    if((m&(m-1))){
        cout << -1 << endl;
        return;
    }
    // m = y;
    ll ans = 0;
    ll i = 0;
    ll cnt = m;
    ll c = 1;
    while(n){
        if(n>=cnt){
            n-=cnt;
            continue;
        }
        i++;
        ans+=n;
        n*=2;
    }
    cout << ans*g << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll aks = 0;
    ll cnt = 1;

    // rep(i, 0, 40) {
    //     dp[i] = aks;
    //     aks+=cnt, cnt<<=1;
    //     // cout << dp[i] << " ";
    // }
    // // cout << endl;
    fios
    TestCases{
        solve();
    }
    return 0;
}
