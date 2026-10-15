/*
 * Problem   : 2037C - Superultra's Favorite Permutation
 * Link      : https://codeforces.com/contest/2037/problem/C
 * Submission: https://codeforces.com/contest/2037/submission/291982411
 * Rating    : 1000   Tags: constructive algorithms, greedy, math, number theory
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-17 (Contest)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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

void solve(){
    int n;
    cin >>n;
    if(n<=4){
        cout << -1 << endl;
        return;
    }
    rep(i, 1, n+1){
        if(i==5) continue;
        if(i%2){
            cout << i << " ";
        }
    }
    cout << 5 << " " << 4 << " ";
    rep(i, 1, n+1){
        if(i==4) continue;
        if(i%2==0) cout << i << " ";
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
