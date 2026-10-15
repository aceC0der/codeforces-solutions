/*
 * Problem   : 2035C - Alya and Permutation
 * Link      : https://codeforces.com/contest/2035/problem/C
 * Submission: https://codeforces.com/contest/2035/submission/288339137
 * Rating    : 1400   Tags: bitmasks, constructive algorithms, math
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-27 (Contest)
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

int cnt = 5;

void solve(){
    int n;
    cin >> n;
    // n = cnt++;
    // rep(i, 0, n) cout << a[i] << " "; cout << endl;
    if(n==5){
        cout << 5 << endl;
        cout << "2 1 3 4 5" << endl;
        return;
    }
    vi arr = {1, 2, 4, 6, 5, 3};

    vi tmp;
    bool f= true;
    if(n&1){
        n--;
        f = false;
    }
    rep(i, 7, n+1){
        if(!(i&(i-1))){
            arr.pb(i);
        }else if(!(i&(i+1))){
            arr.pb(i);
        }
        else tmp.pb(i);
    }
    rep(i, 0, arr.size()){
        tmp.pb(arr[i]);
    }
    if(!f) n++;
    if(!f) tmp.pb(n);
    int k=0;
    rep(i, 0, n){
        if((i+1)&1){
            k&=tmp[i];
        }else k|=tmp[i];
    }
    cout << k << endl;
    rep(i, 0, n) cout << tmp[i] << " "; cout << endl;
    // cout << n << " " << k << endl;
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
