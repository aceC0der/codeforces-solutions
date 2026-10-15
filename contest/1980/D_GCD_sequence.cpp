/*
 * Problem   : 1980D - GCD-sequence
 * Link      : https://codeforces.com/contest/1980/problem/D
 * Submission: https://codeforces.com/contest/1980/submission/264016597
 * Rating    : 1400   Tags: greedy, implementation, math, number theory
 * Verdict   : Accepted (124 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-03 (Contest)
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
    vi a(n), b(n-1);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n-1){
        b[i] = __gcd(a[i], a[i+1]);
    }
    if(n==3){
        cout << "YES" << endl;
        return;
    }
    vi pref(n, 0), suf(n, 0);
    rep(i, 1, n-1){
        pref[i] = pref[i-1]+(b[i-1]>b[i]);
    }
    pre(i, n-3, 0){
        suf[i] = suf[i+1]+(b[i]>b[i+1]);
    }

    // rep(i, 0, n) cout << a[i] << " "; cout << endl;
    // rep(i, 0, n-1) cout << b[i] << " "; cout << endl;
    // rep(i, 0, n-1) cout << pref[i] << " "; cout << endl;
    // rep(i, 0, n-1) cout << suf[i] << " "; cout << endl;
    if(!pref[n-2]){
        cout << "YES" << endl;
        return;
    }
    if(b[0]>b[1] && pref[n-2]==1){
        cout << "YES" << endl;
        return;
    }
    if(b[n-2]<b[n-3] && suf[0]==1){
        cout << "YES" << endl;
        return;
    }
    if(n==4){
        int g1 = __gcd(a[0], a[2]);
        int g2 = __gcd(a[1], a[3]);
        if(b[0]<g2 || g1<b[2]){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        return;
    }
    rep(i, 1, n-1){
        int g = __gcd(a[i-1], a[i+1]);
        // cout << g << endl;
        if(i==1){
            if(g>b[i+1] || suf[i+1]) continue;
        }
        else if(i==n-2){
            if(g<b[i-2] || pref[i-2]) continue;
        }
        else{
            if(g>b[i+1] || g<b[i-2] || pref[i-2] || suf[i+1]) continue;
        }
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
