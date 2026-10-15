/*
 * Problem   : 1642A - Hard Way
 * Link      : https://codeforces.com/contest/1642/problem/A
 * Submission: https://codeforces.com/contest/1642/submission/147457523
 * Rating    : 800   Tags: geometry
 * Verdict   : Accepted (0 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-02-23 (Contest)
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


float dis(ll x1,ll  y1,ll  x2,ll  y2){
    return sqrt(pow(x1-x2, 2)+pow(y1-y2,2));
}


int main()
{
    fios
    TestCases{
        ll x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if(y1==y2&& y3<y1){
            cout << abs(x2-x1) << endl;
        }
        else if(y1==y3 && y2<y3){
            cout << abs(x3-x1) << endl;
        }
        else if(y2==y3 && y1<y2){
            cout <<abs(x2-x3) << endl;
        }
        else{
            cout <<0 << endl;
        }
    }
    return 0;
}
