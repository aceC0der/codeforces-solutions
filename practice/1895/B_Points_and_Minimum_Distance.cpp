/*
 * Problem   : 1895B - Points and Minimum Distance
 * Link      : https://codeforces.com/contest/1895/problem/B
 * Submission: https://codeforces.com/contest/1895/submission/263055896
 * Rating    : 800   Tags: greedy, math, sortings
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-29 (Practice)
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
    n*=2;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    int i=0;
    int j=n/2;
    vpi ans;
    int cost = 0;
    while(j<n){
        ans.pb({a[i], a[j]});
        // cout << i << "**** " << j << endl;
        if(i>0){
            cost += a[i]-a[i-1] + a[j]-a[j-1];
        }
        i++;j++;
    }
    cout << cost << endl;
    for(auto p: ans){
        cout << p.ff << " " << p.ss << endl;
    }
    
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
