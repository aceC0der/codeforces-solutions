/*
 * Problem   : 1735C - Phase Shift
 * Link      : https://codeforces.com/contest/1735/problem/C
 * Submission: https://codeforces.com/contest/1735/submission/181672413
 * Rating    : 1400   Tags: dfs and similar, dsu, graphs, greedy, implementation, strings
 * Verdict   : Accepted (46 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-20 (Practice)
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

int par(vi& a, int i){
    if(a[i]==i) return i;
    return a[i]=par(a, a[i]);
}

bool isValid(vi& a, vi& c, int i, int ch, int cnt){
    if(c[i]!=-1) false;
    if(i==ch) return false;
    if(par(a, i)==par(a, ch) && cnt!=1) return false;
    return true;
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi a(26);
    vi c(26, -1);
    vi m(26, -1);
    rep(i, 0, 26){
        a[i] = i;
    }
    int mn = 0;
    string ans="";
    int cnt = 26;
    rep(i, 0, n){
        int ch = s[i]-'a';
        if(m[ch]!=-1) ans+=(char)(m[ch]+'a');
        else{
            rep(i, mn, 26){
                if(isValid(a, c, i, ch, cnt)){
                    cnt--;
                    // cout << (char)(i+'a') << " " << (char)(ch+'a') << endl;
                    // cout << (char)(par(a, i)+'a') << " " << (char)(par(a, ch)+'a') << endl;
                    // cout << endl;
                    m[ch] = i;
                    c[i] = ch;
                    a[ch] = par(a, i);
                    if(i==mn){
                        while(mn<26 && c[mn]!=-1) mn++;
                    }
                    break;
                }
            }
            ans+=(char)(m[ch]+'a');
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
