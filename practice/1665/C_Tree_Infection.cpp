/*
 * Problem   : 1665C - Tree Infection
 * Link      : https://codeforces.com/contest/1665/problem/C
 * Submission: https://codeforces.com/contest/1665/submission/164111805
 * Rating    : 1600   Tags: binary search, greedy, sortings, trees
 * Verdict   : Accepted (78 ms, 8200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-14 (Practice)
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
        int n;
        cin >> n;
        vi a(n);
        vi afreq(n, 0);
        vi adj[n];
        rep(i, 0, n-1){
            cin >> a[i];
            a[i]--;
            afreq[a[i]]++;
            adj[a[i]].pb(i);
        }
        priority_queue<int> pq, pq2;
        rep(i, 0, n){
            if(afreq[i]>0)
                pq.push(afreq[i]);
        }
        pq.push(1);
        int ans = pq.size();
        int k = ans;
        while(!pq.empty()){
            int t = pq.top();
            pq.pop();
            if(t-k>0) pq2.push(t-k);
            k--;
        }
        stack<int> tmp;
        while(!pq2.empty()){
            if(pq2.top()-2>0) tmp.push(pq2.top()-2);
            pq2.pop();
            while(!pq2.empty()){
                if(pq2.top()-1>0) tmp.push(pq2.top()-1);
                pq2.pop();
            }
            while(!tmp.empty()){
                pq2.push(tmp.top());
                tmp.pop();
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
