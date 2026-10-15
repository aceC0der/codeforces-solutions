/*
 * Problem   : 1234C - Pipes
 * Link      : https://codeforces.com/contest/1234/problem/C
 * Submission: https://codeforces.com/contest/1234/submission/205465750
 * Rating    : 1500   Tags: dp, implementation
 * Verdict   : Accepted (30 ms, 700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-12 (Practice)
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
    int i, j;
    i = j = 0;
    int pri, prj;
    pri = 0, prj = 0;
    bool f = true;
    int cnt = 0;
    while(f && j<n){
        // if(cnt++>n) break;
        // cout << i << " " << j << endl;
        // cout << pri << " " << prj << endl;
        int ch = s[i][j]-'0';
        // cout << ch << endl;
        bool type = false;
        if(ch>2) type = true;
        if(!i && !j){
            pri = i, prj = j;
            if(type){
                i=1;
            }
            else{
                j++;
            }
        }
        else{
            // pri = i, prj = j;
            if(j==prj){
                if(type){
                    prj = j, pri = i;
                    j++;
                }
                else{
                    f = false;
                    break;
                }
            }
            else{
                if(type){
                    pri = i, prj = j;
                    i = !i;
                }
                else{
                    prj = j, pri = i;
                    j++;
                }
            }
        }
    }
    // cout << i << " " << j << endl;
    if(!f || (i!=1 || j!=n)) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
