/*
 * Problem   : 1790E - Vlad and a Pair of Numbers
 * Link      : https://codeforces.com/contest/1790/problem/E
 * Submission: https://codeforces.com/contest/1790/submission/205345809
 * Rating    : 1400   Tags: bitmasks, constructive algorithms
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-10 (Practice)
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
    if(n&1){
        cout << -1 << endl;
        return;
    }
    int x = n/2;
    int xr = n^x;
    if((xr+x)/2 == n && (xr+x)%2==0){
        cout << xr << " " << x << endl;
    }
    else{
        cout << -1 << endl;
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
