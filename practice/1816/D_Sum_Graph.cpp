/*
 * Problem   : 1816D - Sum Graph
 * Link      : https://codeforces.com/contest/1816/problem/D
 * Submission: https://codeforces.com/contest/1816/submission/209716760
 * Rating    : 2000   Tags: constructive algorithms, graphs, implementation, interactive, shortest paths, trees
 * Verdict   : Accepted (46 ms, 0 KB)
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

void query1(int x){
    cout << "+ " << x << endl;
    cout.flush();
    cin >> x;
}

int query2(int i, int j){
    int x;
    cout << "? " << i << " " << j << endl;
    cout.flush();
    cin >> x;
    return x;
}

void answer(vi p1, vi p2){
    cout << "! ";
    for(int i=1; i<p1.size(); i++) cout << p1[i] << " ";
    for(int i=1; i<p1.size(); i++) cout << p2[i] << " "; cout << endl;
    cout.flush();
}

void solve(){
    int n;
    cin >> n;
    query1(n+1);
    query1(n+2);
    vi a(n+1);
    int l = 1, r = n;
    rep(i, 1, n+1){
        if(i&1){
            a[i] = l;
            l++;
        }
        else{
            a[i] = r;
            r--;
        }
    }
    // rep(i, 1, n+1) cout << a[i] << " " ; cout << endl;
    vi freq(n+1, 0);
    int mxfreq = 0;
    int mx = 0;
    int mxpos = 0;
    rep(i, 1, n){
        int x = query2(1, i+1);
        // freq[x]++;
        // if(freq[x]==2) mxfreq = max(mxfreq, freq[x]);
        if(x>mx){
            mx = x;
            mxpos = i+1;
        }
    }
    vi p1(n+1), p2(n+1);
    p1[mxpos] = a[1];
    p2[mxpos] = a[n];
    rep(i, 0, n){
        if(i==mxpos-1) continue;
        int x = query2(mxpos, i+1);
        int p = a[1+x];
        p1[i+1] = p;
        p2[i+1] = a[n-x];
    }
    answer(p1, p2);
    int x;
    cin >> x;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // fios
    TestCases{
        solve();
    }
    return 0;
}
