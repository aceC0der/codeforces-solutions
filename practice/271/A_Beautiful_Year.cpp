/*
 * Problem   : 271A - Beautiful Year
 * Link      : https://codeforces.com/contest/271/problem/A
 * Submission: https://codeforces.com/contest/271/submission/73857581
 * Rating    : 800   Tags: brute force
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int yr,temp,flag=1;
    cin >> yr;
    yr++;
    int d1, d2, d3, d4;
    while(flag)
    {
        temp = yr;
        d4=temp%10;temp /= 10;
        d3=temp%10;temp /= 10;
        d2=temp%10;temp /= 10;
        d1=temp%10;temp /= 10;

        if(d1!=d2&&d1!=d3&&d1!=d4&&d2!=d3&&d2!=d4&&d3!=d4) flag = 0;
        else yr++;
    }
    cout << yr << endl;


    return 0;
}

