/*
 * Problem   : 1886C - Decreasing String
 * Link      : https://codeforces.com/contest/1886/problem/C
 * Submission: https://codeforces.com/contest/1886/submission/227536429
 * Rating    : 1600   Tags: implementation, strings
 * Verdict   : Accepted (31 ms, 6500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-10-10 (Practice)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/

void solve(){
    string s;
    cin >> s;
    ll pos, n = s.size();
    cin >> pos;
    vl freq(35);
    for(auto ch: s){
        int i = ch-'a';
        freq[i]++;
    }
    ll cnt = 0;
    ll val = n;
    while(pos>val){
        cnt++;
        n--;
        val += n;
    }
    val -= n;
    pos = pos-val;
    ll x = 0;
    ll idx = 0;
    // rep(i, 0, 30) cout << freq[i] << " "; cout << endl;
    pre(i, 29, 0){
        x += freq[i];
        if(x>cnt){
            idx = i;
            break;
        }
    }
    x-=freq[idx];
    x = cnt-x;
    string new_str = "";
    n = s.size();
    n = s.size();
    vector<bool> visited(n+10, true);
    int i=0, j=1;
    vi prev(n+10);
    rep(i, 0, n+10){
        prev[i] = i-1;
        // next[i] = i+1;
    }
    // rep(i, 0, n) cout << prev[i] << " " ; cout << endl;
    while(j<n){
        // cout << i << " " << j << endl;
        // cout << s[i] << " " << s[j] << endl;
        if(!cnt){
            break;
        }
        if(s[i]<=s[j]){
            prev[j] = i;
            i = j;
            // j = next[j];
            j++;
        }
        else{
            visited[i] = false;
            cnt--;
            // cout << i << " ";
            i = prev[i];
            // cout << i << "**" << endl;
            if(i==-1){
                prev[j] = i;
                i = j;
                // j = next[j];
                j++;
            }
        }
    }
    rep(i, 0, n){
        if(visited[i]) new_str += s[i];
    }
    // rep(i, 0, n){
    //     int j = s[i]-'a';
    //     if(j<idx){
    //         new_str += s[i];
    //     }
    //     else if(j==idx){
    //         if(x) x--;
    //         else new_str += s[i];
    //     }
    // }
    pos--;
    // cout << new_str << " " << new_str[pos] << endl;
    // cout << (char)(idx+'a') << " " << pos+1 << " " << cnt << " " < << endl;
    cout << new_str[pos] ;
    // cout << endl;

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
