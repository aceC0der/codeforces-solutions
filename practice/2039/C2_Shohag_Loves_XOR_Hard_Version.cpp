/*
 * Problem   : 2039C2 - Shohag Loves XOR (Hard Version)
 * Link      : https://codeforces.com/contest/2039/problem/C2
 * Submission: https://codeforces.com/contest/2039/submission/293001533
 * Rating    : 1800   Tags: bitmasks, brute force, math, number theory
 * Verdict   : Accepted (171 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-24 (Practice)
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
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    if(n<m){
        rep(i, 1, n){
            int d = i^n;
            if(d%i==0 || d%n==0){
                cnt++;
            }
        }
        int x = ((m-n)/n)*n;
        x+=n;
        while(x<=(m+n)){
            // cout << (x^n) << " " << cnt << endl;
            if((x^n)<=m) cnt++;
            x+=n;
        }
        cnt+=((m-n)/n);
    }else{
        rep(i, 1, m+1){
            int d = i^n;
            if(d%n==0 || d%i==0){
                cnt++;
            }
        }
    }
    cout << cnt;
    cout << endl;
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
