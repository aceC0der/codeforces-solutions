/*
 * Problem   : 381A - Sereja and Dima
 * Link      : https://codeforces.com/contest/381/problem/A
 * Submission: https://codeforces.com/contest/381/submission/77005327
 * Rating    : 800   Tags: greedy, implementation, two pointers
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-17 (Practice)
 */
#include <iostream>
using namespace std;

int main()
{
    int num[1000+10], l, r, mid, n, d, s, chk=0;
    s = d = 0;

    cin >> n ;

    for(int i=1; i<=n ; i++)
    {
        cin >> num[i];
    }

    l=1;
    r=n;
    while(l<=r)
    {
        if(num[l]>num[r])
        {
            if(chk==0)
                s+=num[l];
            else
                d+=num[l];
            l++;
        }
        else
        {
            if(chk==0)
                s+=num[r];
            else
                d+=num[r];
            r--;
        }
        if(chk==0)
            chk=1;
        else
            chk =0;
        //cout << s << " " << d << endl;
    }

    cout << s << " " << d << endl;

    return 0;
}
