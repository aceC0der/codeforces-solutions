/*
 * Problem   : 1706C - Qpwoeirut And The City
 * Link      : https://codeforces.com/contest/1706/problem/C
 * Submission: https://codeforces.com/contest/1706/submission/164807957
 * Rating    : 1400   Tags: dp, flows, greedy, implementation
 * Verdict   : Accepted (62 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-19 (Practice)
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
        ll n;
        cin >> n;
        vl a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        ll ans = 0;

        if(n%2==0){
            ll cnt=n-2;
            cnt /= 2;
            ll a1=0;
            // a1 = a2 = a3 = a4 = 0;
            rep(i, 1, n-1){
                ll dif = max(a[i-1], a[i+1])-a[i]+1;
                if(dif>0){
                    a1+=dif;
                }
                i++;
            }
            ans = a1;
            int a2 = a1;
            pre(i, n-2, 2){
                ll dif = max(a[i-1], a[i+1])-a[i]+1;
                if(dif>0){
                    a1+=dif;
                }
                i--;
                dif = max(a[i-1], a[i+1])-a[i]+1;
                if(dif>0){
                    a1-=dif;
                }
                ans = min(a1, ans);
            }
        }
        else{
            rep(i, 1, n){
                ll dif = max(a[i-1], a[i+1])-a[i]+1;
                if(dif>0){
                    ans+=dif;
                }
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
