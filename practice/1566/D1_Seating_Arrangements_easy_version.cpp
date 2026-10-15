/*
 * Problem   : 1566D1 - Seating Arrangements (easy version) 
 * Link      : https://codeforces.com/contest/1566/problem/D1
 * Submission: https://codeforces.com/contest/1566/submission/264772510
 * Rating    : 1100   Tags: data structures, greedy, sortings
 * Verdict   : Accepted (61 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-09 (Practice)
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
    int n, m;
    cin >> n >> m;
    vi a(m);
    rep(i, 0, m) cin >> a[i];
    vector<int> st;
    int ans = 0;
    
    rep(i, 0, m){
        int cnt = 0;
        for(auto it: st){
            if(it<a[i]) cnt++;
            // else break;
        }
        // cout << cnt << " ";
        ans+=cnt;
        st.pb(a[i]);
    }
    // cout << endl;
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
