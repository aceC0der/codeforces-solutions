/*
 * Problem   : 1732D1 - Balance (Easy version)
 * Link      : https://codeforces.com/contest/1732/problem/D1
 * Submission: https://codeforces.com/contest/1732/submission/177668546
 * Rating    : 1500   Tags: brute force, data structures, implementation, number theory
 * Verdict   : Accepted (342 ms, 5800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-23 (Practice)
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
    set<ll> a;
    a.insert(0);
    map<ll, ll> kmex;
    while(n--){
        string s;
        cin >> s;
        ll x;
        cin >> x;
        if(s=="+"){
            a.insert(x);
        }
        else{
            auto f = kmex.find(x);
            ll y=x;
            if(f!=kmex.end()){
                y = kmex[x];
            }
            while(a.count(y)){
                y+=x;
            }
            kmex[x] = y;
            cout << y << endl;
        }
    }
}

int main()
{
    fios
    solve();
    return 0;
}
