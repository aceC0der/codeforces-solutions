/*
 * Problem   : 1857F - Sum and Product
 * Link      : https://codeforces.com/contest/1857/problem/F
 * Submission: https://codeforces.com/contest/1857/submission/217836480
 * Rating    : 1600   Tags: binary search, data structures, math
 * Verdict   : Accepted (576 ms, 8100 KB)
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

bool isSqr(ll n){
    ll sqt = sqrt(n);
    return (sqt*sqt==n);
}

void solve(){
    int n;
    cin >> n;
    map<ll, ll> m;
    rep(i, 0, n){
        int x;
        cin >> x;
        m[x]++;
    }
    int q;
    cin >> q;
    // cout << q << endl;
    while(q--){
        ll x, y;
        cin >> x >> y;
        // cout << x << " " << y << endl;
        swap(x, y);
        ll mns = y*y-4*x;
        if(!isSqr(mns)){
            cout << 0 << " ";
            continue;
        }
        mns = sqrt(mns) + y;
        if(mns&1){
            cout << 0 << " ";
            continue;
        }
        mns /= 2;
        ll ai = mns;
        ll aj = y-ai;
        ll nn = m[ai]+m[aj];
        if(ai==aj){
            nn/=2;
            cout << (nn*(nn-1))/2 << " ";
            continue;
        }
        // cout << ai << " " << aj << " " << nn << endl;
        cout << m[ai]*m[aj] << " ";
        
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
