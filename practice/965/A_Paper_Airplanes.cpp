/*
 * Problem   : 965A - Paper Airplanes
 * Link      : https://codeforces.com/contest/965/problem/A
 * Submission: https://codeforces.com/contest/965/submission/76031916
 * Rating    : 800   Tags: math
 * Verdict   : Accepted (31 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-10 (Practice)
 */
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double n, k, s, p, ans;
    cin >> k >> n >> s >> p;

    ans = ceil((k*ceil(n/s))/p);


    cout << (int)ans << endl;

    return 0;
}
