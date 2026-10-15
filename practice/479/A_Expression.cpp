/*
 * Problem   : 479A - Expression
 * Link      : https://codeforces.com/contest/479/problem/A
 * Submission: https://codeforces.com/contest/479/submission/73867089
 * Rating    : 1000   Tags: brute force, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-21 (Practice)
 */
#include<iostream>
#include<algorithm>
using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}

int main()
{
    int num[4], result, sum, s;
    cin >> num[0] >> num[1] >> num[2];
    int *it;
    it = std::min_element(num+0, num+3, comp);
    sum = num[0]+num[1]+num[2];
    if(*it == 1)
    {
        for(int i=0; i<3; i++)
        {
            if(*it==num[i])
            {
                if(i==0){ s=(num[0]+num[1]);result = s*num[2];}
                if(i==2) {s=(num[1]+num[2]);result = num[0]*s;}
                else
                {
                    if(num[0]>=num[2]) {s=(num[1]+num[2]);result = num[0]*s;}
                    else { s=(num[0]+num[1]);result = s*num[2];}
                }
            }
        }
    }

    else result = num[0]*num[1]*num[2];

    if(sum > result) result = sum;

    cout << result << endl;



    return 0;
}

