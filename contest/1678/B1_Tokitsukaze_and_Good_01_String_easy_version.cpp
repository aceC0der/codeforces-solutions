/*
 * Problem   : 1678B1 - Tokitsukaze and Good 01-String (easy version)
 * Link      : https://codeforces.com/contest/1678/problem/B1
 * Submission: https://codeforces.com/contest/1678/submission/156328129
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (15 ms, 2500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-08 (Contest)
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
        char ch = s[0];
        vi a;
        
        int cnt = 0;
        rep(i, 0, n){
            if(ch==s[i]){
                cnt++;
            }
            else{
                a.pb(cnt);
                cnt = 1;
                ch = s[i];
            }
        }
        a.pb(cnt);
        ll ans = 0;
        rep(i, 0, a.size()){
            if(a[i]&1){
                ans++;
                i++;
                while((a[i]%2)==0){
                    // cout << "*" << endl;
                    ans++;
                    i++;
                }
                // ans++;
            }
        }
        cout << ans << endl;

    }
    return 0;
}
