/*
 * Problem   : 600B - Queries about less or equal elements
 * Link      : https://codeforces.com/contest/600/problem/B
 * Submission: https://codeforces.com/contest/600/submission/76964404
 * Rating    : 1300   Tags: binary search, data structures, sortings, two pointers
 * Verdict   : Accepted (779 ms, 2600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-16 (Practice)
 */
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int a, b, n;
    vector<int> x, y;

    cin >> a >> b;

    for(int i=0; i<a; i++){
        cin >> n;
        x.push_back(n);
    }
    for(int i=0; i<b; i++){
        cin >> n;
        y.push_back(n);
    }
    sort(x.begin(), x.end());

    for(int i=0; i<b; i++)
        cout<<upper_bound(x.begin(), x.end(),y[i])-x.begin()<<" ";

    return 0;
}
