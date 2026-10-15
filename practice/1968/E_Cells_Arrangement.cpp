/*
 * Problem   : 1968E - Cells Arrangement
 * Link      : https://codeforces.com/contest/1968/problem/E
 * Submission: https://codeforces.com/contest/1968/submission/259265083
 * Rating    : 1600   Tags: constructive algorithms
 * Verdict   : Accepted (139 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-03 (Practice)
 */
#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    if(n==2){
      cout << "1 1" << endl;
      cout << "1 2" << endl;
      cout << endl;
      continue;
    }
    
    cout << "1 1" << endl;
    cout << "2 1" << endl;
    
    for(int i=3; i<n; i++){
      cout << 1 << " " << i << endl;
    }
    
    cout << n << " " << n << endl;
    cout << endl;
 
  }
  return 0;
}
