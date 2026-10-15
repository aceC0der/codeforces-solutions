/*
 * Problem   : 1857E - Power of Points
 * Link      : https://codeforces.com/contest/1857/problem/E
 * Submission: https://codeforces.com/contest/1857/submission/217826734
 * Rating    : 1500   Tags: math, sortings
 * Verdict   : Accepted (280 ms, 12700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-08-08 (Practice)
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
    ll n;
    cin >> n;
    vl a(n), b;
    rep(i, 0, n) cin >> a[i];
    b = a;
    if(n<2){
        cout << 1 << endl;
        return;
    }
    sort(all(a));
    map<ll, ll> m;
    ll sum = n;
    vl dif(n-1);
    rep(i, 1, n){
        dif[i-1] = a[i]-a[i-1];
    }
    ll cnt = n-1;
    rep(i, 0, n-1){
        sum += cnt*dif[i];
        cnt--;
    }
    m[a[0]] = sum;
    ll lcnt = 1, rcnt = n-1;
    rep(i, 1, n){
        if(m[a[i]]!=0){
            lcnt++;
            rcnt--;
            continue;
        }
        sum -= dif[i-1]*rcnt;
        rcnt--;
        sum += dif[i-1]*lcnt;
        lcnt++;
        m[a[i]] = sum;
    }
    rep(i, 0, n){
        cout << m[b[i]] << " ";
    }
    cout << endl;
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
