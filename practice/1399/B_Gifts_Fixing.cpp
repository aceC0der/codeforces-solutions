/*
 * Problem   : 1399B - Gifts Fixing
 * Link      : https://codeforces.com/contest/1399/problem/B
 * Submission: https://codeforces.com/contest/1399/submission/93881775
 * Rating    : 800   Tags: greedy
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-09-26 (Practice)
 */
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
    	long long num1[55], num2[55],min1=1111111000000, min2=11111100000000;
    	long long moves=0;
    	for(int i=0; i<n; i++){
    		cin >> num1[i];
    		min1 = min(min1, num1[i]);
    	}
    	//cout << "1: " << min1 << endl;
    	for(int i=0; i<n; i++){
    		cin >> num2[i];
    		min2 = min(min2, num2[i]);
    	}
    	//cout << "2: " << min2 << endl;
    	for(int i=0; i<n; i++){
    		num1[i]=num1[i]-min1;
    		num2[i]=num2[i]-min2;
    		moves+=max(num2[i],num1[i]);
    	}

    	cout << moves << endl;
    }

    return 0;
}
