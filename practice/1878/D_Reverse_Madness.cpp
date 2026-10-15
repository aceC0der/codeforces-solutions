/*
 * Problem   : 1878D - Reverse Madness
 * Link      : https://codeforces.com/contest/1878/problem/D
 * Submission: https://codeforces.com/contest/1878/submission/225434913
 * Rating    : 1600   Tags: data structures, greedy
 * Verdict   : Accepted (156 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-27 (Practice)
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

int get_idx(vi& l, vi& r, int x){
    int bl = 0, br = r.size()-1;
    while(bl<=br){
        int mid = (br-bl)/2 + bl;
        if(l[mid]<=x && x<=r[mid]){
            return mid;
        }
        if(x>r[mid]){
            bl = mid+1;
        }
        else{
            br = mid-1;
        }
    }
    return -1;
}

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vi l(k), r(k);
    rep(i, 0, k) cin >> l[i];
    rep(i, 0, k) cin >> r[i]; 
    rep(i, 0, k) l[i]--, r[i]--;
    vi val(n+10);
    rep(i, 0, k){
        rep(j, l[i], r[i]+1) val[j] = l[i]+r[i];
    }
    int q;
    cin >> q;
    vi pos(n+10);
    while(q--){
        int x;
        cin >> x;
        x--;
        int a, b ;
        int idx = get_idx(l, r, x);
        int tl = l[idx], tr = r[idx];
        a = min(x, tl+tr-x), b = max(x, tl+tr-x);
        pos[a]++;
        pos[b+1]--;
        // swap(pos[a], pos[b]);
    }

    rep(i, 0, n){
        pos[i+1] += pos[i];
        if(pos[i]&1){
            int x = val[i]-i;
            cout << s[x];
        }
        else{
            cout << s[i];
        }
    }
    cout << endl;

    // cout << endl;
    
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
