/*
 * Problem   : 1826C - Dreaming of Freedom
 * Link      : https://codeforces.com/contest/1826/problem/C
 * Submission: https://codeforces.com/contest/1826/submission/209578044
 * Rating    : 1300   Tags: greedy, math, number theory
 * Verdict   : Accepted (280 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-13 (Practice)
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
    int n, m;
    cin >> n >> m;
    int d = n;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            d = i;
            break;
        }
    }
    // cout << d << " " << m << endl;
    if(d>m || n==1)
        cout << "YES" << endl;
    else cout << "NO" << endl;
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
