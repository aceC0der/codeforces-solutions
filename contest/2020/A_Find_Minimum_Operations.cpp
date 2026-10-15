/*
 * Problem   : 2020A - Find Minimum Operations
 * Link      : https://codeforces.com/contest/2020/problem/A
 * Submission: https://codeforces.com/contest/2020/submission/283562622
 * Rating    : 800   Tags: bitmasks, brute force, greedy, math, number theory
 * Verdict   : Accepted (46 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-29 (Contest)
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
    ll n, k;
    cin >> n >> k;
    if(k==1){
        cout << n << endl;
        return;
    }
    ll kk = 1;
    while(n>kk){
        kk*=k;
    }
    ll cnt = 0;
    while(n){
        // cout << n << " " << kk << endl;

        while(kk>n){
            kk/=k;
        }
        // cout << n << " " << kk << endl;
        if(n<k){
            cnt+=n;
            break;
        }
        n-=kk;
        cnt++;
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
