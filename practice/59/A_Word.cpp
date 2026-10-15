/*
 * Problem   : 59A - Word
 * Link      : https://codeforces.com/contest/59/problem/A
 * Submission: https://codeforces.com/contest/59/submission/73856654
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (92 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char word[105];
    cin >> word;

    int len = strlen(word), UC=0;

    for(int i=0; i<len; i++)
        if(word[i]<97)
            UC++;
    if(UC>len-UC)
    {
        for(int i=0; i<len; i++)
            if(word[i]>=97)
                word[i] -= 32;
    }
    else
    {
        for(int i=0; i<len; i++)
            if(word[i]<97)
                word[i] += 32;
    }

    cout << word << endl;

    return 0;
}

