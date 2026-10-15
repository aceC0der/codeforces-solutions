/*
 * Problem   : 1720D2 - Xor-Subsequence (hard version)
 * Link      : https://codeforces.com/contest/1720/problem/D2
 * Submission: https://codeforces.com/contest/1720/submission/172561278
 * Rating    : 2400   Tags: bitmasks, data structures, dp, strings, trees
 * Verdict   : Accepted (530 ms, 285400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-18 (Practice)
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

class node{
public:
    node* bit[2];
    int dp[4];
    node(){
        bit[0]=bit[1] = NULL;
        dp[0]=dp[1]=dp[2]=dp[3] = 0;
    }
};

class trie{
public:
    node* root;
    trie(){
        root = new node();
    }

    void insert(int a, int i, int mx){
        node* crnt = root;
        pre(k, 30, 0){
            int st = 0;
            bool b1, b2;
            b1 = CheckBit(i,k), b2 = CheckBit(a,k);
            if(b1) SetBit(st, 0);
            if(b2) SetBit(st, 1);
            int x = !(b1==b2);
            if(crnt->bit[x]==NULL) crnt->bit[x] = new node();
            crnt = crnt->bit[x];
            crnt->dp[st] = max(mx, crnt->dp[st]);
        }
    }

    int search(int a, int i){
        node* crnt = root;
        int ans = 0;
        pre(k, 30, 0){
            int st = 0;
            bool b1, b2;
            b1 = CheckBit(i,k), b2 = CheckBit(a,k);
            if(b1) SetBit(st, 0);
            if(b2) SetBit(st, 1);
            int x = !(b1==b2);
            if(crnt->bit[!x]!=NULL){
                int p = 0;
                if(st==0) p = 1;
                else if(st==1) p = 3;
                else if(st==3) p = 2;
                ans = max(ans, crnt->bit[!x]->dp[p]);
            }
            if(crnt->bit[x]==NULL) break;
            crnt = crnt->bit[x];
        }
        return ans;
    }

};

void solve(){
    int n;
    cin >> n;
    vi a(n);
    trie tr;

    rep(i, 0, n){
        cin >> a[i];
    }
    // vi dp(n);
    int ans = 0;
    rep(i, 0, n){
        int mx = tr.search(a[i], i);
        // dp[i] = mx+1;
        // cout << dp[i] << " ";
        ans = max(ans, mx+1);
        tr.insert(a[i], i, mx+1);
    }
    // cout << endl;
    cout << ans << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
