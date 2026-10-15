/*
 * Problem   : 1688B - Patchouli's Magical Talisman
 * Link      : https://codeforces.com/contest/1688/problem/B
 * Submission: https://codeforces.com/contest/1688/submission/159375758
 * Rating    : 800   Tags: bitmasks, constructive algorithms, greedy, sortings
 * Verdict   : Accepted (109 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-03 (Contest)
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
        vl arr(n);
        ll even = 0;
        ll mini = LLONG_MAX;
        rep(i, 0, n){
            cin >> arr[i];
            if(!(arr[i]&1)){
                ll x= arr[i];
                ll cnt=0;
                while(!(x&1)){
                    x/=2;
                    cnt++;
                }
                even++;
                mini = min(cnt, mini);
            }
        }
        ll ans = 0;
        if(even==n){
            ans += (n-1)+mini;
        }
        else{
            ans = even;
        }
        cout << ans << endl;

    }
    return 0;
}
