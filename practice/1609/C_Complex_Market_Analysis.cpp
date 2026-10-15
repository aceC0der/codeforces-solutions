/*
 * Problem   : 1609C - Complex Market Analysis
 * Link      : https://codeforces.com/contest/1609/problem/C
 * Submission: https://codeforces.com/contest/1609/submission/152859501
 * Rating    : 1400   Tags: binary search, dp, implementation, number theory, schedules, two pointers
 * Verdict   : Accepted (78 ms, 4900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-06 (Practice)
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
    int n = 2000005;
    vector<bool> prime(n, true);
    prime[1] = false;
     
    for (int p = 2; p * p <= n; p++)
     {
         if (prime[p] == true)
         {
             for (int i = p * p; i <= n; i += p)
                 prime[i] = false;
         }
     }
    fios
    TestCases{
        ll n, e;
        cin >> n >> e;
        vl arr(n);
        vl prs;
        rep(i, 0, n){
            cin >> arr[i];
            if(prime[arr[i]]) prs.pb(i);
        }
        ll ans = 0;
        ll k = 1;
        
        rep(i, 0, prs.size()){
            ll l = 0, r = 0;
            ll j = prs[i] + k*e;
            // bool flag = true;
            while(j<n){
                if(arr[j]==1){
                    r++;
                }
                else{
                    // flag = false;
                    break;
                }
                j+=(k*e);
            }
            j = prs[i] - k*e;
            // cout << j << " ";
            while(j>=0){
                if(arr[j]==1){
                    l++;
                }
                else{
                    break;
                }
                j-=(k*e);
            }
            ans += l+r+ l*r;
        }
        cout << ans << endl;
    }
    return 0;
}
