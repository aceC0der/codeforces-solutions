/*
 * Problem   : 2028B - Alice's Adventures in Permuting
 * Link      : https://codeforces.com/contest/2028/problem/B
 * Submission: https://codeforces.com/contest/2028/submission/293510504
 * Rating    : 1400   Tags: binary search, implementation, math
 * Verdict   : Accepted (202 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-27 (Practice)
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
    int n, b, c;
    cin >> n >> b >> c;
    if(b==0){
        if(n>c+2){
            cout << -1 << endl;
            return;
        }
        if(n>=c+1){
            cout << n-1 << endl;
            return;
        }
        cout << n << endl;
        return;
    }
    if(c>=n){
        cout << n << endl;
        return;
    }
    int ans = ((n)-c)/b;
    int val = ans*b+c;
    while(val>=n){
        ans--;
        val = ans*b+c;
    }
    ans++;
    n-=ans;
    cout << n << endl;

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
