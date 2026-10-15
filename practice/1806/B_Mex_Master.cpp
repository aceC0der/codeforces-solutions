/*
 * Problem   : 1806B - Mex Master
 * Link      : https://codeforces.com/contest/1806/problem/B
 * Submission: https://codeforces.com/contest/1806/submission/198082979
 * Rating    : 900   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-19 (Practice)
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

void solve(){
    int n;
    cin >> n;
    vi a(n);
    int zr = 0;
    rep(i, 0, n) cin >> a[i];
    bool f = false, fff = false;
    rep(i, 0, n) {
        zr += (a[i]==0);
        fff |= (a[i]==1);
        f |= (a[i]>1);

    }
    int h = (n/2) + (n%2);
    if(zr<=h) cout << 0 << endl;
    else if(f || !fff){
         cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
