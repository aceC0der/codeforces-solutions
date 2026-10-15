/*
 * Problem   : 339D - Xenia and Bit Operations
 * Link      : https://codeforces.com/contest/339/problem/D
 * Submission: https://codeforces.com/contest/339/submission/270569882
 * Rating    : 1700   Tags: data structures, trees
 * Verdict   : Accepted (280 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-15 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)


class segmentTree{
public:
	vi arr;
	vi tree;
	segmentTree(vi& a){
		arr = a;
		int n = a.size();
		if(n>1e4){
			tree.resize(n*4);
		}
		else{
			tree.resize(3*n);
		}
	}
	int build(int root,int low,int high){// its zero based;
		if(low==high){
			tree[root]=arr[low];
			return 1;
		}
		int left,right,mid;
		left=root*2+1;
		right=left+1;
		mid=low+high;
		mid/=2;
		int ret1 = build(left,low,mid);
		int ret2 = build(right,mid+1,high);
		if(ret1)
			tree[root]=tree[left]|tree[right];
		else tree[root]=tree[left]^tree[right];

		return !ret1;
	}

	int update(int root, int b,int e,int i,int value){//here b and e is tree range and i and j is update range;
		if(i<b||i>e){
			return -1;
		}
		if(i==e&&i==b){
			tree[root]=value;
			return 1;
		}
		int left=root*2+1;
		int right=root*2+2;
		int mid=(b+e)/2;
		// cout << b << " " << e << endl;
		int ret1 = update(left,b,mid,i,value);
		int ret2 = update(right,mid+1,e,i,value);
		int r = max(ret1, ret2);
		if(r)
			tree[root]=tree[left]|tree[right];
		else tree[root]=tree[left]^tree[right];
		return !r;
	}
};


void solve(){
	int n, q;
	cin >> n >> q;
	n = 1<<n;
	vi a(n);
	rep(i, 0, n) cin >> a[i];
	segmentTree tree(a);
	int x = tree.build(0, 0, n-1);
	rep(i, 0, q){
		int idx, val;
		cin >> idx >> val;
		x = tree.update(0, 0, n-1, idx-1, val);
		cout << tree.tree[0] << endl;
	}


}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fios
	// TestCases{
		solve();
	// }
	return 0;
}
