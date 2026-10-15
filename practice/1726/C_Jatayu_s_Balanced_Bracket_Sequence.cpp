/*
 * Problem   : 1726C - Jatayu's Balanced Bracket Sequence
 * Link      : https://codeforces.com/contest/1726/problem/C
 * Submission: https://codeforces.com/contest/1726/submission/171260439
 * Rating    : 1300   Tags: data structures, dsu, graphs, greedy
 * Verdict   : Accepted (61 ms, 2400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-07 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
// #define pb push_back
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

int cnt;
// 
// int find(vi& par, int a){
//     if(par[a]==a) return a;
//     int res = find(par, par[a]);
//     return (par[a]=res);
// }
// void uniond(vi& par, int a, int b){
//     // cout << a+1 << " " << b+1 << endl;
//     int pa = find(par, a);
//     int pb = find(par, b);
//     if(pa!=pb){
//         par[pa] = pb;
//         // par[pb] = pa;
//         // cout << pa+1 << " " << pb+1 << "***" << endl;
//         // cout << cnt << endl;
//         cnt--;
//     }
// }


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    n*=2;
    cnt = n;
    vi par(n);
    rep(i, 0, n) par[i] = i;
    stack<pi> st;
    int empty = -1;
    int x = -1;
    vi freq(n, 0);
    int c = 0;
    rep(i, 0, n){
        if(s[i]=='('){
            c++;
        }
        else c--;
        freq[i] = c;
    }
    stack<int> brac;
    rep(i, 0, n){
        if(s[i]=='('){
            brac.push(i);
        }
        else{
            int t = brac.top();
            brac.pop();
            // uniond(par, t, i);
            cnt--;
            if(st.empty()) st.push({i, freq[i]});
            else{
                pi tt = st.top();
                // cout << tt.ss << "..." << freq[i] << endl;
                while(!st.empty() && tt.ss>freq[i]){
                    st.pop();
                    if(!st.empty()) tt = st.top();
                }
                if(st.empty()) st.push({i, freq[i]});
                else if(tt.ss == freq[i]) {
                    // uniond(par, tt.ff, i);
                    cnt--;
                }
                else st.push({i, freq[i]});
            }
        }
    }
    cout << cnt << endl;

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
