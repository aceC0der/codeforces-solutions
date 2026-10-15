/*
 * Problem   : 1841B - Keep it Beautiful
 * Link      : https://codeforces.com/contest/1841/problem/B
 * Submission: https://codeforces.com/contest/1841/submission/209451846
 * Rating    : 1000   Tags: implementation
 * Verdict   : Accepted (62 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-12 (Contest)
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
    string s = "1";
    int f = -1, l = -1;
    if(n) cin >> f;
    int inv = 0;
    rep(i, 1, n){
        int x;
        cin >> x;
        if(l==-1){
            l = x;
            s+='1';
            if(f>l) inv++;
            continue;
        }
        if(inv){
            int cnt = 0;
            cnt += (x<l);
            cnt += (x>f);
            // cout << x << " " << f << endl;
            if(!cnt){
                l = x;
                s+='1';
            }
            else{
                s+='0';
            }
        }
        else{
            if((x>=l) || (x<=f)){
                // cout << x << " * " << l << endl;
                inv += (x<l);
                l = x;
                s+='1';
            }
            else{
                s+='0';
            }
        }
    }
    if(!n) s = "";
    cout << s << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    TestCases{
        solve();
    }
    return 0;
}
