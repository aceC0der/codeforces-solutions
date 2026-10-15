/*
 * Problem   : 1774D - Same Count One
 * Link      : https://codeforces.com/contest/1774/problem/D
 * Submission: https://codeforces.com/contest/1774/submission/185763534
 * Rating    : 1600   Tags: brute force, constructive algorithms, greedy, implementation, two pointers
 * Verdict   : Accepted (218 ms, 6800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-18 (Practice)
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

class st{
public:
    int a, b, c;
};

void solve(){
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    int a[n+1][m+1];
    rep(i, 0, n) rep(j, 0, m) {cin >> a[i][j];cnt+=a[i][j]==1;}
    if(cnt%n) {
        cout << -1 << endl;
        return;
    }
    vi freq(n);
    cnt /= n;
    rep(i, 0, n){
        int x = 0;
        rep(j, 0, m){
            x += a[i][j]==1;
        }
        freq[i] = x-cnt;
    }
    vi rich, poor;
    vector<st> ans;
    rep(i, 0, m){
        rep(j, 0, n){
            if(freq[j]>0 && a[j][i]==1){
                rich.pb(j);
            }
            if(freq[j]<0 && a[j][i]==0){
                poor.pb(j);
            }
        }
        // cout << rich.size() << " " << poor.size() << endl;
        rep(k, 0, min(rich.size(), poor.size())){
            st x;
            x.a = rich[k]+1, x.b = poor[k]+1, x.c =i+1;
            ans.pb(x);
            freq[rich[k]]--;
            freq[poor[k]]++;
        }
        rich.clear(); poor.clear();
    }
    cout << ans.size() << endl;
    rep(i, 0, ans.size()){
        cout << ans[i].a << " " << ans[i].b << " " << ans[i].c << endl;
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
