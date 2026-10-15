/*
 * Problem   : 1316B - String Modification
 * Link      : https://codeforces.com/contest/1316/problem/B
 * Submission: https://codeforces.com/contest/1316/submission/94904380
 * Rating    : 1400   Tags: brute force, constructive algorithms, implementation, sortings, strings
 * Verdict   : Accepted (78 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-08 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

string modified_str(string s, int n, int k){
	string ans;
	for(int i=k-1; i<n; i++){
		ans.push_back(s[i]);
	}
	if((n-k)%2!=0){
		for(int i=0; i<k-1; i++){
			ans.push_back(s[i]);
		}
	}
	else{
		for(int i=k-2; i>=0; i--){
			ans.push_back(s[i]);
		}
	}
	//
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> pos;
		int n;
		cin >> n;
		string s;
		cin >> s;
		char min=s[0];
		for(int i=1; i<n; i++){
			if(s[i]<min){
				min = s[i];
			}
		}
		for(int i=0; i<n; i++){
			if(s[i]==min){
				pos.push_back(i+1);
			}
		}
		pair<string, int> ans;
		ans.first = modified_str(s, n, pos[0]);
		ans.second = pos[0];

		for(int i=1; i<pos.size(); i++){
			//cout << ans.first << endl << ans.second << endl;
			string a = modified_str(s, n, pos[i]);
			if(a<ans.first){
				ans.first=a;
				ans.second=pos[i];
			}

		}
		cout << ans.first << endl << ans.second << endl;
	}	


	return 0;
}
