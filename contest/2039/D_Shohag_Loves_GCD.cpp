/*
 * Problem   : 2039D - Shohag Loves GCD
 * Link      : https://codeforces.com/contest/2039/problem/D
 * Submission: https://codeforces.com/contest/2039/submission/292984654
 * Rating    : 1700   Tags: constructive algorithms, greedy, math, number theory
 * Verdict   : Accepted (140 ms, 5200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-23 (Contest)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
int N = 2000005;
vector<int> prime(N);

void solve(){
    int n, m;
    cin >> n >> m;
    vi arr(m);
    rep(i, 0, m) cin >> arr[i];
    sort(all(arr));
    vi ans(n+1, m-1);
    // cout << "******" << endl;
    // return;
    for(int i=2; i<=n; i++){
        if(ans[i]==0){
            cout << -1 << endl;
            return;
        }
        int x = ans[i]-1;
        ans[i]--;
        int j=i+i;
        while(j<=n){
            ans[j] = min(ans[j], ans[i]);
            j+=i;
        }
    }
    
    // rep(i, 1, n){
    //     if(prime[i+1]) ans[i]=arr[m-2];
    //     else ans[i] = x;
    // }
    rep(i, 1, n+1) cout << arr[ans[i]] << " "; cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    
    int n = N;
    prime[1] = 0;
    rep(i, 2, n+1){
        prime[i] = i;
    }
     
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == p)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = p;
        }
    }
    TestCases{
        solve();
    }
    return 0;
}
