/*
 * Problem   : 1741B - Funny Permutation
 * Link      : https://codeforces.com/contest/1741/problem/B
 * Submission: https://codeforces.com/contest/1741/submission/189585819
 * Rating    : 800   Tags: constructive algorithms, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-18 (Practice)
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
    int n;
    cin >> n;
    if(n==3) {
        cout << -1 << endl;
        return;
    }
    cout << n << " " << n-1 << " ";
    rep(i, 1, n-1) cout << i << " ";
    cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
