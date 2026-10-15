/*
 * Problem   : 2008H - Sakurako's Test
 * Link      : https://codeforces.com/contest/2008/problem/H
 * Submission: https://codeforces.com/contest/2008/submission/282923196
 * Rating    : 2100   Tags: binary search, brute force, greedy, math, number theory
 * Verdict   : Accepted (124 ms, 1100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-25 (Practice)
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
    int n, q;
    cin >> n >> q;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    vi ans(n+1);
    vi pref(n+1);
    rep(i, 0, n) pref[a[i]]++;
    rep(i, 1, n+1) pref[i] += pref[i-1];
    rep(x, 2, n+1){
        int l = 0, r=x-1;
        int k = n/x;
        // cout << x << " : ";
        while(l<=r){
            int mid = (l+r)/2;
            int val = pref[mid];
            rep(j, 1, k+1){
                int p = (j*x)-1, q = j*x+mid;
                q = min(q, n);
                val+=(pref[q]-pref[p]);
            }
            if((val-1)>=(n/2)){
                ans[x] = mid;
                r = mid-1;
            }else l = mid+1;
        }
        // cout << ans[x] << " ";
    }
    // cout << endl;
    while(q--){
        int x;
        cin >> x;
        cout << ans[x] << " ";
        // vi pr(x);
        // rep(i, 0, n){
        //     pr[a[i]%x]++;
        // }
        // int hf=n/2;
        // bool f = true;
        // int ans = 0;
        // rep(i, 0, x){
        //     if(pr[i]){
        //         ans+=pr[i];
        //         if(f){
        //             ans--;
        //             f = false;
        //         }
        //     }
        //     if(ans>=hf){
        //         cout << i << " ";
        //         break;
        //     }
        // }
    }
    cout << endl;
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
