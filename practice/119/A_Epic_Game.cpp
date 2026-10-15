/*
 * Problem   : 119A - Epic Game
 * Link      : https://codeforces.com/contest/119/problem/A
 * Submission: https://codeforces.com/contest/119/submission/67669354
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2019-12-27 (Practice)
 */
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int a, b, n;
    cin>>a>>b>>n;
    
    int check = 1, GCD; 
    while(n)
    {
        if(check==1)
        {
            GCD = __gcd(a,n);
            check = 0;
        }
        else
        {
            GCD = __gcd(b,n);
            check = 1;
        }
        if(GCD >= n) break;
        n -= GCD;
    }
    
    cout << check << endl;
    
    return 0;
}
