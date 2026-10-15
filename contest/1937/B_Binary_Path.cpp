/*
 * Problem   : 1937B - Binary Path
 * Link      : https://codeforces.com/contest/1937/problem/B
 * Submission: https://codeforces.com/contest/1937/submission/248942275
 * Rating    : 1300   Tags: dp, greedy, implementation
 * Verdict   : Accepted (31 ms, 1000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-02-29 (Contest)
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
    string a1, a2;
    cin >> a1;
    cin >> a2;
    int breakPoint = n-1;
    int cnt = 0;;
    rep(i, 0, n-1){
        if(a1[i+1]!=a2[i]){
            if(a1[i+1]!='0'){
                breakPoint = i;
                // cout << cnt << "*********" << endl;
                break;
            }
            cnt = 0;
        }
        else cnt++;
    }
    string ans = "";
    // cout << breakPoint << "**" << endl;
    cnt++;
    rep(i, 0, breakPoint+1) ans+=a1[i];
    rep(i, breakPoint, n) ans+=a2[i];
    cout << ans << endl;
    cout << cnt << endl;

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
