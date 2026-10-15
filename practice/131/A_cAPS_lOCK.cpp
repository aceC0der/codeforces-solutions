/*
 * Problem   : 131A - cAPS lOCK
 * Link      : https://codeforces.com/contest/131/problem/A
 * Submission: https://codeforces.com/contest/131/submission/73441484
 * Rating    : 1000   Tags: implementation, strings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-17 (Practice)
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[105];
    cin >> str;

    int len = strlen(str);
    bool f = false;
    for(int i=1;i<len;i++)
    {
        if(str[i]<97) f=true;
        else
        {
            f=false;
            break;
        }
    }
    if(len==1 && str[0]>=97) str[0] -= 32;
    else if(len==1 && str[0]<97) str[0] += 32;
    else if(str[0]<97 && f)
    {
        for(int i=0;i<len;i++)
        {
            str[i] += 32;
        }
    }
    else if(str[0]>=97 && f)
    {
        str[0] -= 32;
        for(int i=1;i<len;i++)
        {
            str[i] += 32;
        }
    }
    cout << str << endl;


    return 0;
}
