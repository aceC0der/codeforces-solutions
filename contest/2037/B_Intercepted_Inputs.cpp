/*
 * Problem   : 2037B - Intercepted Inputs
 * Link      : https://codeforces.com/contest/2037/problem/B
 * Submission: https://codeforces.com/contest/2037/submission/291962611
 * Rating    : 800   Tags: brute force, implementation
 * Verdict   : Accepted (124 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-17 (Contest)
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

void solve(){
    int n;
    cin >> n;
    vi isAvailable(n+10, 0);
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
        isAvailable[a[i]]++;
    }
    int ttl = n-2;
    rep(i, 0, n){
        if(ttl%a[i]==0){
            int req = ttl/a[i];
            if((a[i]==req)){
                if(isAvailable[req]>1){
                    cout << a[i] << " " << req << endl;
                    return;
                }
            }else if(isAvailable[req]){
                cout << a[i] << " " << req << endl;
                return;
            }
        }
    }
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
