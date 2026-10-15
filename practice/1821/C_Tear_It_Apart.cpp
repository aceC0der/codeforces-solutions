/*
 * Problem   : 1821C - Tear It Apart
 * Link      : https://codeforces.com/contest/1821/problem/C
 * Submission: https://codeforces.com/contest/1821/submission/202889412
 * Rating    : 1300   Tags: brute force, implementation, math, strings
 * Verdict   : Accepted (31 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-20 (Practice)
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
    string s;
    cin >> s;
    int n = s.size();
    int mn = INT_MAX;
    rep(i, 0, 26){
        int pv = -2;
        int mx = -1;
        // cout << (char)('a'+i) << ": ";
        rep(j, 0, n){
            if(s[j]==('a'+i)){
                // cout << j << " " ;
                if(pv==-2){
                    pv = j;
                    mx = 0;
                }
                else{
                    mx = max(j-pv-1, mx);
                    // cout << mx << endl;
                    pv = j;
                }
            }
            else if(j==0){
                pv = -1;
                mx = 0;
            }
            else if(j==n-1){
                mx = max(j-pv, mx);
                // cout << mx << endl;
                pv = j;
            }
        }
        // cout << endl;
        if(mx==-1) continue;
        // cout << (char)('a'+i) << ": " <<  mx  << "***" << endl;
        pre(i, 31, 0){
            if(CheckBit(mx, i)) {
                mx = i+1;
                break;
            }
        }
        mn = min(mx, mn);
        // cout << mn << "***" << endl;
    }
    cout << mn << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
