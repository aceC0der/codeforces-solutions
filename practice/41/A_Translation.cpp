/*
 * Problem   : 41A - Translation
 * Link      : https://codeforces.com/contest/41/problem/A
 * Submission: https://codeforces.com/contest/41/submission/73845898
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (60 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    reverse(str2.begin(), str2.end());
    if(str1==str2) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
