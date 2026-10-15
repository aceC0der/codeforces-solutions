/*
 * Problem   : 1766B - Notepad#
 * Link      : https://codeforces.com/contest/1766/problem/B
 * Submission: https://codeforces.com/contest/1766/submission/184922592
 * Rating    : 1000   Tags: implementation
 * Verdict   : Accepted (62 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-12 (Contest)
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
    string s;
    cin >> s;
    map<string, bool> freq;
    bool ok = false;
    rep(i, 1, n-1){
        string sub_s = "";
        sub_s+=s[i-1];
        sub_s+=s[i];
        string sub_s2 = "";
        sub_s2 += s[i];
        sub_s2 += s[i+1];
        if(freq[sub_s2]){
            ok = true;
            break;
        }
        freq[sub_s] = true;
    }
    cout << ((ok)? "YES" : "NO") << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
