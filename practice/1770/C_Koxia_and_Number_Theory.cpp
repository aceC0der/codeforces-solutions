/*
 * Problem   : 1770C - Koxia and Number Theory
 * Link      : https://codeforces.com/contest/1770/problem/C
 * Submission: https://codeforces.com/contest/1770/submission/187510963
 * Rating    : 1700   Tags: brute force, chinese remainder theorem, math, number theory
 * Verdict   : Accepted (15 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-01 (Practice)
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
    ll mod[50][50];
    ll n;
    cin >> n;
    ll primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    vl a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    // rep(i, 0, n) cout << a[i] << " " ; cout << endl;
    rep(i, 0, 50){
        rep(j, 0, 50){
            mod[i][j] = 0;
        }
    }
    rep(i, 0, n){
        rep(j, 0, 15){
            ll x = primes[j];
            ll y = a[i]%x;
            // cout << x << " " << y << " " << a[i] << endl;
            mod[x][y]++;
        }
    }
    bool flag = true;
    rep(i, 0, 15){
        int x = primes[i];
        if(!flag) break;
        bool f = true;
        rep(j, 0, x){
            // cout << mod[x][j] << " ";
            f &= (mod[x][j]>=2);
        }
        // cout << endl;
        flag &= !f;
    }
    sort(all(a));
    rep(i, 1, n){
        flag &= (a[i]!=a[i-1]);
    }
    cout << (flag ? "YES" : "NO") << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
