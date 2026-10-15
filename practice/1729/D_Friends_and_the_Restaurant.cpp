/*
 * Problem   : 1729D - Friends and the Restaurant
 * Link      : https://codeforces.com/contest/1729/problem/D
 * Submission: https://codeforces.com/contest/1729/submission/171951127
 * Rating    : 1200   Tags: greedy, sortings, two pointers
 * Verdict   : Accepted (77 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-12 (Practice)
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
    vi x(n), yy(n);
    rep(i, 0, n) cin >> x[i];
    rep(i, 0, n) cin >> yy[i];
    vi diff(n);
    rep(i, 0, n){
        diff[i]=( yy[i]-x[i]);
    }
    sort(all(diff));
    int ans = 0;
    int i=0, j=n-1;
    while(i<j){
        if(diff[i]+diff[j]>=0){
            ans++;
            i++;
            j--;
        }
        else{
            i++;
        }
    }
    
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
