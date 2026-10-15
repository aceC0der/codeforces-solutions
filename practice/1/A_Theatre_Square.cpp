/*
 * Problem   : 1A - Theatre Square
 * Link      : https://codeforces.com/contest/1/problem/A
 * Submission: https://codeforces.com/contest/1/submission/67666993
 * Rating    : 1000   Tags: math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2019-12-27 (Practice)
 */
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    
    double N, M;
    N = ceil((double)n/a);
    M = ceil((double)m/a);
    
    cout << (long long int)N*(long long int)M<<endl;
    
    
    return 0;
}
