/*
 * Problem   : 1845A - Forbidden Integer
 * Link      : https://codeforces.com/contest/1845/problem/A
 * Submission: https://codeforces.com/contest/1845/submission/211453683
 * Rating    : 800   Tags: constructive algorithms, implementation, math, number theory
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-29 (Contest)
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
    int n, k, x;
    cin >> n >> k >> x;
    if(x!=1){
        cout << "YES" << endl;
        cout << n << endl;
        rep(i, 0, n) cout << 1 << " "; cout << endl;
    }
    else{
        if(k<=2){
            if(k==2 && n%2==0){
                cout << "YES" << endl;
                int p = n/2;
                cout << p << endl;
                rep(i, 0, p)  cout << "2 "; cout << endl;
            } 
            else {
                cout << "NO" << endl;
            }
            return;
        }
        cout << "YES" << endl;
        if(n&1){
            int p = n/2;
            cout << p << endl;
            p--;
            rep(i, 0, p) cout << "2" << " "; cout << "3" << endl;
        }
        else{
            int p = n/2;
            cout << p << endl;
            rep(i, 0, p)  cout << "2 "; cout << endl;
        }
    }
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
