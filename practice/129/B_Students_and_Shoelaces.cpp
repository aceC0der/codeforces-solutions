/*
 * Problem   : 129B - Students and Shoelaces
 * Link      : https://codeforces.com/contest/129/problem/B
 * Submission: https://codeforces.com/contest/129/submission/95957778
 * Rating    : 1200   Tags: brute force, dfs and similar, graphs, implementation
 * Verdict   : Accepted (62 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-19 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define fi first
#define se second
#define pb push_back
using namespace std;

int main(){
	vector<int> std[105];
	int n, m, x, y;
	cin >> n >> m;
	for( int i=0 ; i<m; i++){
		cin >> x >> y;
		std[x].pb(y);
		std[y].pb(x);
	}
	bool chk=true, flag[105];
	int cnt=0;
	for(int i=1; i<=n; i++)
		sort(std[i].begin(), std[i].end());
	while(chk){
		chk=false;
		// for(int i=1; i<=n; i++){
		// 	cout << i << " -> ";
		// 	for(int j=0; j<std[i].size(); j++){
		// 		cout << std[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		// cout << endl;
		for(int i=1; i<=n; i++){
			flag[i]=true;
		}
		for(int i=1; i<=n; i++){
			if(std[i].size()==1 && flag[i]){
				flag[std[i][0]]=false;
				auto it = lower_bound(std[std[i][0]].begin(), std[std[i][0]].end(), i);
				std[std[i][0]].erase(it);
				std[i].pop_back();
				chk=true;
			}
			else if(!flag[i])
				flag[i]=true;
		}
		if(chk)
			cnt++;
	}
	cout << cnt << endl;

	return 0;
}
