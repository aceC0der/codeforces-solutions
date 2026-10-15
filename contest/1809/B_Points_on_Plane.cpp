/*
 * Problem   : 1809B - Points on Plane
 * Link      : https://codeforces.com/contest/1809/problem/B
 * Submission: https://codeforces.com/contest/1809/submission/198796495
 * Rating    : 1000   Tags: binary search, greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-23 (Contest)
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

ll odd(ll x){
    return 1+x*x*4+x*4;
}

ll even(ll x){
    return x*(x-1)*4 + x*4;
}



ll bin_search(ll n){
    ll l = 0, r = 1e9;
    ll ans = -1;
    while(l<=r){
        ll mid = l + (r-l)/2;
        if(odd(mid)>=n){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return ans;
}

ll bin_search_2(ll n){
    ll l = 0, r = 1e9;
    ll ans = -1;
    while(l<=r){
        ll mid = l + (r-l)/2;
        // cout << l << " " << r << "**" << endl;
        if(even(mid)>=n){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return ans;
}


void solve(){
    ll n;
    cin >> n;
    cout << min(bin_search(n)*2,bin_search_2(n)*2-1) << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
