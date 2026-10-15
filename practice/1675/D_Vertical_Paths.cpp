/*
 * Problem   : 1675D - Vertical Paths
 * Link      : https://codeforces.com/contest/1675/problem/D
 * Submission: https://codeforces.com/contest/1675/submission/156023290
 * Rating    : 1300   Tags: graphs, implementation, trees
 * Verdict   : Accepted (155 ms, 7700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-06 (Practice)
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

int main()
{
    fios
    TestCases{
        int n;
        cin >> n;
        vi arr(n);
        vector<bool> leaf(n, true);
        rep(i, 0, n){
            cin >> arr[i];
            leaf[arr[i]-1] = false;
            // cout << arr[i] << " ";
        }
        // cout << endl;
        
        vector<bool> visited(n, false);
        vector<vi > ans;
        pre(i, n-1, 0){
            // cout << i << " ";
            vi a;
            int j = i;
            if(leaf[i]){
                while(visited[i]==false){
                    a.pb(i+1);
                    visited[i] = true;
                    i = arr[i]-1;
                }
            }
            i = j;
            if(a.size()>0)
                ans.pb(a);
        }
        // cout << endl;
        if(n==1){
            vi a;
            a.pb(1);
            ans.pb(a);
        }
        cout << ans.size() << endl;
        rep(i, 0, ans.size()){
            cout << ans[i].size() << endl;
            pre(j, ans[i].size()-1, 0){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
