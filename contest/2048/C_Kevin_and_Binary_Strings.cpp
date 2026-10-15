/*
 * Problem   : 2048C - Kevin and Binary Strings
 * Link      : https://codeforces.com/contest/2048/problem/C
 * Submission: https://codeforces.com/contest/2048/submission/297287935
 * Rating    : 1200   Tags: bitmasks, brute force, greedy, implementation, strings
 * Verdict   : Accepted (77 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-19 (Contest)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
    string s;
    cin >> s;
    int n = s.size();
    cout << 1 << " " << n << " ";
    int ft = -1;
    rep(i, 0, n){
        if(s[i]=='0'){
            ft=i;
            break;
        }
    }
    if(ft==-1){
        cout << 1 <<" " << 1 << endl;
        return;
    }
    // cout << s << " (())" << endl;

    int len = n-ft;
    int l=0;
    int r = l+len-1;
    pi ans;
    vi mn;
    while(r<n){
        int it=ft;
        vi tmp;
        // cout << l << " " <<r <<endl;
        for(int i=l; i<=r; i++){
            if(s[i]!=s[it]){
                int v = it-ft;
                tmp.pb(v);
            }
            it++;
        }
        
        int j = tmp.size();
        int x = mn.size();
        bool fs = true;
        rep(i, 0, min(x, j)){
            if(mn[i]!=tmp[i]){
                fs = false;
                break;
            }
        }
        if(fs && tmp.size()>mn.size()){
            ans.ff = l;
            ans.ss = r;
            mn = tmp;
        }
        else{
            bool f = false;
            rep(i, 0, min(x, j)){
                if(mn[i]!=tmp[i]){
                    f = (tmp[i]<mn[i]);
                    break;
                }
            }
            if(f){
                ans.ff = l;
                ans.ss = r;
                mn = tmp;
            }
        }
        r++;
        l++;
    }
    cout << ans.ff+1 << " " << ans.ss+1 << endl;


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
