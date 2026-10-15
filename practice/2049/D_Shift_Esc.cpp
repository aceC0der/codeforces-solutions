/*
 * Problem   : 2049D - Shift + Esc
 * Link      : https://codeforces.com/contest/2049/problem/D
 * Submission: https://codeforces.com/contest/2049/submission/297558375
 * Rating    : 1900   Tags: brute force, dp
 * Verdict   : Accepted (655 ms, 66200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-21 (Practice)
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
#define int ll

int n, m, k;
int arr[203][203];
int dp[203][203][203];
int dpp[203][203];

bool isValid(int x, int y){
    return (x>=0 && y>=0 && x<n && y<m);
}

int calc(int i, int j, int s){
    int col = (j+s)%m;
    if(i==n-1 && j==m-1) return dp[i][j][s]=arr[i][col];
    if(dp[i][j][s]!=-1) return dp[i][j][s];
    int sum = arr[i][col];
    int mn = LLONG_MAX;
    if(isValid(i, j+1)){
        mn = min(calc(i, j+1, s), mn);
    }
    if(isValid(i+1, j)){
        if(dpp[i+1][j]!=-1){
            mn = min(mn, calc(i+1, j, dpp[i+1][j])+(k*dpp[i+1][j]));
        }
        else{
            int xs = 0;
            int xmn = LLONG_MAX;
            rep(sft, 0, m){
                int tmp = calc(i+1, j, sft)+(k*(sft));
                if(tmp<xmn){
                    xmn = tmp;
                    xs = sft;
                }
            }
            dpp[i+1][j] = xs;
            mn = min(mn, xmn);
        }
    }

    sum+=mn;
    dp[i][j][s] = sum;
    return sum;
}

void solve(){
    cin >> n >> m >> k;
    rep(i, 0, n){
        rep(j, 0, m){
            cin >> arr[i][j];
        }
    }
    rep(i, 0, n){
        rep(j, 0, m){
            dpp[i][j]=-1;
            rep(x, 0, m){
                dp[i][j][x] = -1;
            }
        }
    }
    int ans = LLONG_MAX;
    rep(i, 0, m){
        ans = min(ans, calc(0, 0, i)+(k*(i)));
    }
    cout << ans << endl;

}

int32_t main()
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
