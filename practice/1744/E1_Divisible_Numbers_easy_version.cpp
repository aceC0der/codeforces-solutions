/*
 * Problem   : 1744E1 - Divisible Numbers (easy version)
 * Link      : https://codeforces.com/contest/1744/problem/E1
 * Submission: https://codeforces.com/contest/1744/submission/178300938
 * Rating    : 1500   Tags: brute force, math, number theory
 * Verdict   : Accepted (717 ms, 600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-29 (Practice)
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
#define MAX 100005

bool v[MAX];
int len, sp[MAX];

void Sieve(){
	for (int i = 2; i < MAX; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (ll i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (ll j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    map<int, int> m;
    ll rest = 1;
    map<int, int> rm;
    ll x=a, y = b;
    while(x!=1){
        m[sp[x]]++;
        x=x/sp[x];
    }
    while(y!=1){
        m[sp[y]]++;
        y=y/sp[y];
    }
    // cout << "***" << endl;
    // for(auto j : m){
    //     cout << j.ff << " " << j.ss << endl;
    // }
    rep(i, a+1, c+1){
        rest = 1;
        rm = m;
        ll k = i;
        while(k!=1){
            if(rm[sp[k]]) rm[sp[k]]--;
            k/=sp[k];
        }
        for(auto j : rm){
            if(j.ss>0) rest*=(ll)pow(j.ff, j.ss);
        }
        x = (b/rest)+1;
        ll r = rest;
        rest = x*rest;
        if(rest<=d){
            cout << i << " " << rest << endl;
            return;
        }
    }
    cout << "-1 -1" << endl;
    
}

int main()
{
    fios
    Sieve();
    TestCases{
        solve();
    }
    return 0;
}
