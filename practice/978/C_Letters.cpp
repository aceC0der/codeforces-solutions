/*
 * Problem   : 978C - Letters
 * Link      : https://codeforces.com/contest/978/problem/C
 * Submission: https://codeforces.com/contest/978/submission/77263545
 * Rating    : 1000   Tags: binary search, implementation, two pointers
 * Verdict   : Accepted (1559 ms, 5500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-19 (Practice)
 */
#include<iostream>
#include<vector>
#define MAX 190005

using namespace std;

int main()
{
    vector<long long> presum;
    vector<long long> num;
    long long n, m, dom, room, Room, sum=0, x;

    cin >> n >> m;
    for(int i=0; i<n; i++)
    {

        cin >> x;
        num.push_back(x);
        sum+=num[i];
        presum.push_back(sum);
    }

    dom = 0;
    for(int i=1; i<=m; i++)
    {
        cin >> Room ;
        while(presum[dom]<Room)
        {
            dom++;
        }
        cout << dom+1 << ' ' << num[dom]-(presum[dom]-Room) << endl;
    }

    return 0;
}
