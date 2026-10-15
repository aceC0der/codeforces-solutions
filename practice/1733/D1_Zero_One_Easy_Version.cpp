/*
 * Problem   : 1733D1 - Zero-One (Easy Version)
 * Link      : https://codeforces.com/contest/1733/problem/D1
 * Submission: https://codeforces.com/contest/1733/submission/172773840
 * Rating    : 1400   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-20 (Practice)
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
    ll n, x, y;
    cin >> n >> x >> y;
    string sa, sb;
    cin >> sa >> sb;
    ll a, b;
    a=b=-1;
    ll cnt = 0;
    rep(i, 0, n){
        if(sb[i]!=sa[i]){
            cnt++;
            if(a==-1){
                a = i;
            }
            else if(b==-1) b = i;
        }
    }
    if(cnt&1){
        cout << -1 <<endl;
        return;
    }
    ll cost = 0;
    // cout << a << " " << b << endl;
    if(cnt==2 && a+1==b){
        if(2*y<=x) cost = 2*y;
        else cost = x;
    }
    else{
        cost = cnt/2 * y;
    }
    cout << cost << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
