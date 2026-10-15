/*
 * Problem   : 1670C - Where is the Pizza?
 * Link      : https://codeforces.com/contest/1670/problem/C
 * Submission: https://codeforces.com/contest/1670/submission/156276932
 * Rating    : 1400   Tags: data structures, dfs and similar, dsu, graphs, implementation, math
 * Verdict   : Accepted (78 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-08 (Practice)
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

const int mod = (int)1e9+7;

int main()
{
    fios
    TestCases{
        int n;
        cin >> n;
        vi a(n+1);
        vi temp(n);
        vi d(n+1);
        rep(i, 0, n){
            cin >> temp[i];
        }
        rep(i, 0, n){
            cin >> a[temp[i]];
        }
        rep(i, 0, n){
            cin >> d[temp[i]];
        }
        // dbg(a);
        // dbg(d);
        int res = 1;
        rep(i, 1, n+1){
            int j = a[i];
            if(d[j]==-1) continue;
            if(i==j) d[i] = i;
            if(d[i]!=0){
                while(j!=i){
                    j = a[j];
                    d[j]=-1;
                }
            }
        }
        rep(i, 1, n+1){
            int j = a[i];
            if(d[j]==-1) continue;
            else if(d[i]==0){
                res = (res%mod * 2%mod)%mod;
                while(j!=i){
                    j = a[j];
                    d[j] = -1;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
