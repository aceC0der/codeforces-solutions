/*
 * Problem   : 1669F - Eating Candies
 * Link      : https://codeforces.com/contest/1669/problem/F
 * Submission: https://codeforces.com/contest/1669/submission/154493584
 * Rating    : 1100   Tags: binary search, data structures, greedy, two pointers
 * Verdict   : Accepted (61 ms, 1600 KB)
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
        vl arr(n);
        rep(i, 0, n){
            cin >> arr[i];
        }
        ll l=0, r=n-1;
        ll ans = 0, lsum=arr[0], rsum=arr[n-1], a = 2;
        while(l<r){
            // cout << lsum << " " << rsum << endl;
            // cout << l << " " << r << endl;
            if(lsum>rsum){
                rsum+=arr[--r];
                a++;
            }
            else if(lsum<rsum){
                lsum+=arr[++l];
                a++;
            }
            else{
                ans+=a;
                lsum=arr[++l];
                rsum = arr[--r];
                a = 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
