/*
 * Problem   : 580A - Kefa and First Steps
 * Link      : https://codeforces.com/contest/580/problem/A
 * Submission: https://codeforces.com/contest/580/submission/73855951
 * Rating    : 900   Tags: brute force, dp, implementation
 * Verdict   : Accepted (202 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int n, a, b=0, c=0, cm=0;
    cin >> n;
    while(n--)
    {
        cin >> a;
        if(a>=b) c++;
        else c=1;
        b = a;
        if(c>=cm) cm=c;
    }

    cout << cm << endl;

    return 0;
}
