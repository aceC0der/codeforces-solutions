/*
 * Problem   : 1836C - k-th equality
 * Link      : https://codeforces.com/contest/1836/problem/C
 * Submission: https://codeforces.com/contest/1836/submission/210222706
 * Rating    : 1700   Tags: brute force, greedy, implementation, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-19 (Practice)
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

ll root(ll a, ll b, ll c){
    double det = sqrt(b*b-4*a*c);
    double x = (-b+det)/2;
    return (ll)x;
}

void answer(ll a, ll b, ll c){
    cout << a << " + " << b << " = " << c << " " << endl;
}

ll val[] = {1, 10, 100, 1000, 10000, 100000, 1000000};

void solve(){
    ll a, b, c, k;
    cin >> a >> b >> c >> k;
    a--,b--,c--;
    ll va = val[a], vb=val[b], vc=val[c];
    rep(i, va, val[a+1]){
        ll lb = max(vc-i, vb);
        ll ub = min(val[c+1]-i-1, val[b+1]-1);
        // cout << i << " " << lb << " " << ub << endl;
        if(lb>ub) continue;
        ll sz = ub-lb+1;
        if(k<=sz){
            cout << i << " + " << lb+k-1 << " = " << lb+k-1+i << " " << endl;
            return;
        }
        k-=sz;
    }
    cout << -1 << " " << endl;
    return;
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
