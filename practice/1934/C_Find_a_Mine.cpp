/*
 * Problem   : 1934C - Find a Mine
 * Link      : https://codeforces.com/contest/1934/problem/C
 * Submission: https://codeforces.com/contest/1934/submission/249205109
 * Rating    : 1700   Tags: binary search, constructive algorithms, geometry, greedy, interactive, math
 * Verdict   : Accepted (171 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-03-02 (Practice)
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
int query(int x, int y){
    cout << "? " << x << " " << y << endl;
    // cout.flush();
    int v;
    cin >> v;
    return v;
}

void answer(int x, int y){
    cout << "! " << x << " " << y << endl;
    // cout.flush();
}

void solve(int casee){
    int n, m;
    cin >> n >> m;
    int q1 = query(1, 1);
    if(!q1){
        answer(1, 1);
        return;
    }
    int q2 = query(n, 1);
    if(!q2){
        answer(n, 1);
        return;
    }
    int y1 = (q1+q2+2-(n-1))/2;
    int x1 = q1+2-y1;
    if(x1>0 && y1>0 && x1<=n && y1<=m && !query(x1, y1)){
        answer(x1, y1);
        return;
    }
    int q3 = query(1, m);
    if(!q3){
        answer(1, m);
        return;
    }
    int x2 = (q1+q3+2-(m-1))/2;
    int y2 = q1+2-x2;
    answer(x2, y2);
}

int main()
{
    TestCases{
        solve(qq);
    }
    return 0;
}
