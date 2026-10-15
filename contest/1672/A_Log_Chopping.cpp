/*
 * Problem   : 1672A - Log Chopping
 * Link      : https://codeforces.com/contest/1672/problem/A
 * Submission: https://codeforces.com/contest/1672/submission/154705777
 * Rating    : 800   Tags: games, implementation, math
 * Verdict   : Accepted (15 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-23 (Contest)
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
        priority_queue<int> pq;
        bool f = true;
        int x;
        rep(i, 0, n){
            cin >> x;
            pq.push(x);
        }
        while(pq.top()!=1){
            x = pq.top();
            pq.pop();
            pq.push(x/2);
            pq.push(x-(x/2));
            f = !f;
            // cout << f << endl;
        }
        // cout << f << endl;
        if(f){
            cout << "maomao90" << endl;
        }
        else{
            cout << "errorgorn" << endl;
        }
        
    }
    return 0;
}
