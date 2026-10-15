/*
 * Problem   : 1526C2 - Potions (Hard Version)
 * Link      : https://codeforces.com/contest/1526/problem/C2
 * Submission: https://codeforces.com/contest/1526/submission/117862325
 * Rating    : 1600   Tags: data structures, greedy
 * Verdict   : Accepted (93 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-05-30 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	int n; cin >> n;
	priority_queue<long long, vector<long long>, greater<long long> > pq;
	long long S = 0;
	
	for(int i = 1;i <= n;i++){
		long long x; cin >> x;
		S += x;
		pq.push(x);
		
		while(S < 0){
			S -= pq.top();
			pq.pop();
		}
	}
	
	cout << (int) pq.size();
}
