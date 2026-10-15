/*
 * Problem   : 1740D - Knowledge Cards
 * Link      : https://codeforces.com/contest/1740/problem/D
 * Submission: https://codeforces.com/contest/1740/submission/202148326
 * Rating    : 1500   Tags: constructive algorithms, data structures
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-15 (Practice)
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

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vi stk(k);
    vi pos(k+1);
    rep(i, 0, k){
        cin >> stk[i];
        pos[stk[i]] = i+1;
    }
    int free_slots = n*m-3;
    int last_pos = 0;
    bool f = true;
    pre(i, k, 1){
        int cr_pos = pos[i];
        if(cr_pos>last_pos){
            free_slots-=(cr_pos-last_pos);
            last_pos = cr_pos;
            if(free_slots<0){
                f = false;
                break;
            }
        }
        free_slots++;
    }
    cout << (f ? "YA" : "TIDAK") << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
