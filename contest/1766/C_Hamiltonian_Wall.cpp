/*
 * Problem   : 1766C - Hamiltonian Wall
 * Link      : https://codeforces.com/contest/1766/problem/C
 * Submission: https://codeforces.com/contest/1766/submission/184951295
 * Rating    : 1300   Tags: dp, implementation
 * Verdict   : Accepted (15 ms, 700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-12 (Contest)
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
    vector<string> s(2);

    cin >> s[0];
    cin >> s[1];
    
    int cnt;
    int pos = -1;
    bool ok = true;
    rep(i, 0, n){
        cnt = 0;
        if(s[0][i]=='B') cnt++;
        if(s[1][i]=='B') cnt++;
        // cout << cnt << endl;
        if(cnt==2 && pos!=-1 && i<n-1) pos=!pos;
        if(cnt==1 && pos==-1){
            if(s[0][i]=='B'){
                pos = 0;
            }
            else pos = 1;
        }
        else if(cnt==1){
            int p = 1;
            if(s[0][i]=='B'){
                p = 0;
            }
            if(p!=pos) ok = false;
        }

    }
    cout << ((ok)? "YES" : "NO") << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
