/*
 * Problem   : 1762B - Make Array Good
 * Link      : https://codeforces.com/contest/1762/problem/B
 * Submission: https://codeforces.com/contest/1762/submission/185324049
 * Rating    : 1100   Tags: constructive algorithms, implementation, number theory, sortings
 * Verdict   : Accepted (77 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-15 (Contest)
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
    vpi p(n);
    rep(i, 0, n){
        cin >> p[i].ff;
        p[i].ss = i;
    }
    sort(all(p));
    rep(i, 0, n-1){
        // cout << p[i].ff << " " << p[i].ss << endl;
        if(p[i+1].ff%p[i].ff==0) continue;
        int x = (p[i].ff-(p[i+1].ff%p[i].ff));
        a[p[i+1].ss] = x;
        p[i+1].ff+=x;
    }
    // rep(i, 0, n){
    //     swap(p[i].ff, p[i].ss);
    // }
    // sort(all(p));
    cout << n << endl;
    rep(i, 0, n){
        cout << i+1 << " " << a[i] << endl;
    }
    // cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
