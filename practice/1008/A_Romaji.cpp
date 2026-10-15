/*
 * Problem   : 1008A - Romaji
 * Link      : https://codeforces.com/contest/1008/problem/A
 * Submission: https://codeforces.com/contest/1008/submission/76025289
 * Rating    : 900   Tags: implementation, strings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-10 (Practice)
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
 {
    char str[100];
    bool flag=false;

    cin >> str;
    int len=strlen(str);
    if(str[len-1]=='a'||str[len-1]=='e'||str[len-1]=='i'||str[len-1]=='o'||str[len-1]=='u'||str[len-1]=='n')
    {
        for(int i=0; i<len; i++)
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                flag = false;
            }
            else
            {
                if(flag==true)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                else if(str[i]=='n')
                    flag = false;
                else
                    flag = true;
            }
        }
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
 }
