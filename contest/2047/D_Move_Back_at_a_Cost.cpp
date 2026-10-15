/*
 * Problem   : 2047D - Move Back at a Cost
 * Link      : https://codeforces.com/contest/2047/problem/D
 * Submission: https://codeforces.com/contest/2047/submission/294572915
 * Rating    : 1600   Tags: binary search, data structures, greedy, sortings
 * Verdict   : Accepted (186 ms, 600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-03 (Contest)
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
    int n;
    cin >> n;
    vi arr(n);
    map<int, int> freq;
    rep(i, 0, n){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    int mn = INT_MAX;
    vi mnarr(n);
    pre(i, n-1, 0){
        mnarr[i] = mn;
        mn = min(arr[i], mn);
    }
    mn = INT_MAX;
    rep(i, 0, n){
        if(mnarr[i]<arr[i] || mn<arr[i]){
            arr[i]++;
            mn = min(mn, arr[i]);
        }
    }
    sort(all(arr));
    rep(i, 0, n) cout << arr[i] << " "; cout << endl;
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
