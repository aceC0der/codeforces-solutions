/*
 * Problem   : 1702C - Train and Queries
 * Link      : https://codeforces.com/contest/1702/problem/C
 * Submission: https://codeforces.com/contest/1702/submission/163593068
 * Rating    : 1100   Tags: data structures, greedy
 * Verdict   : Accepted (608 ms, 12700 KB)
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
        int n, k;
        cin >> n >>k;
        // set<int> st;
        map<int, int> first;
        map<int, int> last;
        rep(i, 0, n){
            int x;
            cin >> x;
            if(first.find(x)==first.end()){
                first[x] = i;
            }
            last[x] = i;
        }
        while(k--){
            int x, y;
            cin >> x >> y;
            if(first.find(x)==first.end() || last.find(y)==last.end()){
                cout << "NO" << endl;
                continue;
            }
            x = first[x];
            y = last[y];
            // if(x>y) swap(x, y);
            cout << (x<=y ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
