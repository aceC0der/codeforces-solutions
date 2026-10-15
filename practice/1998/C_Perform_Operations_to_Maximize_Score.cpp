/*
 * Problem   : 1998C - Perform Operations to Maximize Score
 * Link      : https://codeforces.com/contest/1998/problem/C
 * Submission: https://codeforces.com/contest/1998/submission/281968490
 * Rating    : 1900   Tags: binary search, brute force, constructive algorithms, greedy, implementation
 * Verdict   : Accepted (217 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-20 (Practice)
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

void solve(){
    ll n, k;
    cin >> n >> k;

    vpi a(n);
    rep(i, 0, n) cin >> a[i].ff;
    rep(i, 0, n) cin >> a[i].ss;
    sort(all(a));
    int mid = (n)/2;
    ll ans = 0;

    // case 1 
    rep(i, 0, n){
        if(a[i].ss==1){
            int mc;
            if (i < n / 2) mc = a[n / 2].first;
            else mc = a[(n - 2) / 2].first;
            
            ans = max(ans, 0LL + a[i].first + k + mc);
        }
    }

    // case 2
    int lo = 0, hi = 2e9;
        while (lo != hi){
            int mid = (1LL + lo + hi) / 2;
            
            int z = 0;
            vector <int> smaller_list;
            for (int i = 0; i < n - 1; i++){
                if (a[i].first >= mid){
                    z++;
                } else if (a[i].second == 1){
                    smaller_list.push_back(mid - a[i].first); // list of numbers smaller than x but b[i] = 1 
                }
            }
            
            reverse(smaller_list.begin(), smaller_list.end()); // list will be sorted in ascending, but we want sorted in descending, as greedily changing largest elements 
            int kk = k;
            for (auto x : smaller_list) if (kk >= x){
                kk -= x;
                z++;
            }
            
            if (z >= (n + 1) / 2) lo = mid;
            else hi = mid - 1;
        }
        
        ans = max(ans, 0LL + a[n - 1].first + lo);

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
