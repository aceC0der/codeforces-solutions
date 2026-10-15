/*
 * Problem   : 1656A - Good Pairs
 * Link      : https://codeforces.com/contest/1656/problem/A
 * Submission: https://codeforces.com/contest/1656/submission/150736748
 * Rating    : 800   Tags: math, sortings
 * Verdict   : Accepted (46 ms, 0 KB)
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
        int n;
        cin >> n;
        int mini = (int)1e9+10; 
        int maxi = -1;
        int maxIn = -1, miniIn = n+2;
        int x;
        rep(i, 0, n){
            cin >> x;
            if(mini>x){
                mini = x;
                miniIn = i+1;

            }
            if(maxi<x){
                maxi = x;
                maxIn = i+1;
            }
        }
        cout << miniIn << " " << maxIn << endl;
    }
    return 0;
}
