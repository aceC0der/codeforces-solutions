/*
 * Problem   : 1399A - Remove Smallest
 * Link      : https://codeforces.com/contest/1399/problem/A
 * Submission: https://codeforces.com/contest/1399/submission/89140152
 * Rating    : 800   Tags: greedy, sortings
 * Verdict   : Accepted (31 ms, 3600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-08-06 (Practice)
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> numbers;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			numbers.push_back(x);
		}
		sort(numbers.begin(), numbers.end());
		bool state = true;
		for(int i=0;i<n-1;i++){
		//cout << numbers[i] << " " << numbers[i+1] << endl;
			if(numbers[i]>numbers[i+1]&&numbers[i]-numbers[i+1]!=1){
				
				state = false;
				break;
			}
			if(numbers[i]<numbers[i+1]&&numbers[i+1]-numbers[i]!=1){
				state = false;
				break;
			}
		}
		if(state==true)
		  cout << "YES" << endl;
		else 
		  cout << "NO" << endl;
		numbers.clear();
	}

	return 0;
}
