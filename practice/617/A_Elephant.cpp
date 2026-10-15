/*
 * Problem   : 617A - Elephant
 * Link      : https://codeforces.com/contest/617/problem/A
 * Submission: https://codeforces.com/contest/617/submission/73439156
 * Rating    : 800   Tags: math
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-17 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int n, steps;
    cin >> n;
    steps = n/5;
    if(n%5 != 0) steps++;
    cout << steps << endl;

    return 0;
}
