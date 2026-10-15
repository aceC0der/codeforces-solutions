/*
 * Problem   : 1608B - Build the Permutation
 * Link      : https://codeforces.com/contest/1608/problem/B
 * Submission: https://codeforces.com/contest/1608/submission/223696532
 * Rating    : 1200   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (31 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-17 (Practice)
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
    int n, a, b;
    cin >> n >> a >> b;
    if(abs(a-b)>1 || a+b+2>n){
        cout << -1 << endl;
        return;
    }
    vi arr(n);
    if(a>b){
        int x = n-a+1;
        int pos = 1;
        rep(i, x, n+1){
            arr[pos] = i;
            pos+=2;
        }
        pos-=2;
        int p = 0;
        pre(i, x-1, 1){
            arr[p]  = i;
            if(p>pos) p++;
            else p+=2;
        }
    }
    else{
        int x = 1;
        int pos = 1;
        rep(i, x, b+1){
            arr[pos] = i;
            pos+=2;
        }
        pos-=2;
        int p = 0;
        rep(i, b+1, n+1){
            arr[p]  = i;
            if(p>pos) p++;
            else p+=2;
        }

    }
    if(a==b && a) swap(arr[n-1], arr[n-2]);
    rep(i, 0, n) cout << arr[i] << " "; cout << endl;
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
