/*
 * Problem   : 2040C - Ordered Permutations
 * Link      : https://codeforces.com/contest/2040/problem/C
 * Submission: https://codeforces.com/contest/2040/submission/295633121
 * Rating    : 1600   Tags: bitmasks, combinatorics, constructive algorithms, greedy, math, two pointers
 * Verdict   : Accepted (108 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-08 (Contest)
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
    ll n, k;
    cin >> n >> k; 
    // if(n==1){
    //     cout << (k==1 ? 1 : -1) << endl;
    //     return;
    // }
    // if(n==2){
    //     if(k==1) {
    //         cout << "1 2" << endl;
    //     }else if(k==2){
    //         cout << "2 1" << endl;
    //     }
    //     else cout << -1 << endl;
    //     return;
    // }
    vi arr(n);
    rep(i, 0, n) arr[i] = i+1;
    map<int, bool> vis;
    vi rev;
    int x = n-2;
    int idx = 1;
    vi isLast(64, 0);
    rep(i, 0, 64){
        if(CheckBit(k, i)){
            isLast[i] = true;
            break;
        }
    }
    if(n<=64 && k==(1LL<<(n-1))){
        pre(i, n, 1) cout << i << " "; cout << endl;
        return;
    }
    pre(i, 63, 0){
        if(CheckBit(k, i)){
            // cout << i << " " << x << " *" << idx << endl;
            if(i>x){
                cout << -1 << endl;
                return;
            }
            while(i<x){
                x--;
                idx++;
            }
            if(isLast[i]){
                rep(j, idx+1, n+1){
                    rev.pb(j);
                    vis[j] = true;
                }
                break;
            }
            rev.pb(idx);
            vis[idx]=true;
            x--;
            idx++;
        }
    }
    reverse(all(rev));
    rep(i, 1, n+1){
        if(vis.find(i)==vis.end()){
            cout << i << " ";
        }
    }
    for(auto it: rev) cout << it << " "; cout << endl;
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
