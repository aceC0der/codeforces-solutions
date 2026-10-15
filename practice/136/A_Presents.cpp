/*
 * Problem   : 136A - Presents
 * Link      : https://codeforces.com/contest/136/problem/A
 * Submission: https://codeforces.com/contest/136/submission/73860881
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int frnd[105],n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> frnd[i];
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(frnd[j]==i)
            {
                cout << j+1 << " ";
                break;
            }
        }
    }
    cout << endl;


    return 0;
}

