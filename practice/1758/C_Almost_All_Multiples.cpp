/*
 * Problem   : 1758C - Almost All Multiples
 * Link      : https://codeforces.com/contest/1758/problem/C
 * Submission: https://codeforces.com/contest/1758/submission/182624257
 * Rating    : 1400   Tags: greedy, number theory
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-26 (Practice)
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
    vi ans(n);
    rep(i, 0, n) ans[i] = i+1;
    if(n%x==0){
        ans[0] = x;
        ans[n-1] = 1;
        int p = x;
        if(x!=n) ans[x-1] = n;
        rep(i, x+1, n){
            if(n%i==0){
                if(i%p==0){
                    swap(ans[p-1], ans[i-1]);
                    p = i;
                }
            }
        }
        rep(i, 0, n) cout << ans[i] << ' ' ; cout << endl;
        // rep(i, 0, n) cout << i+1 << " "; cout << endl;
    }
    else{
        cout << -1 << endl;
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
