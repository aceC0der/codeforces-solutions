/*
 * Problem   : 1828C - Counting Orders
 * Link      : https://codeforces.com/contest/1828/problem/C
 * Submission: https://codeforces.com/contest/1828/submission/206794164
 * Rating    : 1100   Tags: binary search, combinatorics, sortings
 * Verdict   : Accepted (202 ms, 8000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-22 (Practice)
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

const int mod = 1e9+7;

int binSearch(int x, vi& a){
    int l = 0, r = a.size()-1;
    int lbb = -1;
    while(l<=r){
        int mid = (l+r)/2;
        // cout << l << " " << r << " " << a[mid] << " " << lbb << " " << x << endl;
        if(a[mid]<=x){
            lbb = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return lbb;
}

void solve(){
    int n;
    cin >> n;
    vi a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    sort(all(a));
    sort(all(b));
    ll ans = 1;
    map<int, int> m;
    rep(i, 0, n){
        int lb = binSearch(b[i], a);
        // cout << b[i] << " " << lb << endl;
        m[b[i]] = n-lb-1;
    }
    // cout << "*****" << endl;
    int cnt = 0;
    pre(i, n-1, 0){
        // cout << b[i] << " " << m[b[i]]-cnt << endl;
        if(m[b[i]]>=cnt)
            ans = (ans%mod*(m[b[i]]-cnt)%mod)%mod, cnt++;
        else{
            ans *= 0; break;
        }
    }
    // cout << endl;
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
