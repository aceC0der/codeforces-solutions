/*
 * Problem   : 1675C - Detective Task
 * Link      : https://codeforces.com/contest/1675/problem/C
 * Submission: https://codeforces.com/contest/1675/submission/156020547
 * Rating    : 1100   Tags: implementation
 * Verdict   : Accepted (15 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-06 (Practice)
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
        string s;
        cin >> s;
        ll n = s.size();
        ll ans = 1;
        ll on = 0, zr = 0;
        if(s[0]=='0' || s[n-1]=='1') {
            ans = 1;
        }
        else{
            ll l1=0, f0=n-1;
            rep(i, 0, n){
                if(s[i]=='1') {
                    on++;
                    l1 = i;
                }
                else if(s[i]=='0') zr++;
            }
            if(zr==0){
                if(on==0) ans = n;
                else{
                    ans = n-l1;
                }
            }
            else{
                rep(i, 0, n){
                    if(s[i]=='0'){
                        f0 = i;
                        break;
                    }
                }
                if(on==0){
                    ans = f0+1;
                }
                else{
                    ans = f0-l1+1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
