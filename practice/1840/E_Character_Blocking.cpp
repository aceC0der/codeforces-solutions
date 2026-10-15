/*
 * Problem   : 1840E - Character Blocking
 * Link      : https://codeforces.com/contest/1840/problem/E
 * Submission: https://codeforces.com/contest/1840/submission/208869201
 * Rating    : 1600   Tags: data structures, hashing, implementation
 * Verdict   : Accepted (217 ms, 1500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-07 (Practice)
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
    string s[2];
    cin >> s[0] >> s[1];
    int t, qq;
    cin >> t >> qq;
    int bad = 0;
    rep(i, 0, s[0].size()){
        bad+=(s[0][i]!=s[1][i]);
    }
    int i = 1;
    queue<pi> q;
    while(qq--){
        int type;
        cin >> type;
        // cout << bad << endl;
        while(!q.empty() && q.front().ff<=i){
            // cout << "*" << endl;
            if(s[0][q.front().ss]!=s[1][q.front().ss]) bad++;
            q.pop();
        }
        if(type==1){
            int pos;
            cin >> pos;
            pos--;
            bad-=(s[0][pos]!=s[1][pos]);
            q.push({i+t, pos});
        }
        else if(type==2){
            int t1, t2;
            int p1, p2;
            cin >> t1 >> p1 >> t2 >> p2;
            t1--;t2--;p1--;p2--;
            int b1 = 0, b2 = 0;
            b1 += (s[t1][p1]!=s[!t1][p1]) + (s[t2][p2]!=s[!t2][p2]);
            swap(s[t1][p1], s[t2][p2]);
            b2 += (s[t1][p1]!=s[!t1][p1]) + (s[t2][p2]!=s[!t2][p2]);
            bad += (b2-b1);
        }
        else{
            cout << (!bad ? "YES" : "NO") << endl;
        }
        i++;
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
