/*
 * Problem   : 1708A - Difference Operations
 * Link      : https://codeforces.com/contest/1708/problem/A
 * Submission: https://codeforces.com/contest/1708/submission/164465833
 * Rating    : 800   Tags: greedy, math
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-16 (Contest)
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
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        bool f = true;
        rep(i, 1, n){
            if(a[i]%a[0]!=0){
                cout << "NO" << endl;
                f = false;
                break;
            }
        }
        if(f) cout << "YES" << endl;
    }
    return 0;
}
