/*
 * Problem   : 451B - Sort the Array
 * Link      : https://codeforces.com/contest/451/problem/B
 * Submission: https://codeforces.com/contest/451/submission/95374140
 * Rating    : 1300   Tags: implementation, sortings
 * Verdict   : Accepted (202 ms, 1900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-13 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define fi first
#define se second
#define pb push_back
using namespace std;

int main(){
	vector<ll> num, snum;
	int start, end, i;
	ll n;
	cin >> n;
	ll x;
	for(int i=0; i<n; i++){
		cin>>x;
		num.pb(x);
	}
	/*for(int j=0; j<n; j++)
		cout << num[j] << endl;*/
	snum = num;
	sort(snum.begin(), snum.end());
	if(snum==num){
		start = 0;
		end = 1;
	}
	else{
		int chk=0, echk=0;
		for( i=0; i<n; i++){
			if(!chk&&snum[i]!=num[i]){
				start = i;
				chk=1;
			}
			else if(chk&&num[i]>num[i-1]){
				end=i;
				echk=1;
				break;
			}
			//cout << chk << endl;
		}
		if(!echk){
			end = n;
		}
		//cout << start << " " << end << endl;
		reverse(num.begin()+start, num.begin()+end);
	}
	if(snum==num){
		cout << "yes\n";
		cout << start+1 << " " << end << endl;
	}
	else
		cout << "no";


	return 0;
}
