/*
 * Problem   : 1867D - Cyclic Operations
 * Link      : https://codeforces.com/contest/1867/problem/D
 * Submission: https://codeforces.com/contest/1867/submission/223082126
 * Rating    : 1800   Tags: brute force, constructive algorithms, dfs and similar, graphs, greedy, implementation
 * Verdict   : Accepted (62 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-12 (Practice)
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

void solve(){
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
        a[i]--;
    }
    if(k==1){
        rep(i, 0, n){
            if(a[i]!=i){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
        return;
    }
    // rep(i, 0, n) cout << a[i]+1 << " "; cout << endl;
    vi visited(n);
    // visited[0] = true;
    int num = 1;
    rep(i, 0, n){
        if(visited[i]) continue;
        int cnt = 1;
        int crnt = i;
        while(!visited[crnt]){
            visited[crnt] = num;
            crnt = a[crnt];
        }
        if(visited[crnt]!=num){
            num++;
            continue;
        }
        num++;
        int base = crnt;
        crnt = a[crnt];
        while(base!=crnt){
            crnt = a[crnt];
            cnt++;
        }
        if(cnt!=k){
            cout << "NO" << endl;
            return;
        }
    }
    // cout << endl;
    cout << "YES" << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    fios
    TestCases{
        solve();
    }
    return 0;
}
