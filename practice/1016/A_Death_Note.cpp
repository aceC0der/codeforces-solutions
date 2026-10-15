/*
 * Problem   : 1016A - Death Note
 * Link      : https://codeforces.com/contest/1016/problem/A
 * Submission: https://codeforces.com/contest/1016/submission/75912859
 * Rating    : 900   Tags: greedy, implementation, math
 * Verdict   : Accepted (982 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-08 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int num, n, m, name=0, turn=0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        name += num;
        if(name>=m)
        {
            turn=name/m;
            name%=m;
        }
        cout << turn << " ";
        turn = 0;
    }


    return 0;
}

