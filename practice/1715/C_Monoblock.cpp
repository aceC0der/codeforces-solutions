/*
 * Problem   : 1715C - Monoblock
 * Link      : https://codeforces.com/contest/1715/problem/C
 * Submission: https://codeforces.com/contest/1715/submission/169191249
 * Rating    : 1700   Tags: combinatorics, data structures, implementation, math
 * Verdict   : Accepted (155 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-21 (Practice)
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
    int n, m;
    cin >> n >> m;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    ll ans = 0;
    ll cnt = 1;
    rep(i, 1, n+1){
        ans += cnt;
        cnt += i+1;
    }
    // cout << ans << endl;
    cnt = 1;
    pre(i, n-2, 0){
        if(a[i]==a[i+1]){
            // cout << cnt << " " << i+1 << endl;
            ans-= (cnt*(i+1));
        }
        cnt++;
    }
    // cout << ans << endl;
    while(m--){
        ll p, x;
        cin >> p >> x;
        p--;
        // cout << p << " " << x << endl;
        if(p+1<n){
            if(a[p]==a[p+1] && x!=a[p+1]){
                ans += (n-p-1)*(p+1);
            }
            else if(a[p]!=a[p+1] && x==a[p+1]){
                ans -= (n-p-1)*(p+1);
            }
        }
        if(p-1>=0){
            // cout << "*" << endl;
            if(a[p]==a[p-1] && x!=a[p-1]){
                ans += (n-p)*(p);
            }
            else if(a[p]!=a[p-1] && x==a[p-1]){
                // cout <<"**" << endl;
                ans -= (n-p)*(p);
            }
        }
        a[p] = x;
        cout << ans << endl;
    }
}

int main()
{
    fios
    solve();
    return 0;
}
