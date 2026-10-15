/*
 * Problem   : 1913A - Rating Increase
 * Link      : https://codeforces.com/contest/1913/problem/A
 * Submission: https://codeforces.com/contest/1913/submission/237889665
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-12-19 (Practice)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/



void solve(){
    string s;
    cin >> s;
    int st = -1;
    rep(i, 1, s.size()){
        if(s[i]=='0') continue;
        st = i;
        break;
    }
    // cout<< st << " " << s.size() << endl;
    // return;
    if(st==-1) {cout << -1 << endl; return;}

    string s1 = s.substr(0, st);
    string s2 = s.substr(st, s.size()-st);
    // s1 = "";
    // cout << s1 << " " << s2 << endl;
    int a = stoi(s1), b = stoi(s2);
    if(a>=b) {
        cout << -1 << endl;
        return;
    }
    cout << a << " " << b << endl;
    // rep(i, 0, st) cout << s[i];
    // cout << " ";
    // rep(i, st, s.size()) cout << 
    
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("INPUT.txt", "r", stdin);
        freopen("OUTPUT.txt", "w", stdout);
    #endif
 
    fios
    TestCases{
        solve();
    }
    return 0;
}
