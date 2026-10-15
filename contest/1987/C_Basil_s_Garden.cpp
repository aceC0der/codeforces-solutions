/*
 * Problem   : 1987C - Basil's Garden
 * Link      : https://codeforces.com/contest/1987/problem/C
 * Submission: https://codeforces.com/contest/1987/submission/268182977
 * Rating    : 1200   Tags: dp, greedy
 * Verdict   : Accepted (108 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-30 (Contest)
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
    int n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    vl start(n, -1), end(n);
    start[n-1] = 0;
    end[n-1] = a[n-1];
    pre(i, n-2, 0){
        if(a[i]>a[i+1]){
            end[i] = a[i];
            if(a[i]<=end[i+1]) end[i] = end[i+1]+1;
        }
        else{
            start[i] = start[i+1]+(abs(a[i+1]-a[i])+1);
            end[i] = start[i]+a[i];
            end[i] = max(end[i], end[i+1]+1);
        }
    }
    // rep(i, 0, n) cout << start[i] << " "; cout << endl;
    // rep(i, 0, n) cout << end[i] << " "; cout << endl;
    ll mx = 0;
    rep(i, 0, n) mx = max(mx, end[i]);
    cout << mx << endl;
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
