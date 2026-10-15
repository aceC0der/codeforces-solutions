/*
 * Problem   : 1904D2 - Set To Max (Hard Version)
 * Link      : https://codeforces.com/contest/1904/problem/D2
 * Submission: https://codeforces.com/contest/1904/submission/242999380
 * Rating    : 1800   Tags: constructive algorithms, data structures, divide and conquer, greedy, implementation, sortings
 * Verdict   : Accepted (249 ms, 94900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-01-23 (Practice)
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

const int MAXN = 2e5+10;
int st[50][MAXN];
int st2[50][MAXN];
int lg[MAXN+1];

// Fills lookup array lookup[][] in bottom up manner.
void buildSparseTable(vi arr, vi brr)
{
    int K = 25;
    int N = arr.size();
    copy(arr.begin(), arr.end(), st[0]);
    copy(all(brr), st2[0]);
    for (int i = 1; i <= K; i++)
        for (int j = 0; j + (1 << i) <= N; j++)
            st[i][j] = max(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);

    for (int i = 1; i <= K; i++)
        for (int j = 0; j + (1 << i) <= N; j++)
            st2[i][j] = min(st2[i - 1][j], st2[i - 1][j + (1 << (i - 1))]);
}

int query(int L, int R){
    int i = lg[R - L + 1];
    int mx = max(st[i][L], st[i][R - (1 << i) + 1]);
    return mx;
}

int query2(int L, int R){
    int i = lg[R - L + 1];
    int mn = min(st2[i][L], st2[i][R - (1 << i) + 1]);
    return mn;
}

bool checkValidiy(int l, int r, int bi){
    int mx = query(l, r);
    int mn = query2(l, r);
    if(mx!=bi) return false;
    if(mn!=bi) return false;
    return true;
}

void solve(){
    int n;
    cin >> n;
    vi a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    buildSparseTable(a, b);
    vpi nearest(n);
    map<int, int> leftNearest, rightNearest;
    rep(i, 0, n){
        nearest[i].ff = -1;
        if(leftNearest.find(b[i])!=leftNearest.end()){
            nearest[i].ff = leftNearest[b[i]];
        }
        leftNearest[a[i]] = i;
    }
    pre(i, n-1, 0){
        nearest[i].ss = -1;
        if(rightNearest.find(b[i])!=rightNearest.end()){
            nearest[i].ss = rightNearest[b[i]];
        }
        rightNearest[a[i]] = i;
    }
    rep(i, 0, n){
        if(a[i]==b[i]){
            continue;
        }
        bool f = false;
        // cout << i << " " << nearest[i].ff << " " << nearest[i].ss << endl;
        if(nearest[i].ff!=-1){
            f = checkValidiy(nearest[i].ff, i, b[i]);
        }
        if(nearest[i].ss!=-1){
            f |= checkValidiy(i, nearest[i].ss, b[i]);
        }
        if(!f){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
