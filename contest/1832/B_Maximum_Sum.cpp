/*
 * Problem   : 1832B - Maximum Sum
 * Link      : https://codeforces.com/contest/1832/problem/B
 * Submission: https://codeforces.com/contest/1832/submission/205595574
 * Rating    : 1100   Tags: brute force, sortings, two pointers
 * Verdict   : Accepted (62 ms, 2400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-12 (Contest)
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
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    ll i=0, j=n-1;
    ll sum =  0;
    vl pref(n+1);
    rep(i, 1, n+1){
        // sum += a[i];
        pref[i] += pref[i-1]+a[i-1];
        // cout << a[i] << " " ;
    }
    // cout << endl;
    // rep(i, 0, n) cout << a[i] << " "; cout << endl;
    // rep(i, 0, n) cout << pref[i+1] << " "; cout << endl;
    ll s3 = LLONG_MAX;
    rep(i, 0, k+1){
        ll fst = pref[2*i];
        ll lst = pref[n]-pref[n-(k-i)];
        // cout << fst << " " << lst << endl;
        s3 = min(s3, fst+lst);
    }
    
    cout << pref[n]-s3 << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
