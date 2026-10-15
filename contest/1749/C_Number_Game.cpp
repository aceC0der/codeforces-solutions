/*
 * Problem   : 1749C - Number Game
 * Link      : https://codeforces.com/contest/1749/problem/C
 * Submission: https://codeforces.com/contest/1749/submission/177191116
 * Rating    : 1400   Tags: binary search, data structures, games, greedy, implementation
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-20 (Contest)
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

bool isValid(int k, vi& a){
    int l=-1, r = a.size()-1;
    while(k){
        while(r>l && a[r]>k){
            r--;
        }
        if(r<=l) return false;
        r--;
        k--;
        l++;
    }
    return true;
}


void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    int l=0, r = n;
    int ans = 0;
    while(l<=r){
        int mid = (l+r)/2;
        // cout << l << " " << r << " " << mid << " " << isValid(mid, a) << endl;
        if(isValid(mid, a)){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout << ans << endl;
    // cout << isValid(1, a) << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
