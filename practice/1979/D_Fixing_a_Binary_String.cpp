/*
 * Problem   : 1979D - Fixing a Binary String
 * Link      : https://codeforces.com/contest/1979/problem/D
 * Submission: https://codeforces.com/contest/1979/submission/264511061
 * Rating    : 1800   Tags: bitmasks, brute force, constructive algorithms, dp, greedy, hashing, strings
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-07 (Practice)
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

bool isValid(string s, int k){
    char crr = s[0];
    int n = s.size();
    rep(i, 0, n){
        int cnt = 0;
        while(i<n && cnt<k){
            if(s[i]!=crr) return false;
            i++;
            cnt++;
        }
        crr =  ('1'-crr)+'0';
        i--;
    }
    return true;
}

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // cout << s << endl;
    if(isValid(s, k)){
        cout << n << endl;
        return;
    }
    string first = "", last = "";
    int cnt = 1;
    char crr = s[0];
    first+=s[0];
    rep(i, 1, n){
        if(cnt==k){
            crr = ('1'-crr)+'0';
            cnt = 0;
        }
        // cout << crr << "***" << endl;
        if(s[i]!=crr){

            if(cnt!=0) break;
            int t = i;
            while(i<n && s[i]!=crr){
                first+=s[i];
                cnt++;
                i++;
            }
            i = t;
            cnt = k;
            while(cnt-- && first.size()){
                first.pop_back();
            }
            break;
        }
        first+=s[i];
        cnt++;
    }
    int x = first.size();
    rep(i, x, n){
        last += s[i];
    }
    reverse(all(first));
    string fnl = last+first;
    // cout << first << " " << last << " " << fnl << endl;
    if(isValid(fnl, k)){
        cout << x << endl;
    }
    else cout << -1 << endl;
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
