/*
 * Problem   : 96A - Football
 * Link      : https://codeforces.com/contest/96/problem/A
 * Submission: https://codeforces.com/contest/96/submission/73379211
 * Rating    : 900   Tags: implementation, strings
 * Verdict   : Accepted (60 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-16 (Practice)
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[105];
    cin >> str;
    int z, o, len;
    z=o=0;
    len = strlen(str);

    bool f0, f1;
    f0=f1=true;
    for(int i=0; i<len; i++)
    {
        if(str[i]=='0'&&f0&&f1)
        {
            f0=true;
            f1=false;
            z++;
        }
        else if(str[i]=='1'&&f0&&f1)
        {
            f1=true;
            f0=false;
            o++;
        }
        else if(str[i]=='1'&&f0&&!f1)
        {
            f1=true;
            f0=false;
            o=1;
        }
        else if(str[i]=='0'&&!f0&&f1)
        {
            f0=true;
            f1=false;
            z=1;
        }
        else if(str[i]=='1'&&!f0&&f1)
            o++;
        else if(str[i]=='0'&&f0&&!f1)
            z++;
        if(z==7||o==7)
        {
            cout << "YES" << endl;
            break;
        }
        else if(i==len-1)
        {
            cout << "NO" << endl;
            break;
        }
    }

    return 0;
}
