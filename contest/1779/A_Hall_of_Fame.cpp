/*
 * Problem   : 1779A - Hall of Fame
 * Link      : https://codeforces.com/contest/1779/problem/A
 * Submission: https://codeforces.com/contest/1779/submission/187742326
 * Rating    : 800   Tags: constructive algorithms, greedy, strings
 * Verdict   : Accepted (15 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-03 (Contest)
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
    char c = s[0];
    bool f = true;
    int mnR = -1;
    int mxL = -1;
    rep(i, 0, n){
        f &= (c==s[i]);
        if(s[i]=='R' && mnR==-1){
            mnR = i;
        }
        if(s[i]=='L'){
            mxL = i;
        }
    }
    if(!f){
        if(mnR<mxL){
            cout << 0 << endl;
        }
        else{
            int x = 0;
            rep(i, 0, n-1){
                if(s[i]=='L'&&s[i+1]=='R'){
                    x = i+1;
                    break;
                }
            }
            cout << x << endl;
        }
    }
    else{
        cout << -1 << endl;
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
