/*
 * Problem   : 1766D - Lucky Chains
 * Link      : https://codeforces.com/contest/1766/problem/D
 * Submission: https://codeforces.com/contest/1766/submission/185011023
 * Rating    : 1600   Tags: math, number theory
 * Verdict   : Accepted (1247 ms, 46600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-13 (Practice)
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
const int N = 1e7 + 11;
vi primes;
vi spf(N+5);
void solve(){
    int a, b;
    cin >> a >> b;
    if(a<b) swap(a, b);
    int x=-1;
    int dif = a-b;
    // cout << dif << endl;
    int n = primes.size();
    int ans = INT_MAX;
    // if(dif>=N){
    //     rep(i, 0, n){
    //         if(dif<N) break;
    //         if(primes[i]>=(int)1e4) break;
    //         if(dif%primes[i]==0){
    //             x = primes[i];
    //             int dist = 0;
    //             if(b%x) dist = x-b%x;
    //             ans = min(ans, dist);
    //             while(dif%x==0){
    //                 dif/=x;
    //             }
    //         }
    //     }
    // }
    while(dif>1){
        x = spf[dif]; 
        int dist = 0;
        if(b%x) dist = x-b%x;
        ans = min(ans, dist);
        while(dif%x==0){
            dif/=x;
        }
    }
    if(dif>1) {
        x = dif;
        int dist = 0;
        if(b%x) dist = x-b%x;
        ans = min(ans, (x-b%x));
    }
    if((a-b)==1) cout << -1 << endl;
    else{
        cout << ans << endl;
    }
}

int main()
{
    fios
    int n = 1e7+9;
    vector<bool> prime(n, true);
    prime[1] = false;
    spf[1] = 1;
    for (int p = 2; p*p < n; p++)
    {
        if (prime[p] == true)
        {
            spf[p] = p;
            for (int i = p * p; i <= n; i += p){
                prime[i] = false;
                if(spf[i]==0) spf[i] = p;
            }
        }
    }
    // rep(i, 0, 100) cout << spf[i] << " "; cout << endl;
    rep(i, 1, n){
        if(prime[i]) {
            primes.pb(i);
            spf[i] = i;
        }

    } 
    TestCases{
        solve();
    }
    return 0;
}
