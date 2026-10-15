/*
 * Problem   : 1781D - Many Perfect Squares
 * Link      : https://codeforces.com/contest/1781/problem/D
 * Submission: https://codeforces.com/contest/1781/submission/213076773
 * Rating    : 1800   Tags: brute force, math, number theory
 * Verdict   : Accepted (451 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-07-10 (Practice)
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

int chker(vl& a, ll x){
    int cnt = 0;
    rep(i, 0, a.size()){
        ll v = a[i]+x;
        ll sq = sqrt(v);
        if(sq*sq==v) cnt++;
    }
    // cout << x << " " << cnt << endl;
    return cnt;
}

void solve(){
    ll n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    int ans = 1;
    rep(i, 0, n){
        rep(j, i+1, n){
            ll diff = a[j]-a[i];
            ll sq_dif = sqrt(diff)+1;
            rep(d, 1, sq_dif){
                if(diff%d==0){
                    ll val = diff/d + d;
                    if(val%2==0){
                        ll q = val/2;
                        if(q*q>=a[j]) ans = max(ans, chker(a, q*q-a[j]));
                    }
                }
            }
        }
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
    TestCases{
        solve();
    }
    return 0;
}
