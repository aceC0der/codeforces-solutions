/*
 * Problem   : 2003C - Turtle and Good Pairs
 * Link      : https://codeforces.com/contest/2003/problem/C
 * Submission: https://codeforces.com/contest/2003/submission/278243948
 * Rating    : 1200   Tags: constructive algorithms, greedy, sortings, strings
 * Verdict   : Accepted (62 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-08-26 (Practice)
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


int calc(string s){
    int n = s.size();
    int cnt = 0;
    rep(i, 0, n){
        rep(j, i+1, n){
            bool f = false;
            rep(k, i, j){
                if(s[i]==s[j]){
                    cnt++;
                    f = true;
                    break;
                }
                if(s[k]!=s[k+1] && (s[i]!=s[k] || s[k+1]!=s[j])) {
                    cnt++;
                    f = true;
                    break;
                }
            }
            // if(f) cout << s[j] << endl;
        }
        // cout << cnt << endl;
    }
    return cnt;
}


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    priority_queue<pi> freq;
    vi f(26, 0);
    rep(i, 0, n){
        int ch = s[i]-'a';
        f[ch]++;
    }
    rep(i, 0, 26){
        if(f[i]) freq.push({f[i], i});
    }

    string ans = "";
    pi t = freq.top();
    freq.pop();
    while(!freq.empty()){
        ans += 'a'+t.ss;
        t.ff--;
        pi top = freq.top();
        freq.pop();
        if(t.ff) freq.push(t);
        t = top;
    }
    while(t.ff--){
        ans += 'a'+t.ss;
    }
    // cout << calc(ans) << endl;
    cout << ans << endl;
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
