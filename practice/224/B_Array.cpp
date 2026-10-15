/*
 * Problem   : 224B - Array
 * Link      : https://codeforces.com/contest/224/problem/B
 * Submission: https://codeforces.com/contest/224/submission/221774580
 * Rating    : 1500   Tags: bitmasks, implementation, two pointers
 * Verdict   : Accepted (92 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-04 (Practice)
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
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    vi freq(1e5+10);
    int l=0, r=0;
    int dist_cnt = 1;
    freq[a[l]]++;
    int al, ar;
    al = -2, ar = -2;
    while(r<n){
        if(dist_cnt==k){
            // cout << l+1 << " " << r+1 << endl;
            if(ar-al+1>r-l+1 || al==-2 || ar==-2){
                al = l;
                ar = r;
            }
            freq[a[l]]--;
            if(!freq[a[l]]){
                dist_cnt--;
            }
            l++;
        }
        else{
            r++;
            if(r<n) freq[a[r]]++;
            else break;
            if(freq[a[r]]==1) dist_cnt++;
        }
    }
    cout << al+1 << " " << ar+1 << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    // TestCases{
        solve();
    // }
    return 0;
}
