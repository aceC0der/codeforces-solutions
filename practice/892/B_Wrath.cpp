/*
 * Problem   : 892B - Wrath
 * Link      : https://codeforces.com/contest/892/problem/B
 * Submission: https://codeforces.com/contest/892/submission/77091148
 * Rating    : 1200   Tags: greedy, implementation, two pointers
 * Verdict   : Accepted (1840 ms, 6200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-17 (Practice)
 */
#include<iostream>
#include<vector>
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

int main()
{
    vector<int> L;
    int n, i, j, c=0, k;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> k;
        L.push_back(k);
    }
    i=n-1;
    j=i-1;
    while(j>=0)
    {

        if(j>=i-L[i])
        {
            c++;
            j--;
        }
        else
        {
            i--;
            while(j>=i)
                j--;
        }
        /*deb(i);
        deb(j);
        deb(L[i]);
        deb(c);
        cout << endl;*/
    }

    cout << n-c ;

    return 0;
}
