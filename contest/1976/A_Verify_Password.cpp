/*
 * Problem   : 1976A - Verify Password
 * Link      : https://codeforces.com/contest/1976/problem/A
 * Submission: https://codeforces.com/contest/1976/submission/263276720
 * Rating    : 800   Tags: implementation, sortings, strings
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-30 (Contest)
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

bool isChar(char a){
    return ('a'<=a && a<='z');
}
 
bool isNum(char n){
    return ('0'<=n && n<='9');
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string num="", ch="";
    rep(i, 1, n){
        if(isChar(s[i-1]) && isNum(s[i])){
            cout << "NO" << endl;
            return;
        }
    }
    rep(i, 0, n){
        if(isChar(s[i])){
            ch+=s[i];
        }
        else if(isNum(s[i])){
            num+=s[i];
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    string numS = num, chS = ch;
    sort(all(numS));
    sort(all(chS));
    if(numS!=num || chS!=ch){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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
