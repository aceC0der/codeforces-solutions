/*
 * Problem   : 1838B - Minimize Permutation Subarrays
 * Link      : https://codeforces.com/contest/1838/problem/B
 * Submission: https://codeforces.com/contest/1838/submission/208462838
 * Rating    : 1100   Tags: constructive algorithms, math
 * Verdict   : Accepted (61 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-04 (Contest)
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
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    int mx_pos;
    int mn_pos;
    int t_pos;
    rep(i, 0,n){
        if(a[i]==n){
            mx_pos = i+1;
        }
        else if(a[i]==1) mn_pos = i+1;
        else if(a[i]==2) t_pos = i+1;
    }
    if(mx_pos>mn_pos && mx_pos>t_pos){
        cout << mx_pos << " " << max(mn_pos, t_pos) << endl;
    }
    else if(mx_pos<mn_pos && mx_pos<t_pos){
        cout << mx_pos << " " << min(mn_pos, t_pos) << endl;
    }
    else {
        cout << mx_pos << " " << mx_pos << endl;
    }
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
