/*
 * Problem   : 1417B - Two Arrays
 * Link      : https://codeforces.com/contest/1417/problem/B
 * Submission: https://codeforces.com/contest/1417/submission/94148475
 * Rating    : 1100   Tags: greedy, math, sortings
 * Verdict   : Accepted (217 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-09-28 (Practice)
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--){
		ll n, k, num;
		int chk[100005];

		cin >> n >> k;
		bool flag=true;
		for(ll i=0; i<n; i++){
			cin >> num;
			if(num==k/2 && k%2==0){
				if(flag==true){
					flag=false;
					chk[i]=0;
				}
				else{
					flag=true;
					chk[i]=1;
				}
			}
			else if(num<k/2 || (num==k/2 && k%2!=0))
				chk[i]=1;
			else 
				chk[i]=0;
			//cnum[i] = num[i];
		}
		//sort(cnum, cnum+n);
		
		
		for(ll i=0; i<n; i++){
			cout << chk[i] << " ";
		}
		cout << endl;

		/*for(int i=0, j=n-1; i<n, j>0; i++, --j){
			if(num[i]+num[j]!=k){
				chk[i] = chk[j] = true;
			}
			else{
				chk[i]= true;
				chk[j]=false;
			}

		}
		for(int i=0; i<n; i++){
			if(chk[i]==true)
				cout <<"1 ";
			else
				cout << "0 ";
		}
		cout << endl;*/

		
	}

	return 0;
}
