/*
 * Problem   : 1923D - Slimes
 * Link      : https://codeforces.com/contest/1923/problem/D
 * Submission: https://codeforces.com/contest/1923/submission/248009706
 * Rating    : 1800   Tags: binary search, constructive algorithms, data structures, greedy, two pointers
 * Verdict   : Accepted (327 ms, 66900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-02-24 (Practice)
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
#define MAXN 300005
int lg[MAXN+1];
int stMIN[24][MAXN];
int stMAX[24][MAXN];

ll calcMin(int L, int R){
    int i = lg[R - L + 1];
    int minimum = min(stMIN[i][L], stMIN[i][R - (1 << i) + 1]);
    return minimum;
}

ll calcMax(int L, int R){
    int i = lg[R - L + 1];
    int mx = max(stMAX[i][L], stMAX[i][R - (1 << i) + 1]);
    return mx;
}

bool isUnique(int l, int r){
    return ((calcMax(l, r)!=calcMin(l, r))||r==l);
}

int posSearch(vl& pref, int l, int r, ll val, int v){

    // cout << l << " " << r << " **z* " << v << endl;
    int n = pref.size();
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        // cout << l << " " << r << ":: " << isUnique(v+1, mid) << endl;
        if(pref[mid]-pref[v]>val && isUnique(v+1, mid)){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    return ans;
}

int negSearch(vl& suf, int l, int r, ll val, int v){
    int n = suf.size();
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(suf[mid]-suf[v]>val && isUnique(mid, v-1)){
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    return ans;
}

void solve(){
    int n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    vl pref(n), suf(n);
    vl xorPref(n+1);
    // rep(i, 1, n+1) xorPref[i] ^= xorPref[i-1]^a[i];

    copy(a.begin(), a.end(), stMIN[0]);

    for (int i = 1; i <= lg[n]; i++)
        for (int j = 0; j + (1 << i) <= n; j++)
            stMIN[i][j] = min(stMIN[i - 1][j], stMIN[i - 1][j + (1 << (i - 1))]);

    
    copy(a.begin(), a.end(), stMAX[0]);

    for (int i = 1; i <= lg[n]; i++)
        for (int j = 0; j + (1 << i) <= n; j++)
            stMAX[i][j] = max(stMAX[i - 1][j], stMAX[i - 1][j + (1 << (i - 1))]);
    // rep(i, 0, n){
    //     rep(j, i, n){
    //         cout << i << " " << j << " :: " << "MIN : " << calcMin(i, j) << " MAX : " << calcMax (i, j) << endl;
    //     }
    // }
    // cout << "*l*" << endl;
    // return;

    pref[0] = a[0], suf[n-1] = a[n-1];
    rep(i, 1, n) pref[i] += pref[i-1]+a[i];
    pre(i, n-2, 0) suf[i] += suf[i+1]+a[i];
    // rep(i, 0, n) cout << pref[i] << " "; cout << endl;
    // rep(i, 0, n) cout << suf[i] << " "; cout << endl;
    rep(i, 0, n){
        int pos = posSearch(pref, i+1, n-1, a[i], i);
        int neg = negSearch(suf, 0, i-1, a[i], i);
        if(i+1<n && a[i]<a[i+1]) pos = i+1;
        if(i-1>=0 && a[i]<a[i-1]) neg = i-1;

        int mn = INT_MAX;
        // cout << i << " " << a[i] << " " << pos << " " << neg << " ::: ";
        if(pos!=-1) mn = min(pos-i, mn);
        if(neg!=-1) mn = min(i-neg, mn);
        if(mn==INT_MAX) mn = -1;
        cout << mn << " ";
        // cout << endl;
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
    lg[1] = 0;
    for (int i = 2; i <= MAXN; i++)
        lg[i] = lg[i/2] + 1;

    TestCases{
        solve();
    }
    return 0;
}
