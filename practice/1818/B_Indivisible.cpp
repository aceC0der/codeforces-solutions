/*
 * Problem   : 1818B - Indivisible
 * Link      : https://codeforces.com/contest/1818/problem/B
 * Submission: https://codeforces.com/contest/1818/submission/204346084
 * Rating    : 900   Tags: constructive algorithms
 * Verdict   : Accepted (0 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-03 (Practice)
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
    if(n&1 && n>1){
        cout << -1 << endl;
        return;
    }
    else{
        if(n==1) {cout << 1 << endl; return;}
        int i=1, j = 2;
        rep(k, 0, n){
            if(k&1){
                cout << i << " ";
                i+=2;
            }
            else{
                cout << j << " ";
                j+=2;
            }
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
