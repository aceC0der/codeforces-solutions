/*
 * Problem   : 1097A - Gennady and a Card Game
 * Link      : https://codeforces.com/contest/1097/problem/A
 * Submission: https://codeforces.com/contest/1097/submission/73260344
 * Rating    : 800   Tags: brute force, implementation
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-14 (Practice)
 */
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char str[2], str1[16];
    gets(str);
    gets(str1);
    //printf("%s", str1);

    if(str[0]==str1[0]||str[0]==str1[3]||str[0]==str1[6]||str[0]==str1[9]||str[0]==str1[12])
        cout << "YES\n";
    else if(str[1]==str1[1]||str[1]==str1[4]||str[1]==str1[7]||str[1]==str1[10]||str[1]==str1[13])
        cout << "YES\n";
    else
        cout << "NO\n";



    return 0;
}
