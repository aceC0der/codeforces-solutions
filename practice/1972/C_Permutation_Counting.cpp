/*
 * Problem   : 1972C - Permutation Counting
 * Link      : https://codeforces.com/contest/1972/problem/C
 * Submission: https://codeforces.com/contest/1972/submission/258927988
 * Rating    : 1400   Tags: binary search, constructive algorithms, greedy, implementation, math, sortings
 * Verdict   : Accepted (218 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-01 (Practice)
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

bool check(ll mid, ll *a, ll k, int n  ){
  int ok = 1; 
  for(int i=1; i<=n;i++){
    if(a[i]>=mid)continue; 
    ll need = mid-a[i]; 
    if(k<need)ok = 0 ; 
    k-=need; 
  }
  return ok ; 
}

void solve(){
    int n; ll k;  
    cin>>n>>k; 
    ll a[n+2]; 

    for(int i=1;i <=n;i++){
      cin>>a[i]; 
    }
    ll l =0  , r=1e18 ; 
    ll  x= 0; 
    while(l<=r){
      ll mid = l+r>>1; 
      if(check(mid, a, k,n)){
        l=mid+1; 
        x =mid;
      }else {
        r= mid-1; 
      }
    }
    ll ans = n*x;
    ll rem = k ; 
    int cnt = 0; 
    for(int i=1;i<=n;i++){
      if(a[i]>x){
        cnt++; 
      }else {
        ll need = x-a[i]; 
        rem-=need;
      }
    }
    ans+=rem+cnt;
    ans-=n-1; 
    cout<<ans<<endl; 
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
