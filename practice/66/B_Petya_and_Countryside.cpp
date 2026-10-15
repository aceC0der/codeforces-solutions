/*
 * Problem   : 66B - Petya and Countryside
 * Link      : https://codeforces.com/contest/66/problem/B
 * Submission: https://codeforces.com/contest/66/submission/94918188
 * Rating    : 1100   Tags: brute force, implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-08 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	vector<int> garden;
	int n, x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		garden.push_back(x);
	}
	int maxi=0;
	for(int i=0; i<n; i++){
		int moves = 1;
		if(garden[i]>=garden[i+1]){
			for(int j=i+1; j<n; j++){

				if(garden[j]>=garden[j+1]){
					moves++;
				}
				else{
					moves++; 
					break;
				}
			}
		}
		//cout << moves << " " << endl;
		if(garden[i]>=garden[i-1]){
			for(int j=i-1; j>=0; j--){
				if(garden[j]>=garden[j-1]){
					moves++;
				}
				else {
					moves++;
					break;
				}
			}
		}
		//5cout << moves << "....." << endl;
		maxi = max(maxi, moves);
	}

	cout << maxi << endl;



	return 0;
}
