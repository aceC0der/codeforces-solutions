/*
 * Problem   : 1712B - Woeful Permutation
 * Link      : https://codeforces.com/contest/1712/problem/B
 * Submission: https://codeforces.com/contest/1712/submission/168120484
 * Rating    : 800   Tags: constructive algorithms, greedy, number theory
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-13 (Contest)
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
    if(n%2){
        cout << 1 << " ";
        for(int i=2; i<=n; i+=2){
            cout << i+1 << " " << i << " ";
        }
        cout << endl;
    }
    else{
        for(int i=1; i<=n; i+=2){
            cout << i+1 << " " << i << " ";
        }
        cout << endl;
    }
}


int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
