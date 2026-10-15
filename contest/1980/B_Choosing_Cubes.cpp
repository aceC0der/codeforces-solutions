/*
 * Problem   : 1980B - Choosing Cubes
 * Link      : https://codeforces.com/contest/1980/problem/B
 * Submission: https://codeforces.com/contest/1980/submission/263918108
 * Rating    : 800   Tags: sortings
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-03 (Contest)
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
    int n, f, k;
    cin >> n >> f >> k;
    f--;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    int val = a[f];
    sort(all(a), greater<int>());
    int l=-1, r=0;
    rep(i, 0, n){
        if(a[i]==val){
            if(l==-1) l = i+1;
            r=i+1;
        }
    }
    if(l>k){
        cout << "NO" << endl;
    }
    else if(r<=k) cout << "YES" << endl;
    else cout << "MAYBE" << endl;
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
