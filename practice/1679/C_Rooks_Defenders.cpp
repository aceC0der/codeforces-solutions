/*
 * Problem   : 1679C - Rooks Defenders
 * Link      : https://codeforces.com/contest/1679/problem/C
 * Submission: https://codeforces.com/contest/1679/submission/162553871
 * Rating    : 1400   Tags: data structures, implementation
 * Verdict   : Accepted (404 ms, 7300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-02 (Practice)
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
        int n, q;
        cin >> n >> q;
        vi row(n+1, 0);
        vi col(n+1, 0);
        
        set<int> freeRows;
        set<int> freeCols;
        rep(i, 1, n+1){
            freeRows.insert(i);
            freeCols.insert(i);
        }
        while(q--){
            int t;
            cin >> t;

            if(t==1){
                int x, y;
                cin >> x >> y;
                row[x]++;
                if(row[x]==1){
                    freeRows.erase(x);
                }
                col[y]++;
                if(col[y]==1){
                    freeCols.erase(y);
                }
                
            }
            else if(t==2){
                int x, y;
                cin >> x >> y;
                row[x]--;
                if(row[x]==0){
                    freeRows.insert(x);
                }
                col[y]--;
                if(col[y]==0){
                    freeCols.insert(y);
                }
            }
            else{
                int x1, x2, y1, y2;
                cin >> x1 >> y1 >> x2 >> y2;
                auto itr = freeRows.upper_bound(x1-1);
                auto itc = freeCols.upper_bound(y1-1);
                bool f1 = (itr==freeRows.end() || *itr>x2);
                bool f2 = (itc==freeCols.end() || *itc>y2);

                cout << (f1||f2 ? "Yes" : "No") << endl;
            }
        }
    return 0;
}
