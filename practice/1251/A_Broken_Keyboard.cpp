/*
 * Problem   : 1251A - Broken Keyboard
 * Link      : https://codeforces.com/contest/1251/problem/A
 * Submission: https://codeforces.com/contest/1251/submission/77260219
 * Rating    : 1000   Tags: brute force, strings, two pointers
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-04-19 (Practice)
 */
#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    set<char> res;
    set<char>::iterator it;
    string str;
    while(tc--)
    {
        cin >> str;
        int l, r, len=str.length();
        l=0;
        r=1;
        while(r<=len)
        {
            if(l==len-1)
            {
                res.insert(str[l]);
                break;
            }
            else if(str[l]!=str[r])
            {
                res.insert(str[l]);
                l++;
                r++;
            }
            else
            {
                l=r+1;
                r=l+1;
            }
        }
        for(it=res.begin(); it!=res.end(); it++)
            cout << *it;
        cout << endl;
        str.clear();
        res.clear();
    }

    return 0;
}
