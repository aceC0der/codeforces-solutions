/*
 * Problem   : 356A - Knight Tournament
 * Link      : https://codeforces.com/contest/356/problem/A
 * Submission: https://codeforces.com/contest/356/submission/169964938
 * Rating    : 1500   Tags: data structures, dsu
 * Verdict   : Accepted (342 ms, 12900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-28 (Practice)
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

// class Segtree{
// public:
//     vi a, tree;
//     Segtree(int n){
//         a.assign(n+1, 0);
//         tree.assign(4*n+1, 0);
//     }

//     void query(int node, int l, int r, int i, int j, int x){
//         // cout << l << " " << r << endl;
//         if(l==r){
//             if(l>=i && l<=j &&a[l]==0 && l!=x){
//                 a[l] = x;
//             }
//             return ;
//         }
//         if(j<l || i>r) return;
//         if(l<=i && j<=r){
//             if(tree[node]==0){

//             }
//             else{

//             }
//         }
//         int left = node*2;
//         int right = left+1;
//         int mid = (l+r)/2;
//         query(left, l, mid, i, j, x);
//         query(right, mid+1, r, i, j, x);
//     }
// };

void solve(){
    int n, m;
    cin >> n >> m;
    vi ans(n+1, 0);
    set<int> s;
    rep(i, 1, n+1) s.insert(i);
    while(m--){
        int l, r, w;
        cin >> l >> r >> w;
        auto it = s.find(l);
        if(it==s.end()){
            it = s.upper_bound(l);
        }
        vi er;
        while(it!=s.end() && *it<=r){
            if(*it==w){
                it++;
                continue;
            }
            ans[*it] = w;
            er.pb(*it);
            it++;
        }
        for(auto i : er){
            s.erase(i);
        }
    }
    rep(i, 1, n+1) cout << ans[i] << " "; cout << endl;
}

int main()
{
    fios
    solve();
    return 0;
}
