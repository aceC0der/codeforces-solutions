/*
 * Problem   : 1932D - Card Game
 * Link      : https://codeforces.com/contest/1932/problem/D
 * Submission: https://codeforces.com/contest/1932/submission/247059433
 * Rating    : 1400   Tags: greedy, implementation
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-02-18 (Contest)
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

string makeCard(int i, char d){
    char ch = '0'+i;
    string s = "";
    s += ch;
    s += d;
    return s;
}

void solve(){
    int n;
    cin >> n;
    n*=2;
    char trump;
    cin >> trump;
    vector<string> cards(n);
    rep(i, 0, n) cin >> cards[i];
    map<char, vi> deck;
    rep(i, 0, n){
        deck[cards[i][1]].pb(cards[i][0]-'0');
    }
    vector<pair<string, string>> ans;
    vector<string> xtra;
    for(auto it: deck){
        // cout << it.ff << ": ";
        if(it.ff==trump) continue;

        sort(all(it.ss));
        for(int i=0; i<it.ss.size(); i++){
            if(i+1>=it.ss.size()){
                xtra.pb(makeCard(it.ss[i], it.ff));
                continue;
            }
            ans.pb({makeCard(it.ss[i], it.ff), makeCard(it.ss[i+1], it.ff)});
            i++;
        }
    }
    vector<int> tcards = deck[trump];
    sort(all(tcards), greater<int>());
    if(xtra.size()>tcards.size()){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    while(xtra.size()<tcards.size()){
        xtra.pb(makeCard(tcards.back(), trump));
        tcards.pop_back();
    }
    int sz = tcards.size();
    rep(i, 0, sz){
        ans.pb({xtra[i], makeCard(tcards[i], trump)});
    }
    for(auto mv: ans){
        cout << mv.ff << " " << mv.ss << endl;
    }

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
