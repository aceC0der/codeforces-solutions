/*
 * Problem   : 1985H1 - Maximize the Largest Component (Easy Version)
 * Link      : https://codeforces.com/contest/1985/problem/H1
 * Submission: https://codeforces.com/contest/1985/submission/265433504
 * Rating    : 1700   Tags: brute force, data structures, dfs and similar, dsu, graphs, implementation
 * Verdict   : Accepted (1311 ms, 91600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-12 (Practice)
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

int dir_x[] = {0, 0, 1, -1};
int dir_y[] = {-1, 1, 0, 0};

int n, m;

bool isValid(int i, int j){
    return ((0<=i && i<n) && (0<=j && j<m));
}

ll mapper(int idx, int i, int j, vector<vi>& mp, string s[]){
    mp[i][j] = idx;
    ll ret = 1;
    rep(k, 0, 4){
        int ni = i+dir_x[k];
        int nj = j+dir_y[k];
        if(isValid(ni, nj) && mp[ni][nj]==-1 && s[ni][nj]=='#'){
            ret += mapper(idx, ni, nj, mp, s);
        }
    }
    return ret;
}

void solve(){
    // int n, m;
    cin >> n >> m;
    string s[n];
    rep(i, 0, n) cin >> s[i];
    vector<vi> mp(n, vi(m, -1));
    int idx = 0;
    vector<ll> rowVal(n), colVal(m);
    map<int, ll> groupVal;
    rep(i, 0, n){
        rep(j, 0, m){
            if(mp[i][j]==-1 && s[i][j]=='#'){
                groupVal[idx] = mapper(idx,i, j, mp, s);
                idx++;
            }
        }
    }
    // for(auto it: groupVal) cout << it.ff << " ->> " << it.ss << endl;
    // rep(i, 0, n){
    //     rep(j, 0, m) cout << mp[i][j] << "\t"; cout << endl;
    // }
    // cout << endl;
    ll mx = 0;
    rep(i, 0, n){
        set<int> grps;
        int cnt = 0;
        rep(j, 0, m){
            if(isValid(i+1, j)) grps.insert(mp[i+1][j]);
            if(isValid(i-1, j)) grps.insert(mp[i-1][j]);
            grps.insert(mp[i][j]);
            if(mp[i][j]==-1) cnt++;
        }
        for(auto it: grps){
            if(it!=-1) {
                rowVal[i]+=groupVal[it];
            }
        }
        rowVal[i]+=cnt;
        mx = max(rowVal[i], mx);
    }
    rep(j, 0, m){
        set<int> grps;
        int cnt =0;
        rep(i, 0, n){
            if(isValid(i, j+1)) grps.insert(mp[i][j+1]);
            if(isValid(i, j)) grps.insert(mp[i][j-1]);
            grps.insert(mp[i][j]);
            if(mp[i][j]==-1) cnt++;
        }
        for(auto it: grps){
            if(it!=-1) {
                colVal[j]+=groupVal[it];
            }
        }
        colVal[j] += cnt;
        mx = max(colVal[j], mx);
    }
    cout << mx << endl;
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
