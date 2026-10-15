/*
 * Problem   : 489B - BerSU Ball
 * Link      : https://codeforces.com/contest/489/problem/B
 * Submission: https://codeforces.com/contest/489/submission/76981576
 * Rating    : 1200   Tags: dfs and similar, dp, graph matchings, greedy, sortings, two pointers
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-16 (Practice)
 */
#include<iostream>
#include<algorithm>
#include<cmath>
#define deb(x) cout << #x << " "  << x << endl;

using namespace std;

int main()
{
    int n, m, boy[105], girl[105], i, j, C=0, dif;
    cin >> n;
    for(i=0; i<n; i++)
        cin >> boy[i] ;

    cin >> m;
    for(i=0; i<m; i++)
        cin >> girl[i] ;

    sort(boy, boy+n);
    sort(girl, girl+m);

    i=j=0;
    while(true)
    {
        dif = abs(boy[i]-girl[j]);
        if(i==n || j==m)
            break;
        if(dif==1 || dif==0)
        {
            C++;
            i++;
            j++;
        }
        else if(boy[i]<girl[j])
        {
            i++;
        }
        else if(boy[i]>girl[j])
        {
            j++;
        }
    }

    cout << C << endl;


    return 0;
}
