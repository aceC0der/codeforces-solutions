/*
 * Problem   : 1846B - Rudolph and Tic-Tac-Toe
 * Link      : https://codeforces.com/contest/1846/problem/B
 * Submission: https://codeforces.com/contest/1846/submission/212865177
 * Rating    : 800   Tags: brute force, implementation, strings
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-07-08 (Practice)
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

bool chker(vector<string>& str, char mark){
    rep(i, 0, 3){
        bool f = true;
        rep(j, 0, 3){
            if(str[i][j]!=mark){
                f = false;
                break;
            }
        }
        if(f) return true;
    }
    rep(i, 0, 3){
        bool f = true;
        rep(j, 0, 3){
            if(str[j][i]!=mark){
                f = false;
                break;
            }
        }
        if(f) return true;
    }
    bool f = true;
    rep(i, 0, 3){
        if(str[i][i]!=mark){
            f = false;
            break;
        }
    }
    if(f) return true;
    if(str[2][0]==mark && str[1][1]==mark && str[0][2]==mark){
        return true;
    }
    return false;
}


void solve(){
    vector<string> str(3);
    rep(i, 0, 3) cin >> str[i];
    if(chker(str, 'X')) cout << "X" << endl;
    else if(chker(str, 'O')) cout <<"O" << endl;
    else if(chker(str, '+')) cout << "+" << endl;
    else cout << "DRAW" << endl;
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
