/*
 * Problem   : 1846E2 - Rudolf and Snowflakes (hard version)
 * Link      : https://codeforces.com/contest/1846/problem/E2
 * Submission: https://codeforces.com/contest/1846/submission/212879276
 * Rating    : 1800   Tags: binary search, brute force, implementation, math
 * Verdict   : Accepted (670 ms, 64100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-07-09 (Practice)
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
#define ull unsigned long long
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
set<ull> fcck;

void solve(){
    ull n;
    cin >> n;
    if(fcck.count(n)){
        cout << "YES" << endl;
        return;
    }
    // cout << "***" << endl;
    ll r = sqrt(n-1);
    if(r*(r+1)==n-1){
        if(1+r==n || r == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ull mx = 1e6+1;
    ull mxx = 1e18;
    for(ull i=2; i<=1000000; i++){
        ull sum = 1+i+(i*i);
        ull outer = 3;
        ll cnt = 3;
        while(sum<=mxx){
            
            fcck.insert(sum);
            if(sum==mxx) break;
            ull x = (pow(i, cnt));
            // cout << i << " " << sum << " " << x << endl;
            if(x>=mxx || !x) break;
            sum+=x;
            cnt++;
        }
    }
    fios
    TestCases{
        solve();
    }
    return 0;
}
