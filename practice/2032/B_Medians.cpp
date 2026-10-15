/*
 * Problem   : 2032B - Medians
 * Link      : https://codeforces.com/contest/2032/problem/B
 * Submission: https://codeforces.com/contest/2032/submission/291320285
 * Rating    : 1100   Tags: constructive algorithms, greedy, implementation, math
 * Verdict   : Accepted (62 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-13 (Practice)
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
    int n, k;
    cin >> n >> k;
    if(n==1 &&k==1){
        cout << 1 << endl <<1 << endl;;
        return;
    }
    if(k==1 || k==n){
        cout << -1 << endl;
        return;
    }
    cout << 3 << endl;
    if(k&1 && n>3){
        cout << 1 << " " << k-1 << " " << k+2 << endl;
        return;
    }
    cout << 1 << " " << k << " " << k+1 << endl;
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
