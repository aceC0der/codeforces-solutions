/*
 * Problem   : 1656C - Make Equal With Mod
 * Link      : https://codeforces.com/contest/1656/problem/C
 * Submission: https://codeforces.com/contest/1656/submission/150809929
 * Rating    : 1200   Tags: constructive algorithms, math, number theory, sortings
 * Verdict   : Accepted (77 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-24 (Practice)
 */
// #include <bits/stdc++.h>
// using namespace std;

// #define mp make_pair
// #define pb push_back
// #define ff first
// #define ss second
// #define ll long long
// #define vi vector<int>
// #define vl vector<ll>
// #define pi pair<int, int>
// #define pl pair<ll, ll>
// #define vpi vector<pi >
// #define vpl vector<pl >
// #define endl '\n'
// #define SetBit(x, k) (x |= (1LL << k))
// #define ClearBit(x, k) (x &= ~(1LL << k))
// #define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
// #define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
// #define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define all(a) a.begin(),a.end()
// #define rep(i, a, b) for(int i=a; i<b; i++)
// #define pre(i, a, b) for(int i=a; i>=b; i--)


// int main()
// {
//     fios
//     TestCases{
//         ll n;
//         cin >>n;
//         ll arr[n];
//         rep(i, 0, n){
//             cin >> arr[i];
//         }
//         bool f = true;
//         sort(arr, arr+n);
//         ll mindif = (ll)1e9+10;
//         bool b1 = binary_search(arr, arr+n, 1) ;
//         bool b0 = binary_search(arr, arr+n, 0);
//         bool b2 = binary_search(arr, arr+n, 2);
//         if((b1 && b0) || (b1 && b2)){
//             f = false;
//         }
//         else if(b1 ){
//             for(ll i=n-2; i>=0; i--){
//                 if(arr[i]<=2){
//                     break;
//                 }
//                 if(arr[i+1]-arr[i]==1){
//                     f = false;
//                     break;
//                 }
//             }
//         }
//         if(f){
//             cout << "YES" << endl;
//         }
//         else{
//             cout <<"NO" << endl;
//         }
//     }
//     return 0;
// }
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
        cin >>n;
        ll arr[n];
        rep(i, 0, n){
            cin >> arr[i];
        }
        bool f = true;
        sort(arr, arr+n);
        ll mindif = (ll)1e9+10;
        bool b1 = binary_search(arr, arr+n, 1) ;
        bool b0 = binary_search(arr, arr+n, 0);
        bool b2 = binary_search(arr, arr+n, 2);
        if((b1 && b0) || (b1 && b2)){
            f = false;
        }
        else if(b1 ){
            for(ll i=n-1; i>=0; i--){
                if(arr[i]<=2){
                    break;
                }
                if(binary_search(arr, arr+n, arr[i]-1)){
                    f = false;
                    break;
                }
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
