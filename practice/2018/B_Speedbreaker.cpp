/*
 * Problem   : 2018B - Speedbreaker
 * Link      : https://codeforces.com/contest/2018/problem/B
 * Submission: https://codeforces.com/contest/2018/submission/283317515
 * Rating    : 1900   Tags: binary search, data structures, dp, greedy, implementation, two pointers
 * Verdict   : Accepted (93 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-28 (Practice)
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
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    vi diff(n+1);
    vi left(n), right(n);
    left[0] = a[0];
    right[n-1] = a[n-1];
    int f = false;
    int i=0, j=n-1;
    int x = n;
    while(i<j){
        // cout << a[i] << " " << a[j] << " " << x << endl;
        if(a[i]<x && a[j]<x){
            cout << 0 << endl;
            return;
        }
        if(a[i]>=x){
            i++;
        }
        else{
            j--;
        }
        x--;
    }
    rep(i, 1, n){
        left[i] = min(left[i-1]-1, a[i]);
    }
    pre(i, n-2, 0){
        right[i] = min(right[i+1]-1, a[i]);
    }
    // cout << endl;
    // rep(i, 0, n) cout << left[i] << " "; cout << endl;
    // rep(i, 0, n) cout << right[i] << " "; cout << endl;
    // cout << endl;
    rep(i, 0, n){
        int mn = max(0, i-a[i]+1);
        int mx = min(n, i+a[i]);
        diff[mn]++;
        diff[mx]--;
        // if(left[i]>0){
        //     int v = min(n, i+left[i]);
        //     diff[i]++;
        //     diff[v]--;
        // }
        // if(right[i]>0){
        //     int v = max(0, i-right[i]+1);
        //     diff[v]++;
        //     diff[i+1]--;
        // }
    }
    rep(i, 1, n+1){
        diff[i]+=diff[i-1];
    }
    // rep(i, 0, n) cout << diff[i] << " " ; cout << endl;
    int cnt = 0;
    rep(i, 0, n){
        if(diff[i]>=n) {
            // cout << i << " " << a[i] << endl;
            cnt++;
        }
    }
    cout << cnt << endl;
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
