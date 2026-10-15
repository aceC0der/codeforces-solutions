/*
 * Problem   : 1647C - Madoka and Childish Pranks
 * Link      : https://codeforces.com/contest/1647/problem/C
 * Submission: https://codeforces.com/contest/1647/submission/149383652
 * Rating    : 1300   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (46 ms, 700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-12 (Practice)
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

class corr{
    public:
        int x1, y1, x2, y2;
};

int main()
{
    fios
    TestCases{
        int n, m;
        cin >> n >> m;
        string str[n+1];

        string s[n+1];
        for(int i=0; i<n; i++){
            cin >> str[i];
        }
        bool flag = true;
        if(str[0][0]=='1') {
            cout << -1 << endl;
            continue;
        }
        for(int i=0; i<n-1; i++){
            int cnt = 0;
            if(str[i][0]=='1') cnt++;
            if(str[i+1][0]=='1') cnt++;
            if(cnt==2) {
                flag = false;
                break;
            } 
        }
        vector<corr> ans;
        for(int i=0; i<n; i++){
            for(int j=m-1; j>=1; j--){
                if(str[i][j]=='1'){
                    corr a;
                    a.x1 = i+1;
                    a.y1 = j;
                    a.x2 = i+1;
                    a.y2 = j+1;
                    ans.pb(a);
                    // cout << i+1 << " " << j+1 << endl;
                    // cout << a.x2 << " " << a.y2 << endl;
                }
            }
        }
        for(int i=n-1; i>=1; i--){
            if(str[i][0]=='1'){
                corr a;
                a.x1 = i;
                a.y1 = 1;
                a.x2 = i+1;
                a.y2 = 1;
                ans.pb(a);
            }
        }
        int sz = ans.size();
        cout << sz << endl;
        for(int i=0; i<sz; i++){
            cout << ans[i].x1 << " " << ans[i].y1 << " " << ans[i].x2 << " " << ans[i].y2 << endl;
        }
    }
    return 0;
}
