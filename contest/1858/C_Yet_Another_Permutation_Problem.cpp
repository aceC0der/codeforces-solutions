/*
 * Problem   : 1858C - Yet Another Permutation Problem
 * Link      : https://codeforces.com/contest/1858/problem/C
 * Submission: https://codeforces.com/contest/1858/submission/218969121
 * Rating    : 1000   Tags: constructive algorithms, greedy, math, number theory
 * Verdict   : Accepted (30 ms, 1100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-08-15 (Contest)
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
    vector<bool> vis(n+10, false);
    ll cnt = 1;
    vi ans;
    ll i = 0;
    while(i<n){
        if(!vis[i+1]){
            // vis[i] = true;
            // ans.pb(i+1);
            cnt = i+1;
            while(cnt<=n && !vis[cnt]){
                ans.pb(cnt);
                vis[cnt] = true;
                cnt*=2;
                
            }
        }
        // cout << i+1 << " " << cnt << endl;
        while(i<n && vis[i+1]) i++;
    }
    for(auto i: ans) cout << i << " "; cout << endl;
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
