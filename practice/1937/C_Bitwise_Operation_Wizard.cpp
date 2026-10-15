/*
 * Problem   : 1937C - Bitwise Operation Wizard
 * Link      : https://codeforces.com/contest/1937/problem/C
 * Submission: https://codeforces.com/contest/1937/submission/249069253
 * Rating    : 1700   Tags: bitmasks, constructive algorithms, interactive
 * Verdict   : Accepted (202 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-03-01 (Practice)
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

int query(int a, int b, int c , int d){
    cout << "? " << a << " " << b <<  " " << c << " " << d << endl;
    cout.flush();
    char ch;
    cin >> ch;
    if(ch=='=') return 0;
    return ((ch=='>') ? 1 : -1);
}

void ans(int i, int j){
    cout << "! " << i << " " << j << endl;
    cout.flush();
}

void solve(){
    int n;
    cin >> n;
    if(n==2){
        ans(0, 1);
        return;
    }
    int mxIdx = 0;
    rep(i, 1, n){
        if(query(mxIdx, mxIdx, i, i)==-1){
            mxIdx = i;
        }
    }
    int mnIdx = mxIdx;
    vi mnIndexes;
    rep(i, 0, n){
        if(i==mxIdx) continue;
        int q = query(mxIdx, i, mxIdx, mnIdx);
        if(q==1){
            mnIndexes.clear();
            mnIndexes.pb(i);
            mnIdx = i;
        }
        else if(q==0){
            mnIndexes.pb(i);
        }
    }
    mnIdx = mnIndexes[0];
    rep(i, 1, mnIndexes.size()){
        int q = query(mnIdx, mnIdx, mnIndexes[i], mnIndexes[i]);
        if(q==1){
            mnIdx = mnIndexes[i];
        }
    }
    ans(mxIdx, mnIdx);
}

int main()
{
    TestCases{
        solve();
    }
    return 0;
}
