/*
 * Problem   : 2048D - Kevin and Competition Memories
 * Link      : https://codeforces.com/contest/2048/problem/D
 * Submission: https://codeforces.com/contest/2048/submission/297309601
 * Rating    : 1600   Tags: binary search, brute force, data structures, greedy, sortings, two pointers
 * Verdict   : Accepted (327 ms, 3500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-19 (Contest)
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
#define int ll

int binSearch(int x, vi& a){
    int l=0, r=a.size()-1;
    int ans = 0;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]<x){
            l = mid+1;
            ans = mid;
        }else r = mid-1;
    }
    ans = a.size()-ans;
    return ans;
}

void solve(){
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) cin >> b[i];
    int k = a[0];
    sort(all(a));
    vi test(m);
    rep(i, 0, m){
        if(b[i]<=k || b[i]>a[n-1]){
            test[i] = 1;
        }
        else{
            test[i] = binSearch(b[i], a);
        }
    }
    // rep(i, 0, m) cout << test[i] << " * "; cout << endl;
    sort(all(test));
    rep(j, 1, m+1){
        int st = j-1;
        int ans = 0;
        while(st<m){
            ans += test[st];
            st+=j;
        }
        cout << ans << " ";
    }
    cout << endl;
    

}

int32_t main()
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
