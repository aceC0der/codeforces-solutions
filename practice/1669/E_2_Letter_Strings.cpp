/*
 * Problem   : 1669E - 2-Letter Strings
 * Link      : https://codeforces.com/contest/1669/problem/E
 * Submission: https://codeforces.com/contest/1669/submission/154507918
 * Rating    : 1200   Tags: data structures, math, strings
 * Verdict   : Accepted (62 ms, 2400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-22 (Practice)
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
        vector<string> vs(n);
        rep(i, 0, n){
            cin >> vs[i];
        }
        ll ans = 0;
        ll x, y;
        rep(i, 0, 12){
            rep(j, 0, 12){
                x = y = 0;
                string s;
                s+=((char)(97+i));
                s+=((char)(97+j));
                // cout << s << endl;
                rep(k, 0, n){
                    if(vs[k]==s){
                        x++;
                    }
                    else if(s[0]==vs[k][0] || s[1]==vs[k][1]){
                        y+=x;
                    }
                }
                ans += y;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
