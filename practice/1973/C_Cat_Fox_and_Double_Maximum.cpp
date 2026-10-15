/*
 * Problem   : 1973C - Cat, Fox and Double Maximum
 * Link      : https://codeforces.com/contest/1973/problem/C
 * Submission: https://codeforces.com/contest/1973/submission/261433055
 * Rating    : 1700   Tags: constructive algorithms, greedy, implementation, math, sortings
 * Verdict   : Accepted (93 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-18 (Practice)
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
    // cout << "******" << endl;
    // return;
    int n;
    cin >> n;
    vi a(n);
    vi pos(n+3);
    vi val(n+3);
    rep(i, 0, n) {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int it = 1;
    vi peaks;
    while(it<n-1){
        peaks.pb(a[it]);
        it+=2;
    }
    sort(all(peaks));
    int x = n;
    for(auto p: peaks){
        val[p] = x;
        x--;
    }
    val[a[n-1]] = n/2 + 1;
    vi valley;
    it = 0;
    while(it<n-1){
        valley.pb(a[it]);
        it+=2;
    }
    sort(all(valley), greater<int>());
    x = 1;
    for(auto v: valley) {
        val[v] = x;
        x++;
    }
    bool f = true;
    vi test(n+3);
    rep(i, 0, n) test[i] = val[a[i]]+a[i];
    it = 1;
    while(it<n-1){
        if(test[it]<=test[it-1] || test[it]<=test[it+1]){
            f = false;
            break;
        }
        it+=2;
    }
    // rep(i, 0, n) cout << test[i] << " "; cout << "test " << f << endl;
    if(f) {rep(i, 0, n) cout << val[a[i]] << " "; cout << endl; return;}
    it = 2;
    peaks.clear();
    while(it<n-1){
        peaks.pb(a[it]);
        it+=2;
    }
    sort(all(peaks));
    x = n;
    for(auto p: peaks){
        val[p] = x;
        x--;
    }
    val[a[0]] = n/2 + 1;
    it = 1;
    valley.clear();
    while(it<n){
        valley.pb(a[it]);
        it+=2;
    }
    sort(all(valley), greater<int>());
    x = 1;
    for(auto v: valley) {
        val[v] = x;
        x++;
    }
    f = true;
    rep(i, 0, n) test[i] = val[a[i]]+a[i];
    it = 2;
    while(it<n-1){
        if(test[it]<=test[it-1] || test[it]<=test[it+1]){
            f = false;
            break;
        }
        it+=2;
    }
    // rep(i, 0, n) cout << test[i] << " "; cout << "test " << f << endl;
    if(f) {rep(i, 0, n) cout << val[a[i]] << " "; cout << endl; return;}
    
    // rep(i, 0, n) cout << val[a[i]]+a[i] << " "; cout << "F" << endl;
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
