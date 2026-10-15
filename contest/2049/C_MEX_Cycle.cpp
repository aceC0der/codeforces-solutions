/*
 * Problem   : 2049C - MEX Cycle
 * Link      : https://codeforces.com/contest/2049/problem/C
 * Submission: https://codeforces.com/contest/2049/submission/297514381
 * Rating    : 1500   Tags: brute force, constructive algorithms, greedy, implementation
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-20 (Contest)
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

int n;

int nxt(int x){
    x++;
    if(x>=n) x=0;
    return x;
}

void solve(){
    int x, y;
    cin >> n >> x >> y;
    vi arr(n);
    x--;y--;
    int mx = max(x, y);
    int mn = min(x, y);
    if(n%2==0){
        rep(i, 0, n){
            if(i&1) continue;
            arr[i] = 1;
        }
        if(mn%2 == mx%2){
            arr[mn] = 2;
        }
    }
    else{
        arr[mn] = 2;
        int st = mn+1;
        st%=n;
        int v = 0;
        while(st!=mn){
            arr[st] = v;
            v = !v;
            st++;
            st%=n;
        }
    }
    rep(i, 0, n){
        cout << arr[i] << " ";
    }
    cout << endl;
    
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
