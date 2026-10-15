/*
 * Problem   : 1798D - Shocking Arrangement
 * Link      : https://codeforces.com/contest/1798/problem/D
 * Submission: https://codeforces.com/contest/1798/submission/203581996
 * Rating    : 1600   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (249 ms, 7000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-26 (Practice)
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
    ll n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    ll mx = *max_element(all(a));
    ll mn = *min_element(all(a));
    ll tr = mx-mn;
    ll sum = 0;
    vi ans;
    vi pos, neg;
    int cnt = 0;
    rep(i, 0, n){
        if(a[i]>0) pos.pb(a[i]);
        else if(a[i]<0) neg.pb(a[i]);
        else cnt++;
    }
    if(cnt==n){
        cout << "No" << endl;
        return;
    }
    n-=cnt;
    while(cnt--) ans.pb(0);
    // int sum = 0;
    int j, k;
    j = k = 0;
    // rep(i, 0, pos.size()) cout << pos[i] << " "; cout << endl;
    // rep(i, 0, neg.size()) cout<< neg[i] << " "; cout << endl;
    rep(i, 0, n){
        if(sum<=0){
            ans.pb(pos.back());
            pos.pop_back();
        }
        else{
            ans.pb(neg.back());
            neg.pop_back();
        }
        sum+=ans.back();
    }
    cout << "Yes" << endl;
    rep(i, 0, ans.size()){
        cout << ans[i] << " ";
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
