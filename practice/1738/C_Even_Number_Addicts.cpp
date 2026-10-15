/*
 * Problem   : 1738C - Even Number Addicts
 * Link      : https://codeforces.com/contest/1738/problem/C
 * Submission: https://codeforces.com/contest/1738/submission/202778803
 * Rating    : 1500   Tags: dp, games, greedy, math
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-20 (Practice)
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
    vi a(n);
    int evn, odd;
    evn = odd = 0;
    rep(i, 0, n){
        cin >> a[i];
        odd += (a[i]&1);
    }
    evn = n-odd;
    int slts = n/2 + (n&1) - evn/2 - (evn&1);
    int ods = odd/2 + (odd&1);
    cout << (((slts&1) && (ods&1)) ? "Bob" : "Alice") << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
