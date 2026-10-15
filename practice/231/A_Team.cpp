/*
 * Problem   : 231A - Team
 * Link      : https://codeforces.com/contest/231/problem/A
 * Submission: https://codeforces.com/contest/231/submission/73288875
 * Rating    : 800   Tags: brute force, greedy
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-15 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int T,n=0;
    cin >> T;
    int x, y,z;
    while(T--)
    {
        cin >> x >> y >> z;

        if((x&&y)||(y&&z)||(z&&x)) n++;
    }
    cout << n << endl;

    return 0;
}
