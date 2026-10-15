/*
 * Problem   : 1694A - Creep
 * Link      : https://codeforces.com/contest/1694/problem/A
 * Submission: https://codeforces.com/contest/1694/submission/160841363
 * Rating    : 800   Tags: greedy, implementation
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-16 (Contest)
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
        int a, b;
        int maxi, mini;
        cin >> a >> b;

        bool f = true;
        if(a<b){
            f = false;
        }
        while(a>0 && b>0){
            if(f){
                cout << 0;
                a--;
            }
            else{
                cout << 1;
                b--;
            }
            f = !f;
        }
        if(b>0){
            while(b--){
                cout << 1;
            }
        }
        else if(a>0){
            while(a--){
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}
