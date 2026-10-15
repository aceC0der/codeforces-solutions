/*
 * Problem   : 1779C - Least Prefix Sum
 * Link      : https://codeforces.com/contest/1779/problem/C
 * Submission: https://codeforces.com/contest/1779/submission/187848059
 * Rating    : 1600   Tags: data structures, greedy
 * Verdict   : Accepted (78 ms, 4000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-04 (Practice)
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
    ll n, m;
    cin >> n >> m;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    int cnt = 0;
    ll sum = 0;
    priority_queue<int> p1;
    for(int i=m;i<n;i++){
        p1.push(-a[i]);
        sum+=a[i];
        if(sum<0){
            int x=p1.top();
            sum=sum+x+x;
            p1.pop();
            cnt++;
        }
    }
    priority_queue<int> p2;
    sum=0;
    sum+=a[m-1];
    p2.push(a[m-1]);
    for(int i=m-2;i>=0;i--){
        if(sum>0){
            int x=p2.top();
            sum=sum-x-x;
            p2.pop();
            cnt++;
        }
        p2.push(a[i]);
        sum+=a[i];
        
    }
    sum = 0;
    // rep(i, 0, n){
    //     sum+=a[i];
    //     cout << sum << " ";
    //     if(i==m-1) cout << "* ";
    // }
    // cout << endl;
    cout << cnt << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
