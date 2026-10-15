/*
 * Problem   : 2026C - Action Figures
 * Link      : https://codeforces.com/contest/2026/problem/C
 * Submission: https://codeforces.com/contest/2026/submission/288595879
 * Rating    : 1500   Tags: binary search, brute force, constructive algorithms, data structures, greedy, implementation
 * Verdict   : Accepted (62 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-28 (Contest)
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

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vb arr(n+1);
    rep(i, 0, n){
        arr[i+1] = (s[i]=='1');
    }
    vb vis(n+1);
    int j=n;
    int i=j-1;

    int sum = 0;
    while(j>i && !arr[j]) j--;
    i = j-1;
    while(i>0 && arr[i]) i--;
    while(i>0 && j>0 && i<j){
        // cout << i << " " << j << endl;
        sum += j;
        i--;
        j--;
        while(j>0 && !arr[j]) j--;
        if(i>=j) i=j-1;
        while(i>0 && arr[i]) i--;
    }
    i = 1;
    while(i<=n && !arr[i]) i++;
    // cout << endl;
    while(i<=n && j>=1 && i<j){
        // cout << i << " " << j << endl;
        sum += j;
        i++;
        j--;
        while(i<=n && !arr[i]) i++;
        while(!arr[j]) j--;
    }
    int ttl = 0;
    for(int i=1; i<=n; i++) ttl+=i;
    cout << ttl-sum << endl;
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
