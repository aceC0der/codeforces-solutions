/*
 * Problem   : 1450C1 - Errich-Tac-Toe (Easy Version)
 * Link      : https://codeforces.com/contest/1450/problem/C1
 * Submission: https://codeforces.com/contest/1450/submission/100649004
 * Rating    : 2100   Tags: constructive algorithms, math
 * Verdict   : Accepted (31 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-08 (Practice)
 */
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
using namespace std;
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define vpi vector<pi>
/*#define A(a) for(auto &x:a)cin>>x;
#define AA(a) for(auto x:a)cout<<x<<" ";cout<<endl;*/
#define fi(n) for(ll i=0;i<n;i++)
#define fj(n) for(ll j=0;j<n;j++)
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define B(a) a.begin(),a.end()

int main(){
	//freopen("input.txt", "r", stdin);
	I
	T{
		int n;
		cin >> n;
		string s[304];
		fi(n){
			cin >> s[i];
		}
		/*fi(n){
			cout << s[i] << endl;
		}*/
		int moves = 0;
		vector<bool> flag[n];
		fi(n){
			fj(n){
				flag[i].pb(false);
			}
		}
		int cnt[3];
		cnt[0] = cnt[1] = cnt[2] = 0;
		fi(n){
			fj(n){
				if(s[i][j]=='X'){
					if(j+2<n && s[i][j+1]=='X'&&s[i][j+2]=='X'){
						if(flag[i][j]==false){
							flag[i][j]=true;
							cnt[(i+j)%3]++;
						}
						if(flag[i][j+1]==false){
							flag[i][j+1]=true;
							cnt[(i+j+1)%3]++;
						}
						if(flag[i][j+2]==false){
							flag[i][j+2]=true;
							cnt[(i+j+2)%3]++;
						}
					}
					if(j-2>=0 && s[i][j-1]=='X'&&s[i][j-2]=='X'){
						if(flag[i][j]==false){
							flag[i][j]=true;
							cnt[(i+j)%3]++;
						}
						if(flag[i][j-1]==false){
							flag[i][j-1]=true;
							cnt[(i+j-1)%3]++;
						}
						if(flag[i][j-1]==false){
							flag[i][j-1]=true;
							cnt[(i+j-1)%3]++;
						}
					}
					if(i+2<n && s[i+1][j]=='X'&&s[i+2][j]=='X'){
						if(flag[i][j]==false){
							flag[i][j]=true;
							cnt[(i+j)%3]++;
						}
						if(flag[i+1][j]==false){
							flag[i+1][j]=true;
							cnt[(i+j+1)%3]++;
						}
						if(flag[i+2][j]==false){
							flag[i+2][j]=true;
							cnt[(i+j+2)%3]++;
						}
					}
					if(i-2>=0 && s[i-1][j]=='X'&&s[i-2][j]=='X'){
						if(flag[i][j]==false){
							flag[i][j]=true;
							cnt[(i+j)%3]++;
						}
						if(flag[i-1][j]==false){
							flag[i-1][j]=true;
							cnt[(i+j-1)%3]++;
						}
						if(flag[i-2][j]==false){
							flag[i-2][j]=true;
							cnt[(i+j-2)%3]++;
						}
					}
					if(i-1>=0 && i+1<n && s[i-1][j]=='X' && s[i+1][j]=='X'){
						if(flag[i][j]==false){
							flag[i][j]=true;
							cnt[(i+j)%3]++;
						}
						if(flag[i-1][j]==false){
							flag[i-1][j]=true;
							cnt[(i+j-1)%3]++;
						}
						if(flag[i+1][j]==false){
							flag[i+1][j]=true;
							cnt[(i+j+1)%3]++;
						}

					}
					if(j-1>=0 && j+1<n && s[i][j-1]=='X' && s[i][j+1]=='X'){
						if(flag[i][j]==false){
							flag[i][j]=true;
							cnt[(i+j)%3]++;
						}
						if(flag[i][j-1]==false){
							flag[i][j-1]=true;
							cnt[(i+j-1)%3]++;
						}
						if(flag[i][j+1]==false){
							flag[i][j+1]=true;
							cnt[(i+j+1)%3]++;
						}
					}
				}
			}
			//cout << endl;
		}
		int mini = min(min(cnt[0], cnt[1]), cnt[2]);
		int target;
		fi(3){
			if(mini == cnt[i]){
				target = i;
				break;
			}
		}
		fi(n){
			fj(n){
				if(((i+j)%3)==target && flag[i][j]==true){
					moves++;
					s[i][j]='O';
				}
			}
		}
		//cout << moves <<endl ;
		fi(n){
			cout << s[i] << endl;
		}
	}

	return 0;
}
