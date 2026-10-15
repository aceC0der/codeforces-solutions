/*
 * Problem   : 1823C - Strongly Composite
 * Link      : https://codeforces.com/contest/1823/problem/C
 * Submission: https://codeforces.com/contest/1823/submission/205254037
 * Rating    : 1300   Tags: greedy, math, number theory
 * Verdict   : Accepted (234 ms, 39300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-09 (Practice)
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

// C++ program to find prime factorization of a
// number n in O(Log n) time with precomputation
// allowed.
#include "bits/stdc++.h"
using namespace std;

#define MAXN 10000001

// stores smallest prime factor for every number
vi spf(MAXN);

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
	spf[1] = 1;
	for (int i = 2; i < MAXN; i++)

		// marking smallest prime factor for every
		// number to be itself.
		spf[i] = i;

	// separately marking spf for every even
	// number as 2
	for (int i = 4; i < MAXN; i += 2)
		spf[i] = 2;

	for (int i = 3; i * i < MAXN; i++) {
		// checking if i is prime
		if (spf[i] == i) {
			// marking SPF for all numbers divisible by i
			for (int j = i * i; j < MAXN; j += i)

				// marking spf[j] if it is not
				// previously marked
				if (spf[j] == j)
					spf[j] = i;
		}
	}
}

void getFactorization(int x, map<int, int>& pfs)
{
	vector<int> ret;
    int y = x;
	while (x != 1) {
		ret.push_back(spf[x]);
		x = x / spf[x];
	}
	rep(i, 0, ret.size()){
        int cnt = 0;
        while(y%ret[i]==0){
            y/=ret[i];
            cnt++;
        }
        pfs[ret[i]]++;
    }
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    map<int, int> pfs;
    rep(i, 0, n){
        getFactorization(a[i], pfs);
    }
    int k = 0;
    int cnt = 0;
    for(auto it: pfs){
        cnt += (it.second&1);
        k += it.second/2;
    }
    k += cnt/3;
    cout << k << endl;
}

int main()
{
    fios
    sieve();
    TestCases{
        solve();
    }
    return 0;
}
