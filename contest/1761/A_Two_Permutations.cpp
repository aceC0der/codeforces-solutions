/*
 * Problem   : 1761A - Two Permutations
 * Link      : https://codeforces.com/contest/1761/problem/A
 * Submission: https://codeforces.com/contest/1761/submission/181794963
 * Rating    : 800   Tags: brute force, constructive algorithms
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-20 (Contest)
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

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    bool f = (((a+b)<=n-2) || (a==b && a==n));
    
    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main()
{
    // fios
    TestCases{
        solve();
    }
    return 0;
}
