/*
 * Problem   : 1810D - Climbing the Tree
 * Link      : https://codeforces.com/contest/1810/problem/D
 * Submission: https://codeforces.com/contest/1810/submission/209841358
 * Rating    : 1700   Tags: binary search, math
 * Verdict   : Accepted (234 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-16 (Practice)
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

pl determineRange(ll a, ll b, ll n){
    ll l = (n-2)*(a-b)+a+1;
    if(n<=1) l = 1;
    ll r = (n-1)*(a-b)+a;
    // l = max(l, 1LL);
    return {l, r};
}

bool doesIntersect(pl range1, pl range2){
    if( (range1.ff<=range2.ff && range2.ff<=range1.ss) || 
        (range1.ff<=range2.ss && range2.ss<=range1.ss) ||
        (range2.ff<=range1.ff && range1.ff<=range2.ss) ||
        (range2.ff<=range1.ss && range1.ss<=range2.ss)){
        return true;
    }
    return false;
}

void updateRange(pl& range1, pl& range2){
    range1.ff = max(range1.ff, range2.ff);
    range1.ss = min(range1.ss, range2.ss);
}

ll getMindays(pl range, ll a, ll b){
    ll l = range.ff, r = range.ss;
    // cout << l << " * " << r << endl;
    ll dist = l-a;
    ll n1 = 1, n2 = 1;
    ll dif = a-b;
    if(dist>0){
        n1 += (dist/dif) + (dist%dif!=0);
    }
    dist = r-a;
    if(dist>0) n2+=(dist/dif) + (dist%dif!=0);
    return (n1==n2 ? n1 : -1);
}

void solve(){
    int q;
    cin >> q;
    // cout << q << endl;
    pl range = {1, LONG_LONG_MAX};
    while(q--){
        int t;
        cin >> t;
        if(t==1){
            ll a, b, n;
            cin >> a >> b >> n;
            pl rng = determineRange(a, b, n);
            if(doesIntersect(range, rng)){
                cout << 1 << " ";
                updateRange(range, rng);
            }
            else{
                cout << 0 << " ";
            }
        }
        else{
            ll a, b;
            cin >> a >> b;
            ll days = getMindays(range, a, b);
            cout << days << " ";
        }
    }
    cout << endl;
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
