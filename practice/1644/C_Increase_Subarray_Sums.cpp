/*
 * Problem   : 1644C - Increase Subarray Sums
 * Link      : https://codeforces.com/contest/1644/problem/C
 * Submission: https://codeforces.com/contest/1644/submission/152790128
 * Rating    : 1400   Tags: brute force, dp, greedy, implementation
 * Verdict   : Accepted (46 ms, 100 KB)
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
#define vll vector<ll>
#define pi pair<int, int>
#define pll pair<ll, ll>
#define vpi vector<pi >
#define vpll vector<pl >
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
        ll n, x;
        cin >> n >> x;
        vll arr(n);
        vll presum(n+1);
        rep(i, 0, n){
            cin >> arr[i];
        }
        presum[0] = 0;
        rep(i, 1, n+1){
            presum[i] = presum[i-1] + arr[i-1];
        }
        // cout << "presum:" ;
        // rep(i, 0, n+1){
        //     cout << presum[i] << " ";
        // }
        // cout << endl;
        vll msum(n+1);
        msum[0] = 0;
        rep(i, 1, n+1){
            ll l=0, r=l+i;
            msum[i] = presum[r]-presum[l];
            l++;r++;
            while(r<n+1){
                msum[i] = max(msum[i], presum[r]-presum[l]);
                l++;r++;
            }
        }
        // cout << "msum :" ;
        // rep(i, 0, n+1){
        //     cout << msum[i] << " ";
        // }
        // cout << endl;
        // // int in = n;
        ll prevmx = (ll)-1e11;
        rep(i, 0, n+1){
            ll mx = (ll)-1e11;
            rep(j, i, n+1){
                mx = max(msum[j], mx);
            }
            mx += i*x;
            prevmx = max(mx, prevmx);
            cout << prevmx << " ";
        }
        cout << endl;
    }
    return 0;
}
