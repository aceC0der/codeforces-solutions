/*
 * Problem   : 1846D - Rudolph and Christmas Tree
 * Link      : https://codeforces.com/contest/1846/problem/D
 * Submission: https://codeforces.com/contest/1846/submission/212871962
 * Rating    : 1200   Tags: constructive algorithms, geometry, math
 * Verdict   : Accepted (140 ms, 900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-07-08 (Practice)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/

void solve(){
    double n, d, h;
    cin >> n >> d >> h;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    double area = 0;
    rep(i, 0, n){
        if(i==n-1){
            area += 0.5*d*h;
            break;
        }
        double top, bottom=a[i+1];
        top = a[i]+h;
        if(top<=bottom){
            area += 0.5*d*h;
        }
        else{
            double tri_area = 0.5*d*h;
            double dif = top-bottom;
            double theta = d/h;
            double hh = bottom-a[i];
            double less = theta*hh;
            double dd = d-less;
            double sm_tri_area = 0.5*dd*dif;
            // cout << dif << " " << hh << " " << less << " " << dd << " " << tri_area << " " << sm_tri_area << endl;
            area += (tri_area-sm_tri_area);
        }
    }
    cout << fixed << setprecision(7) << area << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    TestCases{
        solve();
    }
    return 0;
}
