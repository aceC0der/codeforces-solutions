/*
 * Problem   : 1689B - Mystic Permutation
 * Link      : https://codeforces.com/contest/1689/problem/B
 * Submission: https://codeforces.com/contest/1689/submission/160107502
 * Rating    : 900   Tags: data structures, greedy
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-10 (Contest)
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
        vi arr(n);
        rep(i, 0, n){
            cin >> arr[i];
        }
        if(n==1){
            cout << -1 << endl;
            continue;
        }
        
        vi b = arr;
        rep(i, 0, n-1){
            int fm = i, sm = i+1;
            rep(j, i, n){
                if(b[j]<b[fm]){
                    sm = fm;
                    fm = j;
                }
                if(b[j]>b[fm] && b[j]<b[sm]){
                    sm = j;
                }
            }
            // cout << arr[i] << " " << b[i] << " " << b[fm] << " " << b[sm] << endl;
            if(i==n-2 && b[sm]==arr[n-1]){
                swap(b[sm], b[i]);
            }
            else if(b[fm]!=arr[i]){
                swap(b[fm], b[i]);
            }
            else{
                // cout << " * " << endl;
                swap(b[sm], b[i]);
            }
            // rep(i, 0, n){
            //     cout << b[i]<< " ";
            // }
            // cout << endl;
        }
        rep(i, 0, n){
            cout << b[i]<< " ";
        }
        cout << endl;
    }
    return 0;
}
