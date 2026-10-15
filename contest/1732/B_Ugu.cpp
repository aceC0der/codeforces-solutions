/*
 * Problem   : 1732B - Ugu
 * Link      : https://codeforces.com/contest/1732/problem/B
 * Submission: https://codeforces.com/contest/1732/submission/177620939
 * Rating    : 900   Tags: brute force, dp, greedy, implementation
 * Verdict   : Accepted (15 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-23 (Contest)
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
    int on, zr;
    on = zr = 0;
    rep(i, 0, n){
        on += (s[i]=='1');
        zr += (s[i]=='0');
    }
    int ans = 0;
    bool inv = false;
    rep(i, 0, n){
        if(inv && s[i]=='0'){
            if(zr>0){
                swap(on, zr);
                zr--;
                inv = !inv;
                ans++;
            }
        }
        else if(!inv && s[i]=='1'){
            if(zr>0){
                swap(on, zr);
                zr--;
                inv = !inv;
                ans++;
            }
        }
        else {
            if(inv){
                if(s[i]=='1') zr--;
                else on--;
            }
            else{
                if(s[i]=='0') zr--;
                else on--;
            }
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
