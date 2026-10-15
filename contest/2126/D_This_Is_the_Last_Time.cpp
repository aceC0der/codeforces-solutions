/*
 * Problem   : 2126D - This Is the Last Time
 * Link      : https://codeforces.com/contest/2126/problem/D
 * Submission: https://codeforces.com/contest/2126/submission/329512230
 * Rating    : 1200   Tags: data structures, greedy, sortings
 * Verdict   : Accepted (171 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2025-07-17 (Contest)
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

struct casino {
    ll l, real, r;
};

bool cmp(casino a, casino b){
    if(a.real==b.real){
        if(a.r==b.r) return a.l<b.l;
        return a.r<b.r;
    }
    return a.real<b.real;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<casino> arr(n);
    rep(i, 0, n){
        cin >> arr[i].l >> arr[i].r >> arr[i].real;
    }
    sort(all(arr), cmp);
    // rep(i, 0, n)  cout << arr[i].l << " " << arr[i].r << " " << arr[i].real << endl;
    rep(i, 0, n){
        if(arr[i].l <= k && k <= arr[i].r){
            k = max(k, arr[i].real);
        }
    } 

    cout << k << endl;
    
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
