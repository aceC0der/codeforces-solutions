/*
 * Problem   : 1735D - Meta-set
 * Link      : https://codeforces.com/contest/1735/problem/D
 * Submission: https://codeforces.com/contest/1735/submission/181744936
 * Rating    : 1700   Tags: brute force, combinatorics, data structures, hashing, math
 * Verdict   : Accepted (966 ms, 82600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-20 (Practice)
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
    int n, k;
    cin >> n >> k;
    map<vi, int> m;
    vector<vi> a(n);
    vi b(k);
    rep(i, 0, n){
        rep(j, 0, k){
            cin >> b[j];
        }
        a[i]=b;
        m[b] = i+1;
    }
    vi freq(n);
    map<pi, bool> pm;
    rep(i, 0, n){
        rep(j, i+1, n){
            if(pm[{i,j}]) continue;
            vi chk(k);
            rep(l, 0, k){
                if(a[i][l]==a[j][l]) chk[l] = a[i][l];
                else chk[l] = 3-(a[i][l]+a[j][l]);
            }
            int p = m[chk];
            if(p){
                freq[i]++;
                freq[j]++;
                freq[p-1]++;
                pm[{i, j}] = true;
                int a, b;
                a = i, b = p-1;
                if(a>b) swap(a, b);
                pm[{a,b}] = true;
                a = j;
                if(a>b) swap(a,b);
                pm[{a,b}] = true;
            }
        }
        cout << endl;
    }
    ll ans = 0;
    // rep(i, 0, n) cout << freq[i] << " "; cout << endl;
    rep(i, 0, n){
        ans += (freq[i]*(freq[i]-1))/2;
    }
    cout << ans << endl;


}

int main()
{
    fios
        solve();
    return 0;
}
