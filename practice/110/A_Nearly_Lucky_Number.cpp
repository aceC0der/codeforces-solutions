/*
 * Problem   : 110A - Nearly Lucky Number
 * Link      : https://codeforces.com/contest/110/problem/A
 * Submission: https://codeforces.com/contest/110/submission/73440624
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-17 (Practice)
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char num[25];
    cin >> num;
    int len = strlen(num), cnt = 0;

    for(int i=0; i<len; i++)
    {
        if(num[i]=='4' || num[i]=='7') cnt++;
    }
    if(cnt==4||cnt==7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
