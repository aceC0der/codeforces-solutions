/*
 * Problem   : 2019B - All Pairs Segments
 * Link      : https://codeforces.com/contest/2019/problem/B
 * Submission: https://codeforces.com/contest/2019/submission/283202326
 * Rating    : 1200   Tags: implementation, math
 * Verdict   : Accepted (171 ms, 2900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-27 (Contest)
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
    ll n, q;
    cin >> n >> q;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    map<ll, ll> freq;
    ll segment = 0, points = 0;
    ll prev = 0, nxt = n-1;
    freq[nxt]++;
    rep(i, 0, n-1){
        segment+=nxt;
        freq[segment]++;
        segment-=prev;
        prev++;
        nxt--;
        points = a[i+1]-a[i]-1;
        // cout << segment << " " << points << " " << i << endl;
        freq[segment]+=points;
    }
    while(q--){
        ll k;
        cin >>k;
        cout << freq[k] << " ";
    }
    cout << endl;
    

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
