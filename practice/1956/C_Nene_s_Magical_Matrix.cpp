/*
 * Problem   : 1956C - Nene's Magical Matrix
 * Link      : https://codeforces.com/contest/1956/problem/C
 * Submission: https://codeforces.com/contest/1956/submission/264391797
 * Rating    : 1600   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (139 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-06 (Practice)
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
    int sum = 0;
    int x = 1;
    rep(i, 0, n){
        sum += (x*(i+1));
        x+=2;
    }
    cout << sum << " " << 2*n << endl;
    int j = n;
    pre(i, n-1, 0){
        cout << "1 " << i+1 << " ";
        rep(k, 0, n) cout << k+1 << " "; cout << endl;
        cout << "2 " << j << " ";
        rep(k, 0, n) cout << k+1 << " "; cout << endl;
        j--;
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
