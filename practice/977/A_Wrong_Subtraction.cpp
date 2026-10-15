/*
 * Problem   : 977A - Wrong Subtraction
 * Link      : https://codeforces.com/contest/977/problem/A
 * Submission: https://codeforces.com/contest/977/submission/73862273
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int n, num;
    cin >> num >> n;
    while(n--)
    {
        if(num%10 != 0) num--;
        else num /= 10;
    }

    cout << num << endl;
    return 0;
}

