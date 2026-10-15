/*
 * Problem   : 1993B - Parity and Sum
 * Link      : https://codeforces.com/contest/1993/problem/B
 * Submission: https://codeforces.com/contest/1993/submission/275358025
 * Rating    : 1100   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (109 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-08-09 (Practice)
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
    sort(all(a));
    ll even_sum=0, mxe=-1, mxo=-1;
    int cnt=0;
    pre(i, n-1, 0){
        if(a[i]&1){
            if(mxo==-1) mxo=a[i];
        }
        else{
            cnt++;
            if(mxe==-1) {mxe=a[i];continue;}
        }
    }
    if(mxe==-1 || mxo==-1) {
        cout << 0 << endl;
        return;
    }
    even_sum+=mxo;
    rep(i, 0, n){
        if(a[i]%2==0){
            if(even_sum<a[i]) {
                cnt++;
                break;
            }
            even_sum+=a[i];
        }
    }
    // if(even_sum<mxe) cnt++;
    cout << cnt << endl;
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
