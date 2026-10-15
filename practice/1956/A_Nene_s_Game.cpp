/*
 * Problem   : 1956A - Nene's Game
 * Link      : https://codeforces.com/contest/1956/problem/A
 * Submission: https://codeforces.com/contest/1956/submission/264375356
 * Rating    : 800   Tags: binary search, brute force, data structures, games, greedy
 * Verdict   : Accepted (61 ms, 0 KB)
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
    int k, q;
    cin >> k >> q;
    vi a(k), n(q);
    rep(i, 0, k) cin >> a[i];
    rep(i, 0, q) cin >> n[i];
    int j=0;
    rep(j, 0, q){
        int num = n[j];
        int i=k-1;
        while(i>=0){
            if(num>=a[i]){
                num-=(i+1);
            }
            else i--;
        }
        cout << num << " ";
    }
    cout << endl;
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
