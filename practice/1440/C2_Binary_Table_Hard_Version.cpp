/*
 * Problem   : 1440C2 - Binary Table (Hard Version)
 * Link      : https://codeforces.com/contest/1440/problem/C2
 * Submission: https://codeforces.com/contest/1440/submission/98845910
 * Rating    : 1900   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (61 ms, 600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-19 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef vector<int> vi;

string str[105];

class node
{
public:
	int a, b, c, d , e, f;
	node(int a1,int  b1,int c1, int d1, int e1, int f1){
		a = a1; b=b1; c=c1; d=d1; e=e1; f=f1;
	}
};

void flip(vector<int> ans){
	for(int i=0; i<6; i+=2){
		if(str[ans[i]][ans[i+1]]=='1')
			str[ans[i]][ans[i+1]]='0';
		else
			str[ans[i]][ans[i+1]]='1';
	}
}
vector<node> moves;
void done3(int grid[], int x, int y){
	vector<int> ans;
	for(int i=0; i<8; i+=2){
		if(grid[i]!=x || grid[i+1]!=y){
			ans.pb(grid[i]);
			ans.pb(grid[i+1]);
		}
	}
	node k(ans[0]+1, ans[1]+1, ans[2]+1, ans[3]+1, ans[4]+1, ans[5]+1);
	flip(ans);
	moves.pb(k);
}

void done2(int grid[], int x, int y, int a, int b){
	vector<int> ans;
	//ans.pb(x); ans.pb(y); ans.pb(a); ans.pb(b);
	for(int i=0; i<8; i+=2){
		if(grid[i]!=a || grid[i+1]!=b){
			ans.pb(grid[i]);
			ans.pb(grid[i+1]);
		}
	}
	node k(ans[0]+1, ans[1]+1, ans[2]+1, ans[3]+1, ans[4]+1, ans[5]+1);
	moves.pb(k);
	flip(ans);
	done3(grid, x, y);
}

void done1(int grid[], int x, int y){
	vector<int> ans;
	ans.pb(x);ans.pb(y);
	int cnt=0, i=0;
	while(cnt!=2){
		if(grid[i] != x || grid[i+1] != y){
			ans.pb(grid[i]);
			ans.pb(grid[i+1]);
			cnt++;
		}
		i+=2;
	}
	node k(ans[0]+1, ans[1]+1, ans[2]+1, ans[3]+1, ans[4]+1, ans[5]+1);
	moves.pb(k);
	flip(ans);
	done2(grid, ans[2], ans[3], ans[4], ans[5]);
}

void done4(int grid[]){
	vector<int> ans;
	for(int i=0; i<6; i++){
		ans.pb(grid[i++]);
		ans.pb(grid[i]);
	}
	node k(ans[0]+1, ans[1]+1, ans[2]+1, ans[3]+1, ans[4]+1, ans[5]+1);
	moves.pb(k);
	flip(ans);
	done1(grid, grid[6], grid[7]);
}

void allDone(int i, int j){
	vector<int> zero, one;
	if(str[i][j]=='0'){
		zero.pb(i);
		zero.pb(j);
	}
	else{
		one.pb(i);
		one.pb(j);
	}
	if(str[i][j+1]=='0'){
		zero.pb(i);
		zero.pb(j+1);
	}
	else{
		one.pb(i);
		one.pb(j+1);
	}
	if(str[i+1][j]=='0'){
		zero.pb(i+1);
		zero.pb(j);
	}
	else{
		one.pb(i+1);
		one.pb(j);
	}
	if(str[i+1][j+1]=='0'){
		zero.pb(i+1);
		zero.pb(j+1);
	}
	else{
		one.pb(i+1);
		one.pb(j+1);
	}
	int o = one.size()/2;
	int grid[] = {i, j, i, j+1, i+1, j, i+1, j+1};
	/*cout << "grid:" << o <<endl;
	for(int i=0; i<8; i++){
		cout << grid[i] << " ";
	}
	cout << endl;*/
	if(o == 1){
		done1(grid, one[0], one[1]);
	}
	else if(o == 2){
		//int grid[] = {i, j, i, j+1, i+1, j, i+1, j+1};
		done2(grid, one[0], one[1], one[2], one[3]);
	}
	else if(o == 3){
		//int grid[] = {i, j, i, j+1, i+1, j, i+1, j+1};
		done3(grid, zero[0], zero[1]);
	}
	else if(o == 4){
		//int grid[] = {i, j, i, j+1, i+1, j, i+1, j+1};
		done4(grid);
	}
}

void change(int i, int j, int m){
	vi cng;
	if(j == m-1){
		cng.pb(i);cng.pb(j);cng.pb(i+1); cng.pb(j);cng.pb(i+1); cng.pb(j-1);
	}
	else{
		cng.pb(i);cng.pb(j);cng.pb(i+1); cng.pb(j);cng.pb(i+1); cng.pb(j+1);
	}
	node k(cng[0]+1, cng[1]+1, cng[2]+1, cng[3]+1, cng[4]+1, cng[5]+1);
	moves.pb(k);
	flip(cng);
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;

		for(int i=0; i<n; i++)
			cin >> str[i];
		/*for(int i=0; i<n; i++)
			cout << str[i] << endl;*/
		for(int i=0; i<n-2; i++){
			for(int j=0; j<m; j++){
				if(str[i][j]=='1')
					change(i, j, m);
			}
		}
		for(int j=0,i=n-2; j<m-2; ){
			if(str[i][j]=='1'){
				vi cng;
				if(i==n-2){
					cng.pb(i);cng.pb(j);cng.pb(i); cng.pb(j+1);cng.pb(i+1); cng.pb(j+1);
				}
				else{
					cng.pb(i);cng.pb(j);cng.pb(i); cng.pb(j+1);cng.pb(i-1); cng.pb(j+1);
				}
				node k(cng[0]+1, cng[1]+1, cng[2]+1, cng[3]+1, cng[4]+1, cng[5]+1);
				moves.pb(k);
				flip(cng);	
			}
			if(i==n-2)
				i++;
			else if(i==n-1){
				i--;
				j++;
			}
		}

		allDone(n-2, m-2);
		/*if(n%2){
			int i=n-2;
			for(int j=0; j<m-1; j+=2){
				allDone(i, j);
			}
		}
		if(m%2){
			int j=m-2;
			for(int i=0; i<n-1; i+=2){
				allDone(i, j);
			}
		}
		if((m%2) && (n%2)){
			allDone(n-2, m-2);
			
		}*/
		
		int cnt = moves.size();
		cout << moves.size() << endl;
		for(int i=0; i<cnt; i++){
			cout << moves[i].a << " " << moves[i].b << " " << moves[i].c  << " " << moves[i].d << " " << moves[i].e << " " << moves[i].f << endl;
		}
		/*cout << "str:" <<endl;
		for(int i=0; i<n; i++)
			cout << str[i] << endl;*/

		for(int i=0; i<n; i++)
			str[i].clear();
		moves.clear();
	}

	return 0;
}
