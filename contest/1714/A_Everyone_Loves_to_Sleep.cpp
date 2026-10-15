/*
 * Problem   : 1714A - Everyone Loves to Sleep
 * Link      : https://codeforces.com/contest/1714/problem/A
 * Submission: https://codeforces.com/contest/1714/submission/166551497
 * Rating    : 900   Tags: implementation, math
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-01 (Contest)
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
    int n, h, m;
    cin >> n >> h >> m;
    vpi a(n);
    pi ans;
    ans.first = ans.second = 100;
    rep(i, 0, n){
        int x, y;
        cin >> x >> y;
        int ah=(24+x-h)%24, am=(60+y-m)%60;
        ah -= (y<m);
        ah += 24;
        ah %= 24;
        if(mp(ah, am)<ans){
            ans = mp(ah, am);
        }
    }
    cout << ans.first << " " << ans.second << endl;

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
