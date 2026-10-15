/*
 * Problem   : 867A - Between the Offices
 * Link      : https://codeforces.com/contest/867/problem/A
 * Submission: https://codeforces.com/contest/867/submission/73260639
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-14 (Practice)
 */
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    int n, sf=0, fs=0;
    char str[102];
    cin >> n;
    cin >> str;

    for(int i=0; i<n-1;i++)
    {
        if(str[i]!=str[i+1] && str[i] == 'S' ) sf++;
        if(str[i]!=str[i+1] && str[i] == 'F' ) fs++;
    }

    if(sf>fs) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
