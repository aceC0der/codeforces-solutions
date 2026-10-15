/*
 * Problem   : 1620D - Exact Change
 * Link      : https://codeforces.com/contest/1620/problem/D
 * Submission: https://codeforces.com/contest/1620/submission/155372952
 * Rating    : 2000   Tags: brute force, constructive algorithms, greedy
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-30 (Practice)
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
        ll n; cin>> n;
        ll mx=0, m1=0, m2=0, m3=0, f, mn=100000000, mx3=0;
        for(ll i=0; i<n; i++){
            cin>> f;
            if(f%3==0) m3++;
            if(f%3==1) m1++;
            if(f%3==2) m2++;
            mx=max(mx,f);
            mn=min(mn,f);
            if(f%3==0) mx3=max(mx3,f);
        }
        ll ans;
        if(mx%3==0){
            ans=mx/3;
            if(m1 || m2) ans++;
        }
        else if(mx%3==1){
            ans=(mx+3)/3;
            if((mn==1 && mx!=1 && m2!=0)||(mx3>=3 && mx-mx3==1 && m2!=0)) ans++;
        }
        else if(mx%3==2){
            ans=(mx+3)/3;
            if(m1) ans++;
        }
        cout<< ans<< endl;
    }
    return 0;
}
