/*
 * Problem   : 1877D - Effects of Anti Pimples
 * Link      : https://codeforces.com/contest/1877/problem/D
 * Submission: https://codeforces.com/contest/1877/submission/227243207
 * Rating    : 1500   Tags: combinatorics, number theory, sortings
 * Verdict   : Accepted (46 ms, 2400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-10-09 (Practice)
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
const int mod = 998244353;

ll add(ll a, ll b){
    return ((a%mod+b%mod)%mod);
}
ll mul(ll a, ll b){
    return ((a%mod*b%mod)%mod);
}

void solve(){
    ll n;
    cin >> n;
    vl powTwo(n+10);
    powTwo[0] = 1;
    rep(i, 1, n+10){
        powTwo[i] = mul(2, powTwo[i-1]);
    }
    vl a(n+1), maxi(n+1);
    rep(i, 1, n+1){
        cin >> a[i];
    }
    rep(i, 1, n+1){
        for(ll j = i; j<=n; j+=i){
            maxi[i] = max(maxi[i], a[j]);
        }
    }
    sort(all(maxi));
    ll ans = 0;
    rep(i, 1, n+1){
        ans = add(ans, mul(maxi[i], powTwo[i-1]));
    }
    cout << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    // TestCases{
        solve();
    // }
    return 0;
}
