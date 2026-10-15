/*
 * Problem   : 1774C - Ice and Fire
 * Link      : https://codeforces.com/contest/1774/problem/C
 * Submission: https://codeforces.com/contest/1774/submission/185721476
 * Rating    : 1300   Tags: constructive algorithms, dp, greedy
 * Verdict   : Accepted (46 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-18 (Practice)
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int pos[2];
    pos[0] = pos[1] = 0;
    rep(i, 1, n){
        pos[s[i-1]-'0'] = i;
        if(s[i-1]=='1'){
            cout << pos[0]+1 << " ";
        }
        else{
            cout << pos[1]+1 << " "; 
        }
    }
    cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
