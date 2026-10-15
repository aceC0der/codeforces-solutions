/*
 * Problem   : 1955C - Inhabitant of the Deep Sea
 * Link      : https://codeforces.com/contest/1955/problem/C
 * Submission: https://codeforces.com/contest/1955/submission/255695659
 * Rating    : 1300   Tags: greedy, implementation, math
 * Verdict   : Accepted (108 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-04-08 (Contest)
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
    ll n, k;
    cin >> n >> k;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    int l = 0, r = n-1;
    ll ans = 0;
    while(l<=r && k>0){
        
        if(l==r){
            if(a[l]<=k) ans++;
            break;
        }
        if(a[l]<=a[r]){
            if(k<(a[l]*2)-1){
                break;
            }
            // ans++;
            k-=(a[l]*2-1);
            a[r]-=(a[l]-1);
            if(k>0){
                a[r]--;
                k--;
            }
            a[l] = 0;
        }
        else{
            if(k<(a[r]*2)){
                break;
            }
            // ans++;
            k-=a[r]*2;
            a[l]-=a[r];
            a[r] = 0;
        }
        if(!a[r]){
            r--;
            ans++;
        }
        if(!a[l]){
            ans++;
            l++;
        }
        // rep(i, 0, n) cout << a[i] << " "; cout << endl;
    }
    cout << ans << endl;
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
