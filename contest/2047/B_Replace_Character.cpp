/*
 * Problem   : 2047B - Replace Character
 * Link      : https://codeforces.com/contest/2047/problem/B
 * Submission: https://codeforces.com/contest/2047/submission/294542316
 * Rating    : 900   Tags: brute force, combinatorics, greedy, strings
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-03 (Contest)
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

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi freq(27, 0);
    rep(i, 0, n){
        int x = s[i]-'a';
        freq[x]++;
    }
    int mx = 0;
    int idx = -1;
    int mn = INT_MAX;
    int midx = -1;
    rep(i, 0, 26){
        if(freq[i]>mx){
            mx = freq[i];
            idx = i;
        }
        if(freq[i]>0 && freq[i]<=mn){
            mn = freq[i];
            midx = i;
        }
    }
    // cout << mn << " " << mx << endl;
    // cout << midx << " " << idx << endl;
    if(idx==midx){
        cout << s << endl;
        return;
    }
    rep(i, 0, n){
        if((s[i]-'a')==midx){
            s[i] = 'a'+idx;
            break;
        }
    }
    cout << s << endl;
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
