/*
 * Problem   : 281A - Word Capitalization
 * Link      : https://codeforces.com/contest/281/problem/A
 * Submission: https://codeforces.com/contest/281/submission/73379392
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-16 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    char str[1005];
    cin >> str;

    if(str[0]>=97) str[0]-=32;

    cout << str << endl;

    return 0;
}
