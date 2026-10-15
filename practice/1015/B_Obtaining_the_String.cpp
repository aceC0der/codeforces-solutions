/*
 * Problem   : 1015B - Obtaining the String
 * Link      : https://codeforces.com/contest/1015/problem/B
 * Submission: https://codeforces.com/contest/1015/submission/89346627
 * Rating    : 1200   Tags: implementation
 * Verdict   : Accepted (31 ms, 3700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-08-08 (Practice)
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string A, B;
	vector<int> moves;
	cin >> A >> B;
	int pos;
	for(int i=0;i<n;i++){
		if(A[i]==B[i])
		  continue ;
	  pos = -1;
		for(int j=i+1;j<n;j++){
			if(A[j]==B[i]){
				pos = j;
				break;
			}
		}
		if(pos == -1){
			cout << "-1" << endl;
			break;
		}
		for(int j=pos;j>=i;j--){
			if(A[j]!=B[i]){
			   swap(A[j], A[j+1]);
			   moves.push_back(j+1);
			}
		}
	}
	if(pos!=-1){
	cout << moves.size() << endl;
	for(int x: moves)
	  cout << x << " " ;
	}

	return 0;
}
