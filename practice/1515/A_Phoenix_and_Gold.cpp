/*
 * Problem   : 1515A - Phoenix and Gold
 * Link      : https://codeforces.com/contest/1515/problem/A
 * Submission: https://codeforces.com/contest/1515/submission/224209301
 * Rating    : 800   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (46 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-21 (Practice)
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
    int n, x;
    cin >> n >> x;
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    int sum = 0;
    rep(i, 0, n){
        sum += a[i];
    }
    // cout << sum << " " << x << endl;
    if(sum==x){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        sort(all(a));
        int ex = -1;
        vi b;
        int s = 0;
        rep(i, 0, n){
            s += a[i];
            if(s==x){
                s-=a[i];
                ex = a[i];
            }
            else{
                cout << a[i] << " ";
            }
        }
        if(ex!=-1) cout << ex << " ";
        cout << endl;
        // rep(i, 0, n) cout << b[i] << " "; cout << endl;
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
