/*
 * Problem   : 746B - Decoding
 * Link      : https://codeforces.com/contest/746/problem/B
 * Submission: https://codeforces.com/contest/746/submission/95256501
 * Rating    : 900   Tags: implementation, strings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-11 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define F first
#define S second
#define PB push_back
using namespace std;

int main()
{
	int n, p, N;
	cin >> n;
	string en, de;
	cin >> en;
	for(int i=0;i<n; i++){
		de.PB('a');
	}
	//cout << en << endl;
	if((n)%2==0)
		p=(n)/2-1;
	else
		p=(n)/2;
	de[p]=en[0];
	int j=1;
	for(int i=1; i<n; i+=2){
		
		//cout << p-j << ' ' <<  p+j << endl;
		if(n%2!=0){
			de[p-j]=en[i];
			de[p+j] = en[i+1];
		}
		else{
			de[p+j]=en[i];
			de[p-j] = en[i+1];
		}
		j++;
	}
	cout<< de << endl;

	return 0; 
}
