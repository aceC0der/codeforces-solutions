/*
 * Problem   : 1659A - Red Versus Blue
 * Link      : https://codeforces.com/contest/1659/problem/A
 * Submission: https://codeforces.com/contest/1659/submission/153898448
 * Rating    : 1000   Tags: constructive algorithms, greedy, implementation, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-17 (Contest)
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
        int n, r, b;
        cin >> n >> r >> b;
        int s = r/(b+1);
        int x = r%(b+1);
        while(n){
            for(int i=0; i<s; i++){
                cout << "R";
                n--;
                if(!n) break;
            }
            if(!n) break;
            if(x){
                cout << "R";
                x--;
                n--;
            }
            if(!n) break;
            cout << "B";
            n--;
        }
        cout << endl;
    }
    return 0;
}
