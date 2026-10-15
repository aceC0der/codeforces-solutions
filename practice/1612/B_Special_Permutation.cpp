/*
 * Problem   : 1612B - Special Permutation
 * Link      : https://codeforces.com/contest/1612/problem/B
 * Submission: https://codeforces.com/contest/1612/submission/223612910
 * Rating    : 900   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-16 (Practice)
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
    int h = n/2;
    if((a<=h && b<=h) || (a>h && b>h)){
        cout << -1 << endl;
        return;
    }
    vi arr(n);
    rep(i, 0, n) arr[i] = i+1;
    if(a<b){
        swap(arr[a-1], arr[b-1]);
        reverse(all(arr));
    }
    else{
        if(b!=h || a!=h+1){
            cout << -1 << endl;
            return;
        }
        else{
            reverse(all(arr));
        }
    }
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
