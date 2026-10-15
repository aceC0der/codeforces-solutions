/*
 * Problem   : 1982B - Collatz Conjecture
 * Link      : https://codeforces.com/contest/1982/problem/B
 * Submission: https://codeforces.com/contest/1982/submission/267423945
 * Rating    : 1200   Tags: brute force, implementation, math, number theory
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-26 (Practice)
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
    ll x, y, k;
    cin >> x >> y >> k;
    // cout << x << " " << y  << " " << k << ": ";
    int cnt = 0;
    while(x!=1){
        ll dif = x%y;
        dif = y-dif;
        // cout << x << " " << dif << " " << y << endl;
        if(dif>k){
            x+=k;
            k=0;
            break;
        }
        k-=dif;
        x+=dif;
        while(x%y==0){
            cnt++;
            x/=y;
        }
    }
    // cout << cnt << endl;
    if(k){
        k%=(y-1);
        x+=k;
    }
    cout << x << endl;
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
