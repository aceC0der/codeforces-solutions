/*
 * Problem   : 490A - Team Olympiad
 * Link      : https://codeforces.com/contest/490/problem/A
 * Submission: https://codeforces.com/contest/490/submission/94651898
 * Rating    : 800   Tags: greedy, implementation, sortings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-04 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int n, num, one, two , three, std[5005], chk[5005];
	one = two = three = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num;
		std[i]=num;
		chk[i]=-1;
		if(num==1)
			one++;
		else if(num==2)
			two++;
		else three++;
	}
	int mini = min(one, two);
	mini=min(mini, three);
	cout <<  mini << endl;
	int cnt = 1;
	for(int i=0; i<mini; i++){
		cnt = 1;
		one = two = three = 0;
		for(int j=0; j<n; j++){
			//cout << "arr " << std[j] << " " << cnt << endl ; 
			if(chk[j]==-1&&((std[j]==1&&one==0)||(std[j]==2&&two==0)||(std[j]==3&&three==0) ) ) {
				if(std[j]==1)
					one++;
				else if(std[j]==2)
					two++;
				else three++;
				cout << j+1 << " ";
				chk[j]=1;
			}
		}
		cout << endl;
	}

	return 0;
}
