/*
 * Problem   : 1771C - Hossam and Trainees
 * Link      : https://codeforces.com/contest/1771/problem/C
 * Submission: https://codeforces.com/contest/1771/submission/184826123
 * Rating    : 1600   Tags: greedy, math, number theory
 * Verdict   : Accepted (1668 ms, 3800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-12 (Practice)
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
const int N = 1e5 + 9;
int spf[N];
vector<int> primes;
void sieve() {
  for(int i = 2; i < N; i++) {
    if (spf[i] == 0) spf[i] = i, primes.push_back(i);
    int sz = primes.size();
    for (int j = 0; j < sz && i * primes[j] < N && primes[j] <= spf[i]; j++) {
      spf[i * primes[j]] = primes[j];
    }
  }
}

void solve(){
    int n;
    cin >> n;
    ll l1, l2;
    map<int, int> cnt;
    bool f = false;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        for(int p : primes){
            if(x/p<p) break;
            if(x%p==0){
                cnt[p]++;
                while(x%p==0){
                    x/=p;
                }
            }
        }
        if(x>1) cnt[x]++;
    }
    for(auto p : cnt){
        f |= (p.ss>1);
    }
    cout << ((!f)? "NO" : "YES") << endl;
    // int n; cin >> n;
    // map<int, int> cnt;
    // for (int i = 1; i <= n; i++) {
    //   int x; cin >> x;
    //   for (auto p: primes) {
    //     if (p <= x / p) {
    //       if (x % p == 0) {
    //         while (x % p == 0) {
    //           x /= p;
    //         }
    //         cnt[p]++;
    //       }
    //     }
    //     else break;
    //   }
    //   if (x > 1) {
    //     cnt[x]++;
    //   }
    // }
    // bool ok = false;
    // for (auto [p, c]: cnt) {
    //   ok |= c >= 2;
    // }
    // if (ok) {
    //   cout << "YES\n";
    // }
    // else {
    //   cout << "NO\n";
    // }

}

int main()
{
    fios
    // int n = 2e8+9;
    // vector<bool> prime(n, true);
    // prime[1] = false;
     
    // for (int p = 2; p * p <= n; p++)
    // {
    //     if (prime[p] == true)
    //     {
    //         primes.pb(p);
    //         for (int i = p * p; i <= n; i += p)
    //             prime[i] = false;
    //     }
    // }
    sieve();
    TestCases{
        solve();
    }
    return 0;
}
