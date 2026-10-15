/*
 * Problem   : 2019A - Max Plus Size
 * Link      : https://codeforces.com/contest/2019/problem/A
 * Submission: https://codeforces.com/contest/2019/submission/283183910
 * Rating    : 800   Tags: brute force, dp, greedy
 * Verdict   : Accepted (77 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-27 (Contest)
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
    int sum = 0;
    int s1 = 0;
    int s2 = 0;
    rep(i, 0, n){
        sum += a[i];
        if(i&1) s1=max(a[i], s1);
        else s2= max(a[i], s2);
    }
    int hf = n/2;
    int hf2 = n-hf;
    cout << max(s1+hf, s2+hf2) << endl;
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
