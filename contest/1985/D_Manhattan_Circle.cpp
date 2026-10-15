/*
 * Problem   : 1985D - Manhattan Circle
 * Link      : https://codeforces.com/contest/1985/problem/D
 * Submission: https://codeforces.com/contest/1985/submission/265281838
 * Rating    : 900   Tags: implementation, math
 * Verdict   : Accepted (77 ms, 4100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-11 (Contest)
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
    int n, m;
    cin >> n >> m;
    string s[n];
    rep(i, 0, n) cin >> s[i];
    // rep(i, 0, n) cout << s[i] << endl; cout << endl;
    int st = 0;
    rep(i, 0, n){
        int cnt = 0;
        rep(j, 0, m) (cnt+=(s[i][j]=='#'));
        // cout << cnt << endl;
        if(cnt){
            st = i;
            if(st==n-1){
                cout << i+1 << " ";
                rep(j, 0, m){
                    if(s[i][j]=='#'){
                        cout << j+1 << endl;
                        return;
                    }
                }
            }
            break;
        }
    }
    int prev = 1;
    rep(i, st+1, n){
        int cnt = 0;
        rep(j, 0, m) (cnt+=s[i][j]=='#');
        // cout << cnt << "****" << endl;
        if(cnt<prev){
            st = i-1;
            cnt = prev;
            cnt/=2;
            cnt++;
            cout << st+1 << " ";
            rep(j, 0, m){
                cnt-=(s[st][j]=='#');
                if(cnt==0) {cout << j+1 << endl; return;}
            }
            return;
        }
        prev = cnt;
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
