/*
 * Problem   : 1697D - Guess The String
 * Link      : https://codeforces.com/contest/1697/problem/D
 * Submission: https://codeforces.com/contest/1697/submission/160453900
 * Rating    : 1900   Tags: binary search, constructive algorithms, interactive
 * Verdict   : Accepted (62 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-13 (Practice)
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

char query(int i){
    i++;
    cout << "? 1 " << i << endl;
    string s;
    cin >> s;
    return s[0];
}

int query(int l, int r){
    l++;
    r++;
    cout << "? 2 " << l << " " <<  r << endl;
    int n;
    cin >> n;
    return n;
}

void answer(string s){
    cout << "! " << s << endl;
}

int main()
{
    // fios
    int n;
    // cout << "*" << endl;
    cin >> n;
    string s;
    s.push_back(query(0));
    
    set<int> rel;
    rel.insert(0);
    rep(i, 1, n){
        vector<int> v(all(rel));
        int L = 0, R = v.size()-1;
        int ans = -1;
        while(L<=R){
            int m = (L+R)/2;
            if(query(v[m], i)==v.size()-m){
                ans = m;
                L = m+1;
            }
            else{
                R = m-1;
            }
        }
        if(ans == -1){
            s.push_back(query(i));
        }
        else{
            s.push_back(s[v[ans]]);
            rel.erase(v[ans]);
        }
        rel.insert(i);
    }
    answer(s);

    return 0;
}
