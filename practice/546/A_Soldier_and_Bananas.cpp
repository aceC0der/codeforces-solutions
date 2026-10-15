/*
 * Problem   : 546A - Soldier and Bananas
 * Link      : https://codeforces.com/contest/546/problem/A
 * Submission: https://codeforces.com/contest/546/submission/73434369
 * Rating    : 800   Tags: brute force, implementation, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-17 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int k,w;
    unsigned long long n, cost=0;
    cin >> k >> n >> w;

    for(int i=1; i<=w; i++)
    {
        cost += i*k;
    }
    if(cost>n)
        cout << cost-n << endl;
    else
        cout << "0" << endl;


    return 0;
}
