/*
 * Problem   : 1996C - Sort
 * Link      : https://codeforces.com/contest/1996/problem/C
 * Submission: https://codeforces.com/contest/1996/submission/272784377
 * Rating    : 1200   Tags: dp, greedy, sortings, strings
 * Verdict   : Accepted (234 ms, 44200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-26 (Contest)
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

void solve(){
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    int prefa[n+5][30], prefb[n+5][30];
    rep(i, 0, 26){
        prefa[0][i] = prefb[0][i] = 0;
    }
    int i = 1;
    // cout << a << endl << b << endl;
    // // return;
    for(auto ch: a){
        int c = ch-'a';
        rep(j, 0, 26){
            prefa[i][j] = prefa[i-1][j]+(j==c);
        }
        i++;
    }
    // cout <<"****" << endl;
    // return;
    i=1;
    for(auto ch: b){
        int c = ch-'a';
        rep(j, 0, 26){
            prefb[i][j] = prefb[i-1][j]+(j==c);
        }
        i++;
    }
    // cout << a << endl << b << endl;

    // cout << "*****" << endl;
    // return;

    while(q--){
        int l, r;
        cin >> l >> r;
        l--;
        int sta = -1, stb=-1;
        int len = r-l;
        int dif = 0;
        rep(i, 0, 26){
            int ca = prefa[r][i]-prefa[l][i];
            int cb = prefb[r][i]-prefb[l][i];
            dif += abs(ca-cb);
            // if(!=){
            //     f = false;
            // }
            // if(prefa[r][i]-prefa[l][i]==len) sta = i;
            // if(prefb[r][i]-prefb[l][i]==len) stb = i;
        }
        dif/=2;
        cout << dif << endl;
    }
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
