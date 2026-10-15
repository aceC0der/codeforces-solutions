/*
 * Problem   : 266B - Queue at the School
 * Link      : https://codeforces.com/contest/266/problem/B
 * Submission: https://codeforces.com/contest/266/submission/73440133
 * Rating    : 800   Tags: constructive algorithms, graph matchings, implementation, shortest paths
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-17 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    char str[55];
    cin >> str;
    while(t--)
    {
        char ch;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                ch = str[i];
                str[i] = str[i+1];
                str[i+1] = ch;
                i++;
            }
        }
    }

    cout << str << endl;

    return 0;
}
