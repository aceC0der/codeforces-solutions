/*
 * Problem   : 791A - Bear and Big Brother
 * Link      : https://codeforces.com/contest/791/problem/A
 * Submission: https://codeforces.com/contest/791/submission/73845639
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int lim, bob, year=0;
    cin >> lim >> bob;

    while(lim-bob<=0)
    {
        lim *= 3;
        bob *= 2;
        year++;
    }

    cout << year << endl;


    return 0;
}
