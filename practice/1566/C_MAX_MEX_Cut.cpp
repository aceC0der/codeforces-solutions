/*
 * Problem   : 1566C - MAX-MEX Cut
 * Link      : https://codeforces.com/contest/1566/problem/C
 * Submission: https://codeforces.com/contest/1566/submission/264769534
 * Rating    : 1000   Tags: bitmasks, constructive algorithms, dp, greedy
 * Verdict   : Accepted (62 ms, 4100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-09 (Practice)
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
    int n;
    cin >> n;
    string s[2];
    cin >> s[0];
    cin >> s[1];
    // cout << n << "@@@@@@" <<endl;
    int cnt = 0;
    char p1, p2;
    p1 = p2 = '1';
    s[0]+='1', s[1]+='1';
    vector<bool> flag(n);
    rep(i, 0, n){
        int c1 = s[0][i], c2 = s[1][i];
        if(min(c1, c2)=='0' && max(c1, c2)=='1') cnt+=2;
        else if(min(c1, c2)=='1'){
            if(i>0 && max(p1, p2)=='0' && !flag[i-1]) cnt++;
            else if(max(s[0][i+1], s[1][i+1])=='0') {
                cnt++;
                flag[i+1] = true;
            }
        }
        else{
            cnt++;
        }
        p1=c1, p2=c2;
        // cout << cnt << " **" << endl;
    }
    cout << cnt << endl;
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
