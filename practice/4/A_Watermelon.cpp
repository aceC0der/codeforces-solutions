/*
 * Problem   : 4A - Watermelon
 * Link      : https://codeforces.com/contest/4/problem/A
 * Submission: https://codeforces.com/contest/4/submission/67664894
 * Rating    : 800   Tags: brute force, math
 * Verdict   : Accepted (60 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2019-12-26 (Practice)
 */
#include<iostream>

using namespace std;
int main()
{
    int W;
    
    cin>>W;
    
    
    if(W%2==0 && W!=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    return 0;
}
