/*
 * Problem   : 1671C - Dolce Vita
 * Link      : https://codeforces.com/contest/1671/problem/C
 * Submission: https://codeforces.com/contest/1671/submission/154580861
 * Rating    : 1200   Tags: binary search, brute force, greedy, math
 * Verdict   : Accepted (78 ms, 1600 KB)
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
        ll n, x;
        cin >> n >> x;
        vl arr(n);
        ll sum =0;
        rep(i, 0, n){
            cin >> arr[i];
            sum += arr[i];
        }
        ll res = 0;
        ll day = 0;
        sort(all(arr));
        pre(i, n-1, 0){
            // cout << sum << endl;
            ll c = sum + day*(i+1);
            if(c>x) {  
                sum-=arr[i];
                continue;
            }
            ll dif = x-c;
            ll a = dif/(i+1);
            res += (a+1)*(i+1);
            
            day += a+1;

            sum -= arr[i];
            // cout << "* " <<  a  << " " << res << endl;
        }
        // res -= day;

        cout << res << endl;
    }
    return 0;
}
