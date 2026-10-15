/*
 * Problem   : 1978C - Manhattan Permutations
 * Link      : https://codeforces.com/contest/1978/problem/C
 * Submission: https://codeforces.com/contest/1978/submission/266010813
 * Rating    : 1300   Tags: constructive algorithms, data structures, greedy, implementation, math
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-16 (Contest)
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
    ll n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n) a[i]=i+1;
    ll mx = n-1;
    ll sum = 0;
    while(mx>0){
        sum += mx*2;
        mx-=2;
    }
    mx = n-1;
    // cou
    if(k%2==1 || k>sum){
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    int i=0;
    while(k>0 && mx>0){
        // cout << k << " " << mx*2 << endl;
        if(k>=mx*2){
            swap(a[i], a[i+mx]);
            k-=(mx*2);
            i++;
            mx--;
        }
        mx--;
    }
    // if(k){
    //     ll hf = k/2;
    //     swap(a[i], a[i+hf]);
    // }
    rep(i, 0, n) cout << a[i] << " "; cout << endl;


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
