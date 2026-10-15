/*
 * Problem   : 71A - Way Too Long Words
 * Link      : https://codeforces.com/contest/71/problem/A
 * Submission: https://codeforces.com/contest/71/submission/73263972
 * Rating    : 800   Tags: strings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-14 (Practice)
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        char str[105];
        cin >> str;

        int len = strlen(str);
        if(len>10)
        {
            cout<<str[0] << len-2 <<str[len-1]<<endl;
        }
        else cout << str <<endl;
    }


    return 0;
}
