/*
 * Problem   : 1382C1 - Prefix Flip (Easy Version)
 * Link      : https://codeforces.com/contest/1382/problem/C1
 * Submission: https://codeforces.com/contest/1382/submission/88211574
 * Rating    : 1300   Tags: constructive algorithms, data structures, strings
 * Verdict   : Accepted (31 ms, 3800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-07-28 (Practice)
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string a, b;

int main()
{
  int t;
  cin >> t;
  while(t--){
  	vector<int> moves;
  	int n;
  	cin >> n >> a >> b;
  	for(int i=0;i<n;i++){
  		if(a[i]!=b[i]){
  			if(i>0) moves.push_back(i+1);
  			moves.push_back(1);
  			if(i>0) moves.push_back(i+1);
  		}
  	}
  	
  	cout << moves.size() << ' ';
  	
  	for(int x : moves)
  	  cout << x << ' ' ;
  	cout << endl;
  		  
  	
  }

	return 0;
}
