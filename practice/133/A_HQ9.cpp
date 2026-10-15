/*
 * Problem   : 133A - HQ9+
 * Link      : https://codeforces.com/contest/133/problem/A
 * Submission: https://codeforces.com/contest/133/submission/73438363
 * Rating    : 900   Tags: implementation
 * Verdict   : Accepted (92 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-17 (Practice)
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[104];
    cin >> str;
    int len = strlen(str);
    bool flag=true;
    for(int i=0; i<len; i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            flag = false;
            cout << "YES" << endl;
            break;
        }
    }
    if(flag) cout << "NO" << endl;

    return 0;
}
