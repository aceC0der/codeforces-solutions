/*
 * Problem   : 1367B - Even Array
 * Link      : https://codeforces.com/contest/1367/problem/B
 * Submission: https://codeforces.com/contest/1367/submission/88938038
 * Rating    : 800   Tags: greedy, math
 * Verdict   : Accepted (61 ms, 3700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-08-05 (Practice)
 */
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, even, odd;
        even = odd = 0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2!=i%2){
                if(x%2==0)
                    ++even;
                else 
                    ++odd;
            }
        }
        if(even==odd)
            cout << even << endl;
        else 
            cout << "-1" << endl;
    
    }
    return 0;
}
