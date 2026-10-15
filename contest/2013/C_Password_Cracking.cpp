/*
 * Problem   : 2013C - Password Cracking
 * Link      : https://codeforces.com/contest/2013/problem/C
 * Submission: https://codeforces.com/contest/2013/submission/282053061
 * Rating    : 1400   Tags: constructive algorithms, interactive, strings
 * Verdict   : Accepted (171 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-20 (Contest)
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

int query(string& t){
    cout << "? " << t << endl;
    cout.flush();
    int x;
    cin >> x;
    return x;
}

void solve(){
    int n;
    cin >> n;
    string s = "";
    bool f = true;
    int sz = s.size();
    int cnt = 0;
    while(sz<n){
        if(f){
            string tmp = s+'0';
            int v = query(tmp);
            cnt++;
            if(v==1){
                s += '0';
                sz = s.size();
                continue;
            }
            tmp[sz] = '1';
            v = query(tmp);
            cnt++;
            if(v==1){
                s += '1';
                sz = s.size();
                continue;
            }
            f = false;
        }
        else{
            string tmp = '0'+s;
            int v = query(tmp);
            cnt++;
            if(!v){
                tmp[0] = '1';
            }
            s = tmp;
            sz = s.size();
        }
    }
    // cout << cnt << "******" << endl;
    cout << "! " << s << endl;
}

int main()
{
    // #ifndef ONLINE_JUDGE1
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    // fios
    TestCases{
        solve();
    }
    return 0;
}
