/*
 * Problem   : 1630A - And Matching
 * Link      : https://codeforces.com/contest/1630/problem/A
 * Submission: https://codeforces.com/contest/1630/submission/164925925
 * Rating    : 1500   Tags: bitmasks, constructive algorithms
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-19 (Practice)
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

int com(int i){
    int x = 0;
    int l = 0;
    rep(j, 0, 20){
        if(CheckBit(i, j)){
            pre(k, j, l-1){
                if(k<0) break;
                if(!CheckBit(i, k)){
                    SetBit(x, k);
                }
            }
            l = j;
        }
    }
    return x;
}

int main()
{
    fios
    TestCases{
        int n, k;
        cin >> n >> k;
        if(k==n-1 && n<=4){
            cout << -1 << endl;
            // continue;
        }
        else if(!k){
            pre(i, n-1, n/2){
                cout << i << " " << com(i) << endl;
            }
            // continue;
        }
        else if(k<n-1){
            cout << n-1 << " " << k << endl;
            // int j = 1;
            pre(i, n-2, n/2){
                int x = com(i), y = i;
                if(i==k) y=0;
                if(x==k) x=0;
                cout << y << " " << x << endl;
            }
            // continue;
        }
        else{
            cout << n-1 << " " << n-2 << endl;
            cout << 0 << " " << n-4 << endl;
            cout << 2 << " " << n-3 << endl;
            cout << 1 << " " << 3 << endl;
            pre(i, n-5, n/2){
                cout << i << " " << com(i) << endl;
            }
        }
        // cout << endl;
    }
    
    return 0;
}
