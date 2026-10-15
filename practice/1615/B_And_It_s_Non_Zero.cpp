/*
 * Problem   : 1615B - And It's Non-Zero
 * Link      : https://codeforces.com/contest/1615/problem/B
 * Submission: https://codeforces.com/contest/1615/submission/223699470
 * Rating    : 1300   Tags: bitmasks, greedy, math
 * Verdict   : Accepted (109 ms, 25900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-17 (Practice)
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
const int N = 2e5+100;
int arr[N][33];

void solve(){
    int l, r;
    cin >> l >> r;
    int mn = INT_MAX;
    rep(i, 0, 31){
        int cnt = arr[r][i]-arr[l-1][i];
        // cout << cnt << endl;
        mn = min(mn, cnt);
    }
    
    cout << mn << endl;
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // int arr[(int)(1e5+15)][33];
    int l = 1, r = 2e5+10;
    rep(i, 0, 31){
        int cnt = 0;
        rep(j, l, r+1){
            arr[j][i] = arr[j-1][i];
            if(!CheckBit(j, i)) arr[j][i]++;
        }
        // mn = min(cnt, mn);
    }
    fios
    // cout << "*********" << endl;
    TestCases{
        solve();
    }
    return 0;
}
