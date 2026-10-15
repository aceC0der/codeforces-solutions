/*
 * Problem   : 158A - Next Round
 * Link      : https://codeforces.com/contest/158/problem/A
 * Submission: https://codeforces.com/contest/158/submission/73277015
 * Rating    : 800   Tags: *special, implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-15 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int num[105], n, k, pos, Count=0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
        if(i==k-1)
            pos = num[i];
    }

    for(int i=0; i<n; i++)
    {
        //if(pos==0) break;
        if(num[i]>0&&num[i]>=pos)
            Count++;
        else
            break;
    }

    cout << Count << endl;

    return 0;
}
