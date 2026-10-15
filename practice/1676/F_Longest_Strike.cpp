/*
 * Problem   : 1676F - Longest Strike
 * Link      : https://codeforces.com/contest/1676/problem/F
 * Submission: https://codeforces.com/contest/1676/submission/162969295
 * Rating    : 1300   Tags: data structures, greedy, implementation, sortings, two pointers
 * Verdict   : Accepted (233 ms, 12700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-06 (Practice)
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


int main()
{
    fios
    TestCases{
        int n, k;
        cin >> n >> k;
        set<int> s;
        map<int, int> m;
        rep(i, 0, n){
            int x;
            cin >> x;
            s.insert(x);
            m[x]++;
        }
        int l = -1, r = -1;
        int cl , cr;
        for(auto it: s){
            if(m[it]>=k){
                l = it;
                r = it;
                break;
            }
        }
        if(l == -1){
            cout << -1 << endl;
            continue;
        }
        auto prev = s.find(l);
        auto curr = prev;
        curr++;
        cl = l;
        cr = r;
        while(curr!=s.end()){
            // cout << cl <<" " << cr << endl;
            if(prev!=s.end()&&*curr==*prev+1 && m[*curr]>=k){
                prev = curr;
                cr = *curr;
            }
            else{
                prev = s.end();
            }
            if(prev==s.end() && m[*curr]>=k){
                cl = *curr;
                cr = *curr;
                prev = curr;
            }
            if(cr-cl>r-l){
                l = cl;
                r = cr;
            }
            curr++;
        }
        cout << l <<  " " << r <<endl;
        

    }
    return 0;
}
