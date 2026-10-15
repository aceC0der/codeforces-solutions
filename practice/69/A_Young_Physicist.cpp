/*
 * Problem   : 69A - Young Physicist
 * Link      : https://codeforces.com/contest/69/problem/A
 * Submission: https://codeforces.com/contest/69/submission/73428981
 * Rating    : 1000   Tags: implementation, math
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-16 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int X,Y,Z;
    X=Y=Z=0;
    while(T--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        X += x;
        Y += y;
        Z += z;
    }
    if(!X && !Y && !Z) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
