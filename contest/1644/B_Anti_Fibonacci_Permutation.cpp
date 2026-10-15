/*
 * Problem   : 1644B - Anti-Fibonacci Permutation
 * Link      : https://codeforces.com/contest/1644/problem/B
 * Submission: https://codeforces.com/contest/1644/submission/147302304
 * Rating    : 800   Tags: brute force, constructive algorithms, implementation
 * Verdict   : Accepted (0 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-02-22 (Contest)
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
        cin >>n;
        int x = 1;
        int num = 0;
        for(int j=0; j<n; j++){
            for(int i=n; i>0; i--){
                if(i==x){
                    num = i;
                    x++;
                    cout << 1 << " ";
                }
                else if(num){
                    cout << i+1 << " ";
                }
                else{
                    cout << i << " ";
                }
            }
            num=0;
            cout << endl;
        }
    }
    return 0;
}
