/*
 * Problem   : 1717D - Madoka and The Corruption Scheme
 * Link      : https://codeforces.com/contest/1717/problem/D
 * Submission: https://codeforces.com/contest/1717/submission/172080591
 * Rating    : 1900   Tags: combinatorics, constructive algorithms, greedy, math
 * Verdict   : Accepted (31 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-14 (Practice)
 */
// A modular inverse based solution to
// compute nCr % p
#include <bits/stdc++.h>
using namespace std;

/* Iterative Function to calculate (x^y)%p
in O(log y) */

unsigned long long fac[200005+ 1];

unsigned long long power(unsigned long long x,
								int y, int p)
{
	unsigned long long res = 1; // Initialize result

	x = x % p; // Update x if it is more than or
	// equal to p

	while (y > 0)
	{
	
		// If y is odd, multiply x with result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res;
}

// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,
											int p)
{
	return power(n, p - 2, p);
}

// Returns nCr % p using Fermat's little
// theorem.
unsigned long long nCrModPFermat(unsigned long long n,
								int r, int p)
{
	// If n<r, then nCr should return 0
	if (n < r)
		return 0;
	// Base case
	if (r == 0)
		return 1;

	// Fill factorial array so that we
	// can find all factorial of r, n
	// and n-r
	return (fac[n] * modInverse(fac[r], p) % p
			* modInverse(fac[n - r], p) % p)
		% p;
}

// Driver program
int main()
{
	// p must be a prime greater than n.
	long long int n, r, p = 1000000007;
    cin >> n >> r;
    fac[0] = 1;
    long long int ans = 0;
    if(r>=n){
        ans = 1;
        for(int i=0; i<n; i++){
            ans *= 2;
            ans%=p;
        }
        cout << ans << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
    for(int i=0; i<=r; i++){
        ans += nCrModPFermat(n, i, p)%p;
        ans%=p;
    }
	cout << ans << endl;
	return 0;
}
