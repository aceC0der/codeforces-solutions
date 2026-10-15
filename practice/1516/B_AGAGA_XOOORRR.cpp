/*
 * Problem   : 1516B - AGAGA XOOORRR
 * Link      : https://codeforces.com/contest/1516/problem/B
 * Submission: https://codeforces.com/contest/1516/submission/116229201
 * Rating    : 1500   Tags: bitmasks, brute force, dp, greedy
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-05-15 (Practice)
 */
#include <bits/stdc++.h>

using namespace std;
int pre[2005];
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        for (int i=1;i<=n;i++)
        {
            int a;
            scanf("%d",&a);
            pre[i]=(pre[i-1]^a);
        }
        bool yes=!pre[n];
        for (int i=1;i<=n;i++)
        {
            for (int j=i+1;j<n;j++)
            yes|=(pre[i]==(pre[j]^pre[i]) && pre[i]==(pre[n]^pre[j]));
        }
        puts(yes? "YES":"NO");
    }
}
