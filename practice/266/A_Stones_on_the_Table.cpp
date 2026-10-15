/*
 * Problem   : 266A - Stones on the Table
 * Link      : https://codeforces.com/contest/266/problem/A
 * Submission: https://codeforces.com/contest/266/submission/73422483
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-16 (Practice)
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char str[105];
    cin>>str;

    int Count = 0;
    for(int i=0; i<n-1; i++)
    {
        if(str[i]==str[i+1]) Count++;
    }
    cout << Count << endl;

    return 0;
}
