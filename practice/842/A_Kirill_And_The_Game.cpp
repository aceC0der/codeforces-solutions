/*
 * Problem   : 842A - Kirill And The Game
 * Link      : https://codeforces.com/contest/842/problem/A
 * Submission: https://codeforces.com/contest/842/submission/77081656
 * Rating    : 1200   Tags: brute force, two pointers
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-17 (Practice)
 */
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int l, r, x, y, a, b;
    double k, ans;

    cin >> l >> r >> x >> y >> k;

    int i, j;
    i=l;
    j=x;
    while(true)
    {
        if(i>r || j>y)
            break;
        ans = (double)i/(double)j;
        //cout << ans << endl;
        if(abs(k-ans)<1e-9)
        {
            cout << "YES";
            return 0;
        }
        else if(ans < k)
            i++;
        else
            j++;
    }
    cout << "NO";


    return 0;
}
