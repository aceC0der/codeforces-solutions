/*
 * Problem   : 1692B - All Distinct
 * Link      : https://codeforces.com/contest/1692/problem/B
 * Submission: https://codeforces.com/contest/1692/submission/160721183
 * Rating    : 800   Tags: greedy, sortings
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-15 (Practice)
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
        int n;
        cin >> n;
        int x;
        set<int> s;
        rep(i, 0, n){
            cin >> x;
            s.insert(x);
        }
        int ss = s.size();
        if((n&1) == (ss&1)){
            cout << ss << endl;
        }
        else{
            cout << ss-1 << endl;
        }
    }
    return 0;
}
