/*
 * Problem   : 1882C - Card Game
 * Link      : https://codeforces.com/contest/1882/problem/C
 * Submission: https://codeforces.com/contest/1882/submission/225133682
 * Rating    : 1500   Tags: brute force, greedy
 * Verdict   : Accepted (93 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-25 (Contest)
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
    ll n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    ll neg = 0, pos = 0;
    ll sum = 0;
    ll mx_shift = 0;
    pre(i, n-1, 0){
        if(a[i]<0 && pos>0) neg+=a[i];
        else if(a[i]>=0) pos+=a[i];
        // cout << neg << "**" << pos << endl;
        if((i+1)&1){
            if(a[i]>=0){
                sum += pos;
                pos = 0;
                neg = 0;
            }
            else{
                mx_shift = max(mx_shift, sum+pos+a[i]);
            }
        }
        else{
            ll x = 0;
            if(a[i]>=0) x = a[i];
            mx_shift = max(mx_shift, sum+pos-x);
        }
    }
    // cout << sum << " " << mx_shift << endl;
    ll ans = max(sum , mx_shift);
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
