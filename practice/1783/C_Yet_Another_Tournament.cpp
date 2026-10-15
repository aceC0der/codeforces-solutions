/*
 * Problem   : 1783C - Yet Another Tournament
 * Link      : https://codeforces.com/contest/1783/problem/C
 * Submission: https://codeforces.com/contest/1783/submission/188613393
 * Rating    : 1700   Tags: binary search, greedy, sortings
 * Verdict   : Accepted (139 ms, 3900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-09 (Practice)
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
    vi a(n), b(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    b = a;
    sort(all(b));
    int wins = 0;
    int mx=0;
    rep(i, 0, n){
        if(b[i]>m){
            break;
        }
        mx = b[i];
        m-=b[i];
        wins++;
    }
    // cout << wins << "***" << endl;
    if(wins==n){
        cout << 1 << endl;
        return;
    }
    if(m+mx>=a[wins]){
        cout << n-wins << endl;
    }
    else{
        cout << n-wins+1 << endl;
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
