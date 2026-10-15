/*
 * Problem   : 1797A - Li Hua and Maze
 * Link      : https://codeforces.com/contest/1797/problem/A
 * Submission: https://codeforces.com/contest/1797/submission/201272563
 * Rating    : 800   Tags: constructive algorithms, flows, graphs, greedy, implementation
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-08 (Contest)
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
    cin >> n >> m;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2>> y2;
    int a1 = 4, a2 = 4;
    if(x1==1 || x1==n){
        a1--;
    }
    if(y1==1 || y1==m){
        a1--;
    }
    if(x2==1 || x2==n){
        a2--;
    }
    if(y2==1 || y2==m){
        a2--;
    }
    // cout << a1 << " " << a2 << endl;
    cout << min(a1, a2) << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
