/*
 * Problem   : 1923B - Monsters Attack!
 * Link      : https://codeforces.com/contest/1923/problem/B
 * Submission: https://codeforces.com/contest/1923/submission/247993328
 * Rating    : 1100   Tags: dp, greedy, implementation
 * Verdict   : Accepted (187 ms, 3500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-02-23 (Practice)
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
    vi x(n);
    vi freq(n+10);
    rep(i, 0, n) cin >> x[i];
    rep(i, 0, n) freq[abs(x[i])] += a[i];
    int rounds = 0;
    int carry = 0;
    rep(i, 1, n+1){
        if(!freq[i]) continue;
        int mn = min(freq[i], carry);
        freq[i]-=mn;
        carry-=mn;
        if(!freq[i]) continue;
        int d = freq[i]/k;
        carry = k-freq[i]%k;
        carry%=k;
        if(carry) d++;
        rounds += d;
        // cout << d << " " << rounds << " " << carry << endl;
        if(i-rounds+1<=0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;


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
