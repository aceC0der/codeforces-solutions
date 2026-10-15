/*
 * Problem   : 1794C - Scoring Subsequences
 * Link      : https://codeforces.com/contest/1794/problem/C
 * Submission: https://codeforces.com/contest/1794/submission/205068055
 * Rating    : 1300   Tags: binary search, greedy, math, two pointers
 * Verdict   : Accepted (218 ms, 600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-08 (Practice)
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
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    int mx = 1;
    int cnt = 0;
    rep(i, 0, n){
        int l = 1, r = min(i+1, a[i]);
        int ans = 1;
        while(l<=r){
            int mid = (l+r)/2;
            int pos = i-mid+1;
            if(a[pos]>=mid){
                l = mid+1;
                ans = max(ans, mid);
            }
            else{
                r = mid-1;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
