/*
 * Problem   : 1004A - Sonya and Hotels
 * Link      : https://codeforces.com/contest/1004/problem/A
 * Submission: https://codeforces.com/contest/1004/submission/76027483
 * Rating    : 900   Tags: implementation
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-10 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int n, d, C=2, x1, x2;
    cin >> n >> d;
    cin >> x1;
    d*=2;
    for(int i=0; i<n-1; i++)
    {
        cin >> x2;
        if(x2-x1==d)
            C++;
        else if(x2-x1>d)
            C+=2;
        x1=x2;
    }
    cout << C << endl;

    return 0;
}
