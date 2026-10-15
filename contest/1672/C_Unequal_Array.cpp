/*
 * Problem   : 1672C - Unequal Array
 * Link      : https://codeforces.com/contest/1672/problem/C
 * Submission: https://codeforces.com/contest/1672/submission/154755285
 * Rating    : 1100   Tags: constructive algorithms, greedy, implementation
 * Verdict   : Accepted (62 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-23 (Contest)
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
        ll eq = 0;
        rep(i, 0, n){
            cin >> arr[i];
            if(i>0){
                if(arr[i]==arr[i-1]) eq++;
            }
        }
        if(eq<=1){
            cout << 0 << endl;
            continue;
        }
        ll res = 0;
        ll s = -1, e = -1;
        rep(i, 0, n-1){
            if(arr[i]==arr[i+1]){
                s = i;
                break;
            }
        }
        pre(i, n-1, s){
            if(arr[i]==arr[i-1]){
                e = i-1;
                break;
            }
        }
        // cout << e << " " << s << endl;
        res = (e-s+2)-3;
        if((e-s+2)==3){
            res++;
        }
        cout << res << endl;
        
    }
    return 0;
}
