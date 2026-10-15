/*
 * Problem   : 47B - Coins
 * Link      : https://codeforces.com/contest/47/problem/B
 * Submission: https://codeforces.com/contest/47/submission/95211784
 * Rating    : 1200   Tags: implementation
 * Verdict   : Accepted (62 ms, 0 KB)
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
	char ch[4];
	vector<int> ara, ans, ak;
	int sum=0;
	ara.PB(0);
	ara.PB(0);
	ara.PB(0);
	ans.PB(0);
	ans.PB(0);
	ans.PB(0);
	for(int i=0;i<3; i++){
		for(int j=0; j<3; j++)
			cin >> ch[j];
		if(ch[1]=='<')
			ara[ch[0]-'A']++;
		else
			ara[ch[2]-'A']++;
	}
	for(int i=0; i<3; i++){
		if(ara[i]==2)
			ans[0]=i;
		else if(ara[i]==1)
			ans[1]=i;
		else  if(ara[i]==0)
			ans[2]=i;
	}
	sort(ara.begin(),ara.end());
	bool chk = false;
	for(int i=0; i<3; i++){
		// << ara[i] << " ";
		if(ara[i]!=i){
			chk=true;
			break;
		}
	}
	if(chk)
		cout << "Impossible" << endl;
	else{
		for(int i=0; i<3; i++){
			cout << (char)(ans[i]+'A');
		}
	}


	return 0; 
}
