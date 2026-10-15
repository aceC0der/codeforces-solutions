/*
 * Problem   : 2013D - Minimize the Difference
 * Link      : https://codeforces.com/contest/2013/problem/D
 * Submission: https://codeforces.com/contest/2013/submission/282401235
 * Rating    : 1900   Tags: binary search, greedy
 * Verdict   : Accepted (765 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-22 (Practice)
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

bool isValidMax(ll mx, vl arr){
    int n = arr.size();
    rep(i, 0, n-1){
        if(arr[i]>mx){
            arr[i+1]+=(arr[i]-mx);
        }
    }
    return (arr[n-1]<=mx);
}

bool isValidMin(ll mn, vl arr){
    int n = arr.size();
    ll mnn = LLONG_MAX;
    rep(i, 0, n-1){
        if(arr[i]>mn){
            arr[i+1]+=(arr[i]-mn);
        }
        mnn = min(mnn, arr[i]);
    }
    mnn = min(arr[n-1], mnn);
    return (mnn>=mn);
}

void solve(){
    ll n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    ll mx = 0, mn = LLONG_MAX;
    ll amx = *max_element(all(a)), amn = *min_element(all(a));
    ll l=amn, h=amx;
    while(l<=h){
        ll mid = (l+h)/2;
        if(isValidMax(mid, a)){
            mx = mid;
            h = mid-1;
        }else l = mid+1;
    }
    // cout << mx << "******" << endl;
    l = amn, h=amx;
    while(l<=h){
        ll mid = (l+h)/2;
        if(isValidMin(mid, a)){
            mn = mid;
            l = mid+1;
        }else h = mid-1;
    }
    // cout << mn << "*****" << endl;
    // cout << endl;
    cout << mx-mn << endl;
    
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
