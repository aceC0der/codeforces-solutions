/*
 * Problem   : 1741A - Compare T-Shirt Sizes
 * Link      : https://codeforces.com/contest/1741/problem/A
 * Submission: https://codeforces.com/contest/1741/submission/189585327
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-18 (Practice)
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
    string a, b;
    cin >> a >> b;
    map<char, int> m;
    m['S'] = 0;
    m['M'] = 1;
    m['L'] = 2;
    if(a[a.size()-1]==b[b.size()-1]){
        if(a.size()>b.size()){
            if(a[a.size()-1]=='S') cout << "<" << endl;
            else cout << ">" << endl;
        }
        else if(a.size()<b.size()){
            if(a[a.size()-1]=='S') cout << ">" << endl;
            else cout << "<" << endl;
        }
        else cout << "=" << endl;
    }
    else if(m[a[a.size()-1]]> m[b[b.size()-1]]) cout << ">" << endl;
    else cout << "<" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
