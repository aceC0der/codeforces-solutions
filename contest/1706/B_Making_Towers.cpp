/*
 * Problem   : 1706B - Making Towers
 * Link      : https://codeforces.com/contest/1706/problem/B
 * Submission: https://codeforces.com/contest/1706/submission/164753240
 * Rating    : 1100   Tags: dp, greedy, math
 * Verdict   : Accepted (93 ms, 1300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-18 (Contest)
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
            a[i]--;
        }
        vi ans(n, 0);
        vi pos(n, -1);
        rep(i, 0, n){
            if(pos[a[i]]==-1){
                pos[a[i]]=i;
                ans[a[i]]++;
            }
            else{
                int dif = i-pos[a[i]]-1;
                // cout << a[i] << " " << pos[a[i]]  << " " << dif << endl;
                if(dif%2==0){
                    ans[a[i]]++;
                    pos[a[i]] = i;
                }
            }
        }
        rep(i, 0, n){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
