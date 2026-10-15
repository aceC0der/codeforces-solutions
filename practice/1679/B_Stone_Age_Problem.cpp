/*
 * Problem   : 1679B - Stone Age Problem
 * Link      : https://codeforces.com/contest/1679/problem/B
 * Submission: https://codeforces.com/contest/1679/submission/157451873
 * Rating    : 1200   Tags: data structures, implementation
 * Verdict   : Accepted (327 ms, 2800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-17 (Practice)
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

    ll n, q;
    cin >> n >> q;
    // cout << n << " " <<  q << endl;
    ll sum = 0;
    vl arr(n);
    rep(i, 0, n){
        cin >> arr[i];
        sum+=arr[i];
    }
    ll t2 = -1;
    set<int> idx;
    while(q--){
        int t;
        cin >> t;
        if(t==2){
            int x;
            cin >> x;
            t2 = x;
            sum = x*n;
            idx.clear();
            // cout << x*n << endl;
        }
        else{
            int p, x;
            cin >> p >> x;
            if(t2<0 || idx.find(p)!=idx.end()){
                sum -= arr[p-1];
                sum += x;
                arr[p-1] = x;
            }
            else{
                idx.insert(p);
                sum -= t2;
                sum += x;
                arr[p-1] = x;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
