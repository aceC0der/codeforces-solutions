/*
 * Problem   : 1933C - Turtle Fingers: Count the Values of k
 * Link      : https://codeforces.com/contest/1933/problem/C
 * Submission: https://codeforces.com/contest/1933/submission/248570126
 * Rating    : 1100   Tags: brute force, implementation, math, number theory
 * Verdict   : Accepted (78 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-02-27 (Contest)
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
    int a, b, l;
    cin >> a >> b >> l;
    int cntA, cntB;
    cntA = cntB = 0;
    int tmp = l;
    if(a==1 && b==1){
        cout << 1 << endl;
        return;
    }
    if(a!=1){
        while(tmp%a==0){
            cntA++;
            tmp/=a;
        }
    }
    
    if(b!=1){
        tmp = l;
        while(tmp%b==0){
            cntB++;
            tmp/=b;
        }
    }
    
    int ans = 0;
    ll pa = 1, pb = 1;
    ll k = l;
    // cout << cntA << " " << cntB << endl;
    set<int> st;
    rep(i, 0, cntA+1){
        pb = 1;
        rep(j, 0, cntB+1){
            k = 0;
            if(l%(pa*pb)==0){
                k = l/(pa*pb);
            }
            // else break;
            if(!k) break;
            st.insert(k);
            pb*=b;
        }
        pa*=a;
    }
    cout << st.size() << endl;
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
