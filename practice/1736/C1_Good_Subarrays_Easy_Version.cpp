/*
 * Problem   : 1736C1 - Good Subarrays (Easy Version)
 * Link      : https://codeforces.com/contest/1736/problem/C1
 * Submission: https://codeforces.com/contest/1736/submission/228406058
 * Rating    : 1300   Tags: binary search, data structures, schedules, two pointers
 * Verdict   : Accepted (78 ms, 2400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-10-16 (Practice)
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
    cin >>n;
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    // rep(i, 0, n) cout << a[i] << " " ; cout << endl;
    int i=n-1, j=n-1;
    ll ans = 0;
    priority_queue<pi> pq;
    pq.push({j-a[n-1]+1, j});

    while(i>=0){
        // pq.push({a[i]-1, i});
        // cout << i << " " << j << endl;
        pi top = pq.top();
        // pq.pop();
        // cout << i << " " << j  << " " << top.ff << " " << top.ss << endl;
        if(top.ff>i){
            // cout << "***" << endl;
            j = top.ss-1;
            pq.pop();
            continue;
        }
        if(top.ss>j){
            pq.pop();
            continue;
        }
        ll sz = j-i+1;
        ans += sz;
        i--;
        if(i>=0) pq.push({i-a[i]+1, i});
        // cout << ans << endl;
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
