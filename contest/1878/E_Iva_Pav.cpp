/*
 * Problem   : 1878E - Iva & Pav
 * Link      : https://codeforces.com/contest/1878/problem/E
 * Submission: https://codeforces.com/contest/1878/submission/225351768
 * Rating    : 1400   Tags: binary search, bitmasks, data structures, greedy
 * Verdict   : Accepted (560 ms, 27700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-26 (Contest)
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

const int N = 2e5+10;

int arr[N][33];

int get_value(int l, int r){
    int val = 0;
    int sz = r-l+1;
    rep(i, 0, 30){
        if(arr[r+1][i]-arr[l][i]==sz) SetBit(val, i);
    }
    return val;
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, 33){
        arr[0][i] = 0;
    }
    rep(i, 0, n){
        rep(j, 0, 30){
            arr[i+1][j] = CheckBit(a[i], j)+arr[i][j];
        }
    }

    int q;
    cin >> q;
    while(q--){
        int l, k;
        cin >> l >> k;
        l--;
        int bl = l, br = n-1;
        int ans = -1;
        while(bl<=br){
            int mid = (br-bl)/2+bl;
            if(get_value(l, mid)>=k){
                ans = mid+1;
                bl = mid+1;
            }
            else{
                br = mid-1;
            }
        }
        cout << ans << " ";
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
