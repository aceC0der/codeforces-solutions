/*
 * Problem   : 1797C - Li Hua and Chess
 * Link      : https://codeforces.com/contest/1797/problem/C
 * Submission: https://codeforces.com/contest/1797/submission/209816230
 * Rating    : 1600   Tags: constructive algorithms, greedy, interactive
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-16 (Practice)
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

int query(int r, int c){
    cout << "? " << r << " " << c << endl;
    cout.flush();
    int x;
    cin >> x;
    return x;
}

void answer(int r, int c){
    cout << "! " << r << " " << c << endl;
    cout.flush();
}

void invaildCell(int r, int c){
    if(r<=0){
        int x = query(1, c);
        answer(1+x, c);
    }
    else{
        int x = query(r, 1);
        answer(r, 1+x);
    }
}

// void equalCell(int r, int c){
//     int x = query(r, c);
//     if(x){
//         answer(c, r);
//     }
//     else{
//         answer(r, c);
//     }
// }

// void extraCell(int a, int r, int c){
//     int x = query(a, r);
//     if(x){

//     }
// }

void solve(){
    int n, m;
    cin >> n >> m;
    int q1 = query(1, 1);
    // int qn = query(n, m);
    if(1+q1>n){
        invaildCell(-1, 1+q1);
    }
    else if(1+q1>m){
        invaildCell(1+q1, -1);
    }
    else{
        int p = query(1, q1+1);
        int q = query(q1+1, 1);
        if(p==q){
            answer(q1+1, q1+1);
        }
        else if(p<q){
            answer(1+p, q1+1);
        }
        else{
            answer(q1+1, 1+q);
        }
    }
    
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // fios
    TestCases{
        solve();
    }
    return 0;
}
