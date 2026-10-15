/*
 * Problem   : 1744F - MEX vs MED
 * Link      : https://codeforces.com/contest/1744/problem/F
 * Submission: https://codeforces.com/contest/1744/submission/178320155
 * Rating    : 2000   Tags: math, two pointers
 * Verdict   : Accepted (62 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-29 (Practice)
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
    vi pos(n);
    rep(i, 0, n){
        int x;
        cin >> x;
        pos[x] = i;
    }
    int mex = 0;
    int l=pos[0],r = l; 
    ll ans = 1;
    rep(i, 2, n+1){
        if(i&1){
            mex++;
            if(pos[mex]<l) l = pos[mex];
            else if(pos[mex]>r) r = pos[mex];
        }
        int len = r-l+1;
        if(len>i) continue;
        int nl, nr;
        int left = l, right = n-1-r;
        int rem = i-len;
        nl = left-rem;
        nl = max(0, nl);
        nr = nl+i-1;
        int mnr = min(n-1, l+i-1);
        // cout << nl << " " << nr << endl;
        int add = mnr-nr+1;
        // cout << add+1 << endl;
        ans += add;
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
