/*
 * Problem   : 1659B - Bit Flipping
 * Link      : https://codeforces.com/contest/1659/problem/B
 * Submission: https://codeforces.com/contest/1659/submission/153914330
 * Rating    : 1300   Tags: bitmasks, constructive algorithms, greedy, strings
 * Verdict   : Accepted (46 ms, 1300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-17 (Contest)
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        vi ans(n, 0);
        rep(i, 0, n){
            if(cnt==k){
                break;
            }
            if(s[i]=='0'){
                if(k&1){
                    continue;
                }
                else{
                    cnt++;
                    ans[i] = 1;
                }
            }
            else{
                if(k&1){
                    cnt++;
                    ans[i] = 1;
                }
            }
        }
        if(cnt<k){
            ans[n-1] += (k-cnt);
        }
        rep(i, 0, n){
            if(s[i]=='0'){
                if((k-ans[i])&1) cout << 1;
                else{
                    cout << 0;
                }
            }
            else{
                if((k-ans[i])&1) cout << 0;
                else{
                    cout << 1;
                }
            }
        }
        cout << endl;
        rep(i, 0, n){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
