/*
 * Problem   : 1504C - Balance the Bits
 * Link      : https://codeforces.com/contest/1504/problem/C
 * Submission: https://codeforces.com/contest/1504/submission/223437297
 * Rating    : 1600   Tags: brute force, constructive algorithms, greedy
 * Verdict   : Accepted (30 ms, 1100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-15 (Practice)
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
    int n;
    cin >> n;
    int one=0, zr;
    string s;
    cin >> s;
    rep(i, 0, n) {
        if(s[i]=='1') one++;
    }
    zr = n-one;
    if((one&1) || (s[0]!='1') || (s[n-1]!='1')){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    int op = (one-2)/2;
    string a="", b="";
    b += '(';
    a+='(';
    bool f = true;
    rep(i, 1, n-1){
        if(s[i]=='1'){
            if(op>0){
                a+='(';
                b+='(';
            }
            else{
                a+=')';
                b+=')';
            }
            op--;
        }
        else{
            if(f){
                a+=')';
                b+='(';
            }
            else{
                a+='(';
                b+=')';
            }
            f = !f;
        }
    }
    a+=')';
    b+=')';
    cout << a << endl << b << endl;
    // a[n-1] = b[n-1] = ')';

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
