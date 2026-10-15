/*
 * Problem   : 1714D - Color with Occurrences
 * Link      : https://codeforces.com/contest/1714/problem/D
 * Submission: https://codeforces.com/contest/1714/submission/225862799
 * Rating    : 1600   Tags: brute force, data structures, dp, greedy, strings
 * Verdict   : Accepted (15 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-30 (Practice)
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

int ans = 0;
bool ok = true;

void Find(int a, int b, string &t, vector<string>&str, vector<pair<int, int>>&match){
    int Max = 0, id = -1, pos = -1;
    for(int i = a; i <= b; i++){
        for(int j = 0; j < str.size(); j++){
            string s = str[j];
            if(i + s.size() > t.size() || i + s.size() <= b) continue;
            if(t.substr(i, s.size()) == s) {
                if(i + s.size() > Max){
                    Max = i + s.size();
                    id = j;
                    pos = i;
                }
            }
        }
    }
    if(id == -1) {
        ok = false;
        return;
    }
    else{
        match.emplace_back(id, pos);
        ans++;
        if(Max == t.size()) return;
        else Find(max(pos + 1, b +1), Max, t, str, match);
    }
}


void solve(){
    ans = 0;
    ok = true;

    string t;
    cin >> t;
    int n;
    cin >> n;

    vector<string>s(n);
    vector<pair<int, int>>match;

    rep(i, 0, n) {
        cin >> s[i];
    }

    Find(0, 0, t, s, match);
    if(!ok) cout << "-1\n";
    else{
        cout << ans << endl;
        for(auto &p : match) cout << p.first + 1 << ' ' << p.second + 1 << endl;
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
