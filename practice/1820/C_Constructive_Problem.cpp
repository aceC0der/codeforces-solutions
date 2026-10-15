/*
 * Problem   : 1820C - Constructive Problem
 * Link      : https://codeforces.com/contest/1820/problem/C
 * Submission: https://codeforces.com/contest/1820/submission/209719347
 * Rating    : 1300   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (389 ms, 26000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-15 (Practice)
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
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    // get start pos of every number
    // get end pos of every number
    // calculate mex
    // get the range of mex+1
    map<int, int> start, end;
    set<int> s;
    rep(i, 0, n){
        s.insert(a[i]);
        if(start.find(a[i])==start.end()){
            start[a[i]] = i;
        }
    }
    pre(i, n-1, 0){
        if(end.find(a[i])==end.end()){
            end[a[i]] = i;
        }
    }
    int i=0;
    int mex=0;
    for(auto it: s){
        if(mex!=it){
            break;
        }
        mex++;
    }
    // cout << mex << endl;
    if(start.find(mex+1)==start.end() || end.find(mex+1)==end.end()){
        map<int, int> freq;
        bool f=false;
        rep(i, 0, n){
            freq[a[i]]++;
        }
        for(auto it: freq){
            if((it.ff<mex && it.ss>1) || (it.ff>mex)){
                cout << "Yes" << endl;
                return;
            }
        }
        cout << "No" << endl;
        return;
    }
    int l = start[mex+1], r = end[mex+1];
    map<int, int> freq;
    bool f = true;
    for(auto it: start){
        if(it.ff<mex && l<=it.ss && it.ss<=r){
            freq[it.ff]++;
        }
    }
    for(auto it: end){
        if(it.ff<mex && l<=it.ss && it.ss<=r){
            freq[it.ff]++;
            if(freq[it.ff]>=2){
                f = false;
                break;
            }
        }
    }
    cout << (f ? "Yes" : "No") << endl;
    // cout << start[mex+1] << " " << end[mex+1] << endl;

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
