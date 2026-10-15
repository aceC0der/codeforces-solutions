/*
 * Problem   : 1806A - Walking Master
 * Link      : https://codeforces.com/contest/1806/problem/A
 * Submission: https://codeforces.com/contest/1806/submission/198077527
 * Rating    : 800   Tags: geometry, greedy, math
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-19 (Practice)
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
    int x1, y1, a, b;
    cin >> x1 >> y1 >> a >> b;
    int ans = b-y1;
    if(y1>b){
        cout << -1 << endl;
        return;
    }
    ans += x1+b-y1-a;
    if(x1+b-y1<a){
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
