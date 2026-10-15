/*
 * Problem   : 1715B - Beautiful Array
 * Link      : https://codeforces.com/contest/1715/problem/B
 * Submission: https://codeforces.com/contest/1715/submission/169114227
 * Rating    : 1000   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (31 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-20 (Contest)
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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    bool f = true;
    vl a(n, 0);
    if(k*b>s) {
        cout << -1 << endl;
        return;
    }
    a[0] = k*b;
    s -= a[0];
    if(n*(k-1)<s){
        cout << -1 << endl;
        return;
    }
    int x = k-1;
    rep(i, 0, n){
        if(s>=x){
            a[i]+=x;
            s-=x;
        }
        else{
            a[i]+=s;
            break;
        }
    }
    rep(i, 0, n){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
