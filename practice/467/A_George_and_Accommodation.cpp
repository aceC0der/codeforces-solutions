/*
 * Problem   : 467A - George and Accommodation
 * Link      : https://codeforces.com/contest/467/problem/A
 * Submission: https://codeforces.com/contest/467/submission/73845438
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int n, p, q, c=0;
    cin >> n;
    while(n--)
    {
        cin >> p >> q;
        if(q-p>=2)
        {
            c++;
        }
    }
    cout << c << endl;
}
