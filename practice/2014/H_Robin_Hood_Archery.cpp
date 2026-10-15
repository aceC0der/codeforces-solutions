/*
 * Problem   : 2014H - Robin Hood Archery
 * Link      : https://codeforces.com/contest/2014/problem/H
 * Submission: https://codeforces.com/contest/2014/submission/282865764
 * Rating    : 1900   Tags: data structures, divide and conquer, greedy, hashing
 * Verdict   : Accepted (249 ms, 25400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-25 (Practice)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
mt19937_64 rnd(98275314);

const int N = 1e6+10;
vl hashA(N), hashB(N), hashC(N);

ll random(){
    ll x = rand();
    while(x==0) x = rand();
    return x;
}

void assignValue(){
    rep(i, 0, N){
        hashA[i]= random();
        hashB[i] = random();
        hashC[i] = random();
    }
}

bool isValid(int l, int r, vl& pref){
    return ((pref[l]^pref[r+1])==0);
}


void solve(){
    int n, q;
    cin >> n >> q;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    // rep(i, 0, n) cout << hashA[a[i]] << " "; cout << endl;
    // rep(i, 0, n) cout << hashB[a[i]] << " "; cout << endl;
    // rep(i, 0, n) cout << hashC[a[i]] << " "; cout << endl;
    vl prefA(n+1), prefB(n+1), prefC(n+1);
    prefA[0] = prefB[0] = prefC[0] = 0;
    rep(i, 1, n+1){
        prefA[i] ^= prefA[i-1]^hashA[a[i-1]];
        prefB[i] ^= prefB[i-1]^hashB[a[i-1]];
        prefC[i] ^= prefC[i-1]^hashC[a[i-1]];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        l--;r--;
        bool qa = isValid(l, r, prefA), qb = isValid(l, r, prefB), qc = isValid(l, r, prefC);
        int x = (qa+qb+qc), y=((!qa)+(!qb)+(!qc));
        cout << (x>y ? "YES" : "NO") << endl;

    }

    // cout << "**************" << endl;

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    assignValue();
    fios
    TestCases{
        solve();
    }
    return 0;
}
