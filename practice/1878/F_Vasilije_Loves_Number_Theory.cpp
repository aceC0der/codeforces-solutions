/*
 * Problem   : 1878F - Vasilije Loves Number Theory
 * Link      : https://codeforces.com/contest/1878/problem/F
 * Submission: https://codeforces.com/contest/1878/submission/225551670
 * Rating    : 1900   Tags: brute force, math, number theory
 * Verdict   : Accepted (30 ms, 4100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-27 (Practice)
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

void div_factorize(ll n, map<int, int>& fact, vi& spf){
    while(n!=1){
        int tspf = spf[n];
        int cnt = 0;
        while(n%tspf==0){
            cnt++;
            n/=tspf;
        }
        fact[tspf] += cnt;
    }
}

void factorize(ll n, map<int, int>& fact, vi& spf, map<int, int>& div_fact){
    ll nod = 1;
    while(n!=1){
        int tspf = spf[n];
        int cnt = 0;
        while(n%tspf==0){
            cnt++;
            n/=tspf;
        }
        fact[tspf] += cnt;
        // div_factorize(fact[tspf]+1, div_fact, spf);
    }
    for(auto it: fact){
        div_factorize(it.ss+1, div_fact, spf);
    }
}



bool isDivisible(map<int, int>& a, map<int, int>& b){
    for(auto it: b){
        if(a[it.ff]<it.ss) return false;
    }
    return true;
}

void solve(vi& spf){
    ll n;
    cin >> n;
    map<int, int> base_factors, base_div_factors;
    factorize(n, base_factors, spf, base_div_factors);
    int q;
    cin >> q;
    map<int, int> crnt_factors = base_factors;
    while(q--){
        ll qn, x;
        cin >> qn;
        if(qn==1){
            cin >> x;
            map<int, int> crnt_div_factors;
            factorize(x, crnt_factors, spf, crnt_div_factors);
            // for(auto it: crnt_factors){
            //     cout << it.ff << " " << it.ss << endl;
            // }
            // cout << "***********" << endl;
            // // ll nod = get_number_of_divisors(crnt_factors);
            
            // for(auto it: crnt_div_factors){
            //     cout << it.ff << " " << it.ss << endl;
            // }
            if(!isDivisible(crnt_factors, crnt_div_factors)){
                cout << "NO" << endl;
                // return;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else{
            // crnt_div_factors = base_div_factors;
            crnt_factors = base_factors;
        }
    }
    cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n = 1000005;
    vector<int> spf(n);
    rep(i, 0, n+1) spf[i] = i;
     
    for (int p = 2; p * p <= n; p++)
     {
         if (spf[p] == p)
         {
             for (int i = p * p; i <= n; i += p)
                 spf[i] = p;
         }
     }

    fios
    TestCases{
        solve(spf);
    }
    return 0;
}
