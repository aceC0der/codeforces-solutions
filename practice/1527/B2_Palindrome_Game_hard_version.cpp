/*
 * Problem   : 1527B2 - Palindrome Game (hard version)
 * Link      : https://codeforces.com/contest/1527/problem/B2
 * Submission: https://codeforces.com/contest/1527/submission/222183674
 * Rating    : 1900   Tags: constructive algorithms, games
 * Verdict   : Accepted (15 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-07 (Practice)
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

bool isPallindrome(string s){
    int n = s.size();
    int l=0, r=n-1;
    while(l<=r){
        if(s[l]!=s[r]) return false;
        l++;r--;
    }
    return true;
}

// int misMatch(string s){
//     int n = s.size();
//     int l=0, r=n-1;
//     while(l<=r){
//         if(s[l]!=s[r]) return false;
//         l++;r--;
//     }
//     return true;
// }

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt =0;
    rep(i, 0, n) cnt+=(s[i]=='0');
    if(!cnt || ((n&1) && (s[n/2]=='0' && cnt==2))){
        cout << "DRAW" << endl;
    }
    else if(isPallindrome(s)){
        if(cnt==1 || !(cnt&1)) cout << "BOB" << endl;
        else cout << "ALICE" << endl;
    }
    else{
        cout << "ALICE" << endl;
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
