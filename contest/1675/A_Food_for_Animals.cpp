/*
 * Problem   : 1675A - Food for Animals
 * Link      : https://codeforces.com/contest/1675/problem/A
 * Submission: https://codeforces.com/contest/1675/submission/155935513
 * Rating    : 800   Tags: greedy, math
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-05 (Contest)
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


int main()
{
    fios
    TestCases{
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        ll ls = 0;
        if(x>a){
            ls += (x-a);
        }
        if(y>b){
            ls += (y-b);
        }
        if(ls<=c){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
