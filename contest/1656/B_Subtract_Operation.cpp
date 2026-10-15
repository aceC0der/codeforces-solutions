/*
 * Problem   : 1656B - Subtract Operation
 * Link      : https://codeforces.com/contest/1656/problem/B
 * Submission: https://codeforces.com/contest/1656/submission/150775830
 * Rating    : 1100   Tags: data structures, greedy, math, two pointers
 * Verdict   : Accepted (93 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-24 (Contest)
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
        int n, k;
        cin >> n >> k;
        vl arr(n);
        rep(i, 0, n){
            cin >> arr[i];
            // cout << arr[i] << " ";
        }
        // cout << endl;
        bool f = false;
        sort(all(arr));
        rep(i, 0, n){
            // cout << arr[i] + k<< endl;
            if(binary_search(arr.begin(), arr.end(), (ll)arr[i]+(ll)k)){
                f = true;
                break;
            }
        }
        if(f){
            cout << "YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }
    return 0;
}
