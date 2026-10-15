/*
 * Problem   : 1144B - Parity Alternated Deletions
 * Link      : https://codeforces.com/contest/1144/problem/B
 * Submission: https://codeforces.com/contest/1144/submission/162971051
 * Rating    : 900   Tags: greedy, implementation, sortings
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-06 (Practice)
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


int main()
{
    fios
    int n;
    cin >> n;
    int odd , even;
    odd = even = 0;
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
        if(a[i]&1) odd++;
        else even++;
    }
    bool f = false;
    if(odd>even){
        f = true;
    }
    int dif = abs(odd-even)-1;
    int i = 0;
    ll ans = 0;
    sort(all(a));
    while(dif>0 && i<n){
        if(f && (a[i]&1)){
            ans += a[i];
            dif--;
        }
        else if(!f && !(a[i]&1)){
            ans += a[i];
            dif--;
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}
