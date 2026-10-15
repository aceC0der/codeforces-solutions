/*
 * Problem   : 1754C2 - Make Nonzero Sum (hard version)
 * Link      : https://codeforces.com/contest/1754/problem/C2
 * Submission: https://codeforces.com/contest/1754/submission/177857197
 * Rating    : 1500   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (77 ms, 3900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-25 (Practice)
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
    vpi ans;
    
    int on=0;
    int mn = 0;
    rep(i, 0, n){
        if(a[i]==1) on++;
        else if(a[i]==-1) mn++;
    }
    int l,r;
    l = 0;
    // cout << on << " --- " << mn << endl;
    if((on+mn)&1){
        cout << -1 << endl;
        return;
    }
    rep(i, 0, n){
        if(on==mn) ans.pb({i+1, i+1});
        else if(on>mn){
            if(i+1<n && a[i+1]==1) ans.pb({i+1, i+2}), on--, mn++, i++;
            else ans.pb({i+1, i+1});
        }
        else{
            if(i+1<n && a[i+1]==-1) ans.pb({i+1, i+2}), on++, mn--, i++;
            else ans.pb({i+1, i+1});
        }
        // cout << on << " --- " << mn << endl;
    }
    cout << ans.size() << endl;
    rep(i, 0, ans.size()){
        cout << ans[i].ff << " " << ans[i].ss << endl;
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
