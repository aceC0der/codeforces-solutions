/*
 * Problem   : 1733B - Rule of League
 * Link      : https://codeforces.com/contest/1733/problem/B
 * Submission: https://codeforces.com/contest/1733/submission/172733916
 * Rating    : 900   Tags: constructive algorithms, math
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-19 (Contest)
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
    int n, x, y;
    cin >> n >> x >> y;
    // cout << x << " " << y << endl;
    if((x && y) || (x==0 && y==0)){
        cout << -1 << endl;
        return;
    }
    x = x+y;
    int div = (n-1)/x;
    if((n-1)%x!=0){
        cout << -1 << endl; return;
    }
    int wn = 1;
    int i = 1;
    int cnt = 0;
    // cout << "**" << endl;
    // cout << x << endl;
    rep(i, 1, n){
        if(cnt<x){
            cnt++;
        }
        else{
            wn = i+1;
            cnt = 1;
        }
        cout << wn << " ";
    }
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
