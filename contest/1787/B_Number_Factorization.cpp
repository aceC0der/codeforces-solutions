/*
 * Problem   : 1787B - Number Factorization
 * Link      : https://codeforces.com/contest/1787/problem/B
 * Submission: https://codeforces.com/contest/1787/submission/191137620
 * Rating    : 1100   Tags: greedy, math, number theory
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-29 (Contest)
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

void primeFactors(int n)
{
    // Print the number of 2s that divide n
    // cout << n << "****" << endl;
    int cnt = 0;
    ll fact = 1;
    vector<pi> vp;
    while (n % 2 == 0)
    {
        cnt++;
        // cout << 2 << " ";
        n = n/2;
    }
    // cout << endl;
    if(cnt){
        fact = 2;
        vp.pb({cnt, 2});
    } 
 
    ll ans = 0;
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        cnt=0;
        while (n % i == 0)
        {
            cnt++;
            // cout << i << " ";
            n = n/i;
        }
        if(cnt){
            fact*=i;
            vp.pb({cnt, i});
        } 
    }
    // cout << endl;
    if(n>2){
        vp.pb({1, n});
        fact*=n;
    }
    sort(all(vp));
    // rep(i, 0, vp.size()){
    //     cout << vp[i].ss << " " << vp[i].ff << endl;
    // }
    // cout <<"****" << endl;
    int mn = 0;
    rep(i, 0, vp.size()){
        // cout << ans << " " << fact << endl;
        ans += (vp[i].ff-mn) * fact;
        mn = vp[i].ff;
        while(i<vp.size() && vp[i].ff==mn){
            fact/=vp[i].ss;
            i++;
        }
        if(i<vp.size()) i--;
    }
    cout << ans << endl;
}

void solve(){
    int n;
    cin >> n;
    primeFactors(n);
    // cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
