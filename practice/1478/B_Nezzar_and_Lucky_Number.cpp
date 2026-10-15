/*
 * Problem   : 1478B - Nezzar and Lucky Number
 * Link      : https://codeforces.com/contest/1478/problem/B
 * Submission: https://codeforces.com/contest/1478/submission/222119068
 * Rating    : 1100   Tags: brute force, dp, greedy, math
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-06 (Practice)
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
bool chk(int num, int d){
    while(num){
        int digit = num%10;
        num/=10;
        if(digit==d) return true;
    }
    return false;
}
int arr[10][10];
void test(){
    rep(i, 2, 10){
        // cout << i << " : ";
        rep(j, 1, i){
            int cnt = 1;
            while(!chk(cnt*i+j, i)){
                cnt++;
            }
            arr[i][j] = cnt*i+j;
        }
        // cout << endl;
    }
}

void answer(int n, int d){
    if(chk(n, d) || n%d==0 || n>=arr[d][n%d]){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

void solve(){
    // test();
    int nn, d;
    cin >> nn >> d;
    while(nn--){
        int n;
        cin >> n;
        answer(n, d);
    }
    
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    test();
    TestCases{
        solve();
    }
    return 0;
}
