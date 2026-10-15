/*
 * Problem   : 118A - String Task
 * Link      : https://codeforces.com/contest/118/problem/A
 * Submission: https://codeforces.com/contest/118/submission/73280408
 * Rating    : 1000   Tags: implementation, strings
 * Verdict   : Accepted (60 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-15 (Practice)
 */
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    char str[105], vowel[]={"aeiouyAEIOUY"};
    cin >> str;

    int len=strlen(str);
    bool flag=true;
    for(int i=0; i<len;i++)
    {
        for(int j=0; j<12; j++)
        {
            if(str[i] == vowel[j])
            {
                flag = false;
                break;
            }
        }
        if(flag && str[i]<97)
        {
            printf(".%c", str[i]+32);
        }
        else if(flag && str[i]>=97)
        {
            printf(".%c", str[i]);
        }
        flag = true;
    }

    cout << endl;


    return 0;
}
