/*
 * Problem   : 1764C - Doremy's City Construction
 * Link      : https://codeforces.com/contest/1764/problem/C
 * Submission: https://codeforces.com/contest/1764/submission/182695975
 * Rating    : 1400   Tags: graphs, greedy
 * Verdict   : Accepted (77 ms, 6300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-26 (Contest)
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
const int N = (int)1e6+5;

int freq[N];
void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) {
        cin >> a[i];
        freq[a[i]] = 0;
    }
    sort(all(a));
    ll ans = 0;
    vi l(n);
    vi r(n);
    rep(i, 0, n){
        l[i] = i-freq[a[i]];
        freq[a[i]]++;
    }
    rep(i, 0 , n) freq[a[i]] = 0;
    pre(i, n-1, 0){
        r[i] = n-i-1-freq[a[i]];
        freq[a[i]]++;
    }
    int left , right ;
    left = right = 0;
    rep(i, 0, n){
        int lf = l[i];
        int rf = r[i];
        if(l[i]>=r[i]) break;
        ans += r[i];
        ans -= l[i];
    }
    if(r[0]==0) ans = n/2;
    cout << ans << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
