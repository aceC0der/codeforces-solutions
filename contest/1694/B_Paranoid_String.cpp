/*
 * Problem   : 1694B - Paranoid String
 * Link      : https://codeforces.com/contest/1694/problem/B
 * Submission: https://codeforces.com/contest/1694/submission/160850956
 * Rating    : 1200   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (15 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-16 (Contest)
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
        string s;
        cin >> s;
        ll ans = n;
        pre(i, n-1, 1){
            if(s[i]=='1'){
                if(s[i-1]=='0'){
                    ans += i;
                }
            }
            else{
                if(s[i-1]=='1'){
                    ans += i;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
