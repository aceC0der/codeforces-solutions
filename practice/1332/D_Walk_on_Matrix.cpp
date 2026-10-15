/*
 * Problem   : 1332D - Walk on Matrix
 * Link      : https://codeforces.com/contest/1332/problem/D
 * Submission: https://codeforces.com/contest/1332/submission/149787664
 * Rating    : 1700   Tags: bitmasks, constructive algorithms, math
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-16 (Practice)
 */
#include<iostream>
using namespace std;

int main(){
    int m=1<<17;
    int k;
    cin >> k;
    cout << 2 << " " << 3 << endl;
    cout << m+k << " " << m << " " << 0 << endl;
    cout << k << " " << m+k << " " << k << endl;

    return 0;
}
