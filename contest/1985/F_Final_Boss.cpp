/*
 * Problem   : 1985F - Final Boss
 * Link      : https://codeforces.com/contest/1985/problem/F
 * Submission: https://codeforces.com/contest/1985/submission/265345315
 * Rating    : 1500   Tags: binary search, data structures
 * Verdict   : Accepted (155 ms, 8800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-11 (Contest)
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
    ll h, n;
    cin >> h >> n;
    vl a(n), c(n);
    ll sum = 0;
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> c[i];
    rep(i, 0, n) sum+=a[i];
    // rep(i, 0, n) cout << a[i] << " "; cout<< endl;
    // return;
    priority_queue<pair<ll, pl>, vector<pair<ll, pl>>, greater<pair<ll, pl>>> pq;
    ll turn = 1;
    h-=sum;
    rep(i, 0, n){
        pair<ll, pl> tmp;
        tmp.first = 1+c[i];
        tmp.ss.ff = c[i];
        tmp.ss.ss = a[i];
        pq.push(tmp);
    }
    // cout << h << " " << turn << endl;
    // return ;
    while(h>0){
        pair<ll, pl> top = pq.top();
        // cout << 
        pq.pop();
        turn = top.first;
        h-=top.ss.ss;
        top.ff = top.ff+top.ss.ff;
        pq.push(top);
    }
    cout << turn << endl;
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
