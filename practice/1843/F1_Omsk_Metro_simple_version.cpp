/*
 * Problem   : 1843F1 - Omsk Metro (simple version)
 * Link      : https://codeforces.com/contest/1843/problem/F1
 * Submission: https://codeforces.com/contest/1843/submission/210615463
 * Rating    : 1800   Tags: data structures, dfs and similar, dp, graphs, greedy, math, trees
 * Verdict   : Accepted (124 ms, 6200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-22 (Practice)
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

class node{
public:
    int negSum, posSum, mxNeg, mxPos;
};

void solve(){
    int n;
    cin >> n;
    char ch;
    vector<node> tree;
    node root;
    root.posSum = 1;
    root.negSum = 0;
    root.mxNeg = 0;
    root.mxPos = 1;
    tree.push_back(root);
    rep(i, 0, n){
        cin >> ch;
        if(ch=='+'){
            int par, val;
            cin >> par >> val;
            node crr;
            par--;
            // cout << par+1 << " : " << tree[par].posSum << " " << tree[par].negSum << " " << tree[par].mxNeg << " " << tree[par].mxPos << endl;
            if(val==1){
                crr.posSum = tree[par].posSum+1;
                crr.negSum = tree[par].negSum-1;
                crr.negSum = max(0, crr.negSum);
            }
            else{
                crr.negSum = tree[par].negSum+1;
                crr.posSum = tree[par].posSum-1;
                crr.posSum = max(0, crr.posSum);
            }
            crr.mxNeg = max(tree[par].mxNeg, crr.negSum);
            crr.mxPos = max(tree[par].mxPos, crr.posSum);
            tree.push_back(crr);
        }
        else{
            int u, v, k;
            cin >> u >> v >> k;
            // cout << tree.size() << endl;
            // cout << v << " : " << tree[v-1].mxPos << " " << tree[v-1].mxNeg << endl;
            if(k<0){
                k*=-1;
                cout << (k<=tree[v-1].mxNeg ? "YES" : "NO") << endl;
            }
            else{
                cout << (k<=tree[v-1].mxPos ? "YES" : "NO") << endl;
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
