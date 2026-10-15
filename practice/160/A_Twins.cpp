/*
 * Problem   : 160A - Twins
 * Link      : https://codeforces.com/contest/160/problem/A
 * Submission: https://codeforces.com/contest/160/submission/73436447
 * Rating    : 900   Tags: greedy, sortings
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-17 (Practice)
 */
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, coin[105], sum=0, sum1;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> coin[i];

    sort(coin, coin+n);
    for(int i=0; i<n; i++)
        sum += coin[i];
    for(int i=n-1; i>=0; i--)
    {
        sum -= coin[i];
        sum1 += coin[i];
        if(sum1>sum)
        {
            cout << n-i << endl;
            break;
        }
    }


    return 0;
}
