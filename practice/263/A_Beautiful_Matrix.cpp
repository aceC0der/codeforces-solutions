/*
 * Problem   : 263A - Beautiful Matrix
 * Link      : https://codeforces.com/contest/263/problem/A
 * Submission: https://codeforces.com/contest/263/submission/73846313
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int mat[7][7], x, y;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }
        }
    }

    if(x>=3) x-=3;
    else x=3-x;
    if(y>=3) y-=3;
    else y=3-y;

    cout << x+y << endl;


    return 0;
}
