/*
 * Problem   : 1681A - Game with Cards
 * Link      : https://codeforces.com/contest/1681/problem/A
 * Submission: https://codeforces.com/contest/1681/submission/183069153
 * Rating    : 800   Tags: games, greedy
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-29 (Practice)
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
    int n, m;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    cin >> m;
    vi b(m);
    rep(j, 0, m) cin >> b[j];
    int mxa = *max_element(all(a));
    int mxb = *max_element(all(b));
    if(mxa>mxb){
        cout << "Alice" << endl << "Alice" << endl;
    }
    else if(mxa<mxb) cout << "Bob" << endl << "Bob" << endl;
    else cout << "Alice" << endl << "Bob" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
