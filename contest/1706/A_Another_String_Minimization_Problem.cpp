/*
 * Problem   : 1706A - Another String Minimization Problem
 * Link      : https://codeforces.com/contest/1706/problem/A
 * Submission: https://codeforces.com/contest/1706/submission/164738873
 * Rating    : 800   Tags: 2-sat, constructive algorithms, greedy, string suffix structures, strings
 * Verdict   : Accepted (31 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-18 (Contest)
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
        int n, m;
        cin >> n >> m;
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        string s(m, 'B');
        rep(i, 0,n){
            int b = m+1-a[i];
            if(b>=0 &&( b<=a[i] || s[a[i]-1]=='A') && s[b-1]=='B'){
                s[b-1] = 'A';
            }
            else{
                s[a[i]-1] = 'A';
            }
        }
        cout << s << endl;
    }
    return 0;
}
