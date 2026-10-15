/*
 * Problem   : 1951B - Battle Cows
 * Link      : https://codeforces.com/contest/1951/problem/B
 * Submission: https://codeforces.com/contest/1951/submission/255305660
 * Rating    : 1200   Tags: binary search, data structures, greedy
 * Verdict   : Accepted (93 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-04-06 (Contest)
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
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    vi b = a;
    sort(all(b));
    k--;
    if(a[k]==b[n-1]){
        cout << n-1 << endl;
        return;
    }
    int mnPos = 0;
    rep(i, 0, n){
        if(a[i]>a[k]){
            mnPos = i;
            break;
        }
    }
    int mn2Pos = -1;
    rep(i, mnPos+1, n){
        if(a[i]>a[k]){
            mn2Pos = i;
            break;
        }
    }
    int ans = 0;
    rep(i, 0, mnPos){
        if(i==0){
            ans = max(ans, mnPos-1);
        }
        else{
            ans = max(ans, mnPos-i);
        }
    }
    if(mnPos<k){
        swap(k, mnPos);
        if(mn2Pos!=-1) mnPos = min(mnPos, mn2Pos);
        if(k==0){
            ans = max(ans, mnPos-1);
        }
        else{
            ans = max(ans, mnPos-k);
        }
    }
    ans = max(ans, 0);
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
