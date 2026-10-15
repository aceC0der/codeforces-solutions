/*
 * Problem   : 116A - Tram
 * Link      : https://codeforces.com/contest/116/problem/A
 * Submission: https://codeforces.com/contest/116/submission/73434926
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-17 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int n, ex, en, maxi=0, sum=0;
    cin >> n;
    while(n--)
    {
        cin >> ex >> en;
        sum += en-ex;
        if(maxi<sum) maxi=sum;
    }

    cout << maxi << endl;

    return 0;
}
