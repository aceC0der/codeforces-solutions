/*
 * Problem   : 1729A - Two Elevators
 * Link      : https://codeforces.com/contest/1729/problem/A
 * Submission: https://codeforces.com/contest/1729/submission/171836633
 * Rating    : 800   Tags: math
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-12 (Contest)
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
    int a, b, c;
    cin >> a >> b >> c;
    int at, bt;
    at = abs(a-1);
    bt = abs(b-c)+(c-1);
    if(at==bt){
        cout << 3 << endl;
    }
    else if(at<bt){
        cout << 1 << endl;
    }
    else {
        cout << 2 << endl;
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
