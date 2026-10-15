/*
 * Problem   : 1382B - Sequential Nim
 * Link      : https://codeforces.com/contest/1382/problem/B
 * Submission: https://codeforces.com/contest/1382/submission/87853190
 * Rating    : 1100   Tags: dp, games
 * Verdict   : Accepted (187 ms, 3700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-07-24 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, k=0, m, chk = 1;
        cin >> m;
        for(int i=0; i<m; i++){
            cin >> n;
            if(n==1 && chk)
                k++;
            else
                chk=0;
        }
        if(k==m)
            --k;
        if(k%2==0)
            cout << "First\n";
        else
            cout << "Second\n";
    }

    return 0;
}
