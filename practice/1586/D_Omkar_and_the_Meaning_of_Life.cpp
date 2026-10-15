/*
 * Problem   : 1586D - Omkar and the Meaning of Life
 * Link      : https://codeforces.com/contest/1586/problem/D
 * Submission: https://codeforces.com/contest/1586/submission/224789517
 * Rating    : 1800   Tags: constructive algorithms, greedy, interactive, math
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-23 (Practice)
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
int n;

int query(int ref, int dif){
    cout << "? ";
    rep(i, 0, n-1) cout << ref+dif << " ";
    cout << ref << endl;
    int x;
    cin >> x;
    return x;
    cout.flush();
}

void solve(){
    // int n;
    cin >> n;
    int cnt = 0;
    vi ans(n);
    vi dif(n);
    int ref = 1;
    int d = 1;
    bool f = true;
    while(cnt<n){
        int k;
        if(ref+d<=0 || ref+d>n) k = 0;
        else k = query(ref, d);
        cnt++;
        if(!k){
            ans[n-1] = cnt;
            f = !f;
            ref = n;
            d = -1;
            continue;
        }
        k--;
        dif[k] = -d;
        if(f){
            d++;
        }
        else{
            d--;
        }
        // cnt++;
    }
    rep(i, 0, n-1){
        ans[i] = ans[n-1]+dif[i];
    }
    cout << "! ";
    rep(i, 0, n) cout << ans[i] << " "; cout << endl;
    cout.flush();
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // fios
    // TestCases{
        solve();
    // }
    return 0;
}
