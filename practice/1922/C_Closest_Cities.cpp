/*
 * Problem   : 1922C - Closest Cities
 * Link      : https://codeforces.com/contest/1922/problem/C
 * Submission: https://codeforces.com/contest/1922/submission/242467961
 * Rating    : 1300   Tags: greedy, implementation, math
 * Verdict   : Accepted (108 ms, 2400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-01-19 (Practice)
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
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    vi close(n);
    close[0] = 1;
    close[n-1] = n-2;
    rep(i, 1, n-1){
        int ab = a[i+1]-a[i];
        int ba = a[i]-a[i-1];
        close[i] = i-1;
        if(ab<ba){
            close[i] = i+1;
        }
    }
    vl l(n), r(n);
    rep(i, 1, n){
        l[i] = l[i-1];
        if(close[i-1]==i) l[i]++;
        else l[i]+=(a[i]-a[i-1]);
    }
    pre(i, n-2, 0){
        r[i] = r[i+1];
        if(close[i+1]==i) r[i]++;
        else r[i]+=(a[i+1]-a[i]);
    }
    int q;
    cin >> q;
    while(q--){
        int x, y;
        cin >> x >> y;
        x--;y--;
        if(x<y){
            cout << l[y]-l[x] << endl;
        }
        else cout << r[y]-r[x] << endl;
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
