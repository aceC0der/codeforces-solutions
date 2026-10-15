/*
 * Problem   : 1867E2 - Salyg1n and Array (hard version)
 * Link      : https://codeforces.com/contest/1867/problem/E2
 * Submission: https://codeforces.com/contest/1867/submission/223347129
 * Rating    : 2200   Tags: constructive algorithms, interactive
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-14 (Practice)
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


int ask(int i) {
    cout << "? " << i << endl;
    cout.flush();
    int x;
    cin >> x;
    return x;
}

void solve(){
    int n, k;
    cin >> n >> k;
    int d = n%k;
    int x = n/k;
    // if(d>0) x--;
    int i = 1;
    int xr = 0;
    while(x--){
        xr ^= ask(i);
        i+=k;
    }
    i-=k;
    // cout << i << ": " << xr << endl;
    if(d>0){
        i += d/2;
        int xr1 = ask(i);
        // xr1 = ask(i);
        i += d/2;
        int xr2 = ask(i);
        int nxr = xr1^xr2;
        xr ^= nxr;
    }
    cout << "! " << xr << endl;
    cout.flush();
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // fios
    TestCases{
        solve();
    }
    return 0;
}
