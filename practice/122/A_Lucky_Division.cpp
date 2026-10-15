/*
 * Problem   : 122A - Lucky Division
 * Link      : https://codeforces.com/contest/122/problem/A
 * Submission: https://codeforces.com/contest/122/submission/73258284
 * Rating    : 1000   Tags: brute force, number theory
 * Verdict   : Accepted (92 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-14 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int luckyNum[] = {4,7,47,44,77,74,444,447,477,777,774,744,474,747};
    int num;

    cin >> num;

    bool flag = true;
    for(int i=0; i<14; i++)
    {
        if((num==luckyNum[i]) || (num%luckyNum[i]==0))
        {
            cout << "YES\n" ;
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "NO\n";


    return 0;
}


