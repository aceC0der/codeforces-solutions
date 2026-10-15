/*
 * Problem   : 1702F - Equate Multisets
 * Link      : https://codeforces.com/contest/1702/problem/F
 * Submission: https://codeforces.com/contest/1702/submission/163598984
 * Rating    : 1700   Tags: constructive algorithms, data structures, greedy, math, number theory
 * Verdict   : Accepted (748 ms, 46300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-11 (Practice)
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
        map<int, int> a;
        rep(i, 0, n){
            int x;
            cin >> x;
            while(x%2==0){
                x/=2;
            }
            // cout << x << " " ;
            a[x]++;
        }
        // cout << endl;
        bool f = true;
        rep(i, 0, n){
            int x;
            cin >> x;
            while(a[x]==0 && x ){
                x/=2;
            }
            if(a[x]>0) a[x]--;
            else{
                f = false;
                // break;
            }
            // cout << x << " " ;
        }
        // cout << endl;
        cout << (f ?  "YES" : "NO") << endl;
    }
    return 0;
}
