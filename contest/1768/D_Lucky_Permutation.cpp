/*
 * Problem   : 1768D - Lucky Permutation
 * Link      : https://codeforces.com/contest/1768/problem/D
 * Submission: https://codeforces.com/contest/1768/submission/188113766
 * Rating    : 1800   Tags: constructive algorithms, dfs and similar, graphs, greedy
 * Verdict   : Accepted (62 ms, 2600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-05 (Contest)
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

pair<int, bool> movesNeededtoSort(vi a){
    int n = a.size();
    vector<bool> flag(n+4);
    int cnt = 0;
    bool f = false;
    rep(i, 1, n+1){
        int c = 0;
        if(!flag[i]){
            vi x;
            int crr = a[i-1];
            if(!f) x.pb(crr);
            // cout << crr << " ";
            flag[crr] = true;
            while(crr!=i){
                crr = a[crr-1];
                if(!f) x.pb(crr);
                // cout << crr << " ";
                flag[crr] = true;
                c++;
            }
            if(!f){
                sort(all(x));
                rep(i, 0, x.size()-1){
                    if(x[i]+1==x[i+1]){
                        f = true;
                        break;
                    }
                }
            }
            // cout << "*" << endl;
        }
        cnt+=c;
    }
    return {cnt, f};
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    pair<int,bool> ans = movesNeededtoSort(a);
    if(ans.ss){
        ans.ff--;
    }
    else{
        ans.ff++;
    }
    cout << ans.ff << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
