/*
 * Problem   : 1772E - Permutation Game
 * Link      : https://codeforces.com/contest/1772/problem/E
 * Submission: https://codeforces.com/contest/1772/submission/188909024
 * Rating    : 1700   Tags: games
 * Verdict   : Accepted (124 ms, 2000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-11 (Practice)
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
    rep(i, 0, n) cin >> a[i];
    int x = 0, y = 0, z = 0;
    rep(i, 0, n){
        if(a[i]!=i+1 && a[i]!=n-i) z++;
        else if(a[i]!=i+1) x++;
        else if(a[i]!=n-i) y++;
    }
    if(x+z<=y) cout << "First" << endl;
    else if(y+z<x) cout << "Second" << endl;
    else cout << "Tie" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
