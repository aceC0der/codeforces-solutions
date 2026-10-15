/*
 * Problem   : 236A - Boy or Girl
 * Link      : https://codeforces.com/contest/236/problem/A
 * Submission: https://codeforces.com/contest/236/submission/73426761
 * Rating    : 800   Tags: brute force, implementation, strings
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-16 (Practice)
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[105],num[105];
    cin >> str;
    int len = strlen(str);
    num[0]=str[0];

    bool flag=true;
    int j, len1=1;
    for(int i=1; i<len; i++)
    {
        for(j=0;j<len1;j++)
        {
            if(str[i]==num[j])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            num[len1]=str[i];
            len1++;
        }
        flag = true;
    }
    if(len1%2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
