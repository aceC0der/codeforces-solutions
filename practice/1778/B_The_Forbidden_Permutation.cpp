/*
 * Problem   : 1778B - The Forbidden Permutation
 * Link      : https://codeforces.com/contest/1778/problem/B
 * Submission: https://codeforces.com/contest/1778/submission/191655909
 * Rating    : 1300   Tags: greedy, math
 * Verdict   : Accepted (187 ms, 2700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-02-02 (Practice)
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

void solve(){
    ll n, m, d;
    cin >> n >> m >> d;
    vl p(n+10);
    vl pos(n+10);
    vl a(m+10);
    rep(i, 0, n){
        cin >> p[i];
        pos[p[i]] = i+1;
    }
    rep(i, 0, m) cin >> a[i];
    ll mn = INT_MAX;
    rep(i, 0, m-1){
        ll p1 = pos[a[i]], p2 = pos[a[i+1]];
        ll mv = 0;
        if(p1<p2 && p2<=p1+d){
            ll m1=INT_MAX, m2=INT_MAX;
            if(d<n-1){
                m1 = p1+d-p2+1;
            }
            m2 = p2-p1;
            // cout << m1 << " " << m2 << endl;
            mv = min(m1, m2);
        }
        mn = min(mv, mn);
    }
    cout << mn << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
