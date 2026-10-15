/*
 * Problem   : 2051D - Counting Pairs
 * Link      : https://codeforces.com/contest/2051/problem/D
 * Submission: https://codeforces.com/contest/2051/submission/297887802
 * Rating    : 1200   Tags: binary search, sortings, two pointers
 * Verdict   : Accepted (156 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-22 (Contest)
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

int binSearch(int x, vi& arr){
    int n = arr.size();
    int l=0, r=n-1;
    int idx = -1;
    while (l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]<=x){
            idx = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return idx+1;
}

void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    map<int, int> freq;
    vi arr(n);
    int sum = 0;
    rep(i, 0, n){
        cin >> arr[i];
        sum += arr[i];
    }
    
    sort(all(arr));
    int ans = 0;
    int mn = arr[0];
    rep(i, 0, n){
        int rem = sum-arr[i];
        if(rem<=x) continue;
        int r=rem-x;
        int l = rem-y;
        if(rem<=0){
            l = 1;
        }
        int ttl = binSearch(r, arr)-binSearch(l-1, arr);
        if(l<=arr[i] && arr[i]<=r){
            ttl--;
        }
        ans+=ttl;
    }
    ans/=2;
    cout << ans << endl;

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
