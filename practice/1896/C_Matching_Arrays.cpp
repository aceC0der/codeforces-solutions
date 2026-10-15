/*
 * Problem   : 1896C - Matching Arrays
 * Link      : https://codeforces.com/contest/1896/problem/C
 * Submission: https://codeforces.com/contest/1896/submission/267943368
 * Rating    : 1400   Tags: binary search, constructive algorithms, greedy, sortings
 * Verdict   : Accepted (312 ms, 11800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-29 (Practice)
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
    int n, x;
    cin >> n >> x;
    vi a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    vi c=a, d=b;
    sort(all(c));
    sort(all(d));
    int j = n-x;
    vi tmp(n);
    rep(i, 0, x){
        tmp[j] = d[i];
        j++;
    }
    j = n-x-1;
    rep(i, 0, j+1){
        tmp[i] = d[i+x];
    }
    // rep(i, 0, n) cout << c[i] << " "; cout << endl;
    // rep(i, 0, n) cout << tmp[i] << " "; cout << endl;
    rep(i, 0, n){
        if(c[i]>tmp[i]) x--;
    }
    if(x!=0){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    map<int, vi> freq;
    rep(i, 0, n){
        freq[c[i]].pb(tmp[i]);
    }
    rep(i, 0, n){
        b[i] = freq[a[i]].back();
        freq[a[i]].pop_back();
    }
    // rep(i, 0, n) cout << a[i] << " "; cout << endl;
    rep(i, 0, n) cout << b[i] << " "; cout << endl;

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
