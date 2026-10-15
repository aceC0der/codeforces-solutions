/*
 * Problem   : 1774A - Add Plus Minus Sign
 * Link      : https://codeforces.com/contest/1774/problem/A
 * Submission: https://codeforces.com/contest/1774/submission/185640102
 * Rating    : 800   Tags: constructive algorithms, math
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-17 (Contest)
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
    string ans="";
    bool f = false;
    rep(i, 1, n){
        if(s[i]=='1'){
            if(f) ans+='+';
            else ans+='-';
            f=!f;
        }
        else{
            ans+='+';
        }
    }
    cout << ans << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
