/*
 * Problem   : 1703C - Cypher
 * Link      : https://codeforces.com/contest/1703/problem/C
 * Submission: https://codeforces.com/contest/1703/submission/163846579
 * Rating    : 800   Tags: brute force, implementation, strings
 * Verdict   : Accepted (0 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-12 (Contest)
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
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        rep(i, 0, n){
            int q;
            cin >> q;
            string s;
            cin >> s;
            rep(j, 0, q){
                if(s[j]=='D'){
                    a[i]++;
                    a[i]%=10;
                }
                else{
                    a[i]--;
                    if(a[i]<0){
                        a[i] = 9;
                    }
                }
            }
        }
        rep(i, 0, n){
            cout << a[i] << " " ;
        }
        cout << endl;
    }
    return 0;
}
