/*
 * Problem   : 1744D - Divisibility by 2^n
 * Link      : https://codeforces.com/contest/1744/problem/D
 * Submission: https://codeforces.com/contest/1744/submission/178233922
 * Rating    : 1200   Tags: greedy, math, sortings
 * Verdict   : Accepted (77 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-28 (Practice)
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
    int ttl, crnt;
    ttl = crnt = 0;
    vi tn(n);
    int x;
    rep(i, 0, n) {
        cin >> x;
        while(x%2==0){
            ttl++;
            crnt++;
            x/=2;
        }
        int idx = i+1;
        int cnt =0 ;
        while(idx%2==0){
            ttl++;
            cnt++;
            idx/=2;
        }
        tn[i] = cnt;
    }
    sort(all(tn), greater<int>());
    if(ttl<n){
        cout << -1 << endl;
        return ;
    }
    int ans = 0;
    // rep(i, 0, n) cout << tn[i] << " "; cout << endl;
    while(crnt<n){
        crnt+=tn[ans];
        ans++;
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
