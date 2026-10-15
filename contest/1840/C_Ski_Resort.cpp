/*
 * Problem   : 1840C - Ski Resort
 * Link      : https://codeforces.com/contest/1840/problem/C
 * Submission: https://codeforces.com/contest/1840/submission/208750723
 * Rating    : 1000   Tags: combinatorics, math, two pointers
 * Verdict   : Accepted (62 ms, 900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-06 (Contest)
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
    int n, k, q;
    cin >> n >> k >> q;
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    ll ans = 0;
    int xx = (k*(k-1))/2;
   rep(i, 0, n){
        ll cnt = 0;
        while(i<n && a[i]<=q){
            cnt++;i++;
        }

        if(cnt>=k) {
            cnt-=k-1;
            ans += ((cnt*(cnt+1))/2);
        }
    }
    cout << ans << endl;
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
