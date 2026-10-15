/*
 * Problem   : 1902C - Insert and Equalize
 * Link      : https://codeforces.com/contest/1902/problem/C
 * Submission: https://codeforces.com/contest/1902/submission/248432610
 * Rating    : 1300   Tags: brute force, constructive algorithms, greedy, math, number theory
 * Verdict   : Accepted (249 ms, 9600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-02-27 (Practice)
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

void solve(){
    int n;
    cin >> n;
    vl a(n);
    map<ll, bool> freq;
    rep(i, 0, n) {
        cin >> a[i];
        freq[a[i]] = true;
    }
    if(n==1) {
        cout << 1 << endl;
        return;
    }
    sort(all(a));
    ll x = 0;
    rep(i, 1, n){
        ll dif = abs(a[i]-a[i-1]);
        x = __gcd(x, dif);
    }
    ll mx = a[n-1];
    ll ans = 0;
    // cout <<  x << endl;
    rep(i, 0, n){
        ll dif = abs(mx-a[i]);
        ans += dif/x;
    }
    ll extra = n;
    ll last = mx-x;
    ll cnt = 1;
    while(freq[last]==true){
        last-=x;
        cnt++;
    }
    // cout << last << endl;
    extra = min(extra, cnt);
    ans += extra;
    cout << ans << endl;

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
