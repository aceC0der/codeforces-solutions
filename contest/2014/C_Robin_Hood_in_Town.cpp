/*
 * Problem   : 2014C - Robin Hood in Town
 * Link      : https://codeforces.com/contest/2014/problem/C
 * Submission: https://codeforces.com/contest/2014/submission/282278748
 * Rating    : 1100   Tags: binary search, greedy, math
 * Verdict   : Accepted (124 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-21 (Contest)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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

bool isValid(ll val, ll sum, vl& a){
    int n = a.size();
    val += sum;
    ll th = val/(2*n) + (val%(2*n)!=0);
    int cnt = 0;
    rep(i, 0, n){
        if(a[i]<th) cnt++;
    }
    n/=2;
    return (cnt>n);
}

void solve(){
    int n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    ll sum = 0;
    rep(i, 0, n) sum+=a[i];
    ll l=0, h = 1e18;
    ll ans = 0;
    if(n<=2){
        cout << -1 << endl;
        return;
    }
    while(l<=h){
        ll mid = (l+h)/2;
        if(isValid(mid, sum, a)){
            // cout << mid << endl;
            h = mid-1;
            ans = mid;
        }else{
            // cout << mid << "***" << endl;
            l = mid+1;
        }
    }
    cout << ans << endl;
    
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
