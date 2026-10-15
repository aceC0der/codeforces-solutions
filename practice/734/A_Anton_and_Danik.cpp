/*
 * Problem   : 734A - Anton and Danik
 * Link      : https://codeforces.com/contest/734/problem/A
 * Submission: https://codeforces.com/contest/734/submission/73862848
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    char ch;
    int A, D, n;
    A=D=0;
    cin >> n;
    while(n--)
    {
        cin >> ch;
        if(ch =='A') A++;
        else D++;
    }
    if(A>D) cout << "Anton" << endl;
    else if(A<D) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}
