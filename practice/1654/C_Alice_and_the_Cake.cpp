/*
 * Problem   : 1654C - Alice and the Cake
 * Link      : https://codeforces.com/contest/1654/problem/C
 * Submission: https://codeforces.com/contest/1654/submission/150291754
 * Rating    : 1400   Tags: data structures, greedy, implementation, sortings
 * Verdict   : Accepted (93 ms, 3200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-20 (Practice)
 */
// #include <bits/stdc++.h>
// using namespace std;

// #define mp make_pair
// #define pb push_back
// #define ff first
// #define ss second
// #define ll long long
// #define vi vector<int>
// #define vl vector<ll>
// #define pi pair<int, int>
// #define pl pair<ll, ll>
// #define vpi vector<pi >
// #define vpl vector<pl >
// #define endl '\n'
// #define SetBit(x, k) (x |= (1LL << k))
// #define ClearBit(x, k) (x &= ~(1LL << k))
// #define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
// #define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
// #define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define all(a) a.begin(),a.end()
// #define rep(i, a, b) for(int i=a; i<b; i++)
// #define pre(i, a, b) for(int i=a; i>=b; i--)


// int cnt=0;
// bool binarySearch(map<ll, ll>& mp, ll s){
//     if(mp[s]>0){
//         mp[s]--;
//         return true;
//     }
//     return false;
//     // cout << "arr:";
//     // rep(i, 0, n){
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;
//     // int l=0, r=n-1;
//     // int mid;
//     // while(l<=r){
//     //     mid = (r+l)/2;
//     //     if(arr[mid]==s){
//     //         // cout << arr[mid] << " " << flag[mid] << endl;
//     //         int m = mid;
//     //         while(arr[mid]==s){
//     //             if(!flag[mid]){
//     //                 flag[mid]=true;
//     //                 return true;
//     //             }
//     //             mid++;
//     //         }
//     //         mid = m-1;
//     //         while(arr[mid]==s){
//     //             if(!flag[mid]){
//     //                 flag[mid]=true;
//     //                 return true;
//     //             }
//     //             mid--;
//     //         }
//     //         // cout << arr[mid] << " " << flag[mid] << endl;
//     //         return false;
//     //     }
//     //     if(arr[mid]>s){
//     //         r = mid-1;
//     //     }
//     //     else{
//     //         l = mid+1;
//     //     }
//     // }
//     // return false;
// }

// bool Ispossible(ll s, map<ll, ll>& mp, int n,  int div){
//     if(div > n){
//         return false;
//     }
//     if(binarySearch(mp, s)){
//         // cout << s << endl;
//         return true;
//     }
//     if(s==1){
//         // cout << "arr:";
//         // rep(i, 0, n){
//         //     cout << flag[i] << " ";
//         // }
//         // cout << endl;
//         return false;
//     }
//     int x , y;
//     x = s/2;
//     y = x + (s&1LL);
//     // cout << endl << x << " " << y << endl;
//     bool ret = Ispossible(x, mp, n, div+1) & Ispossible(y, mp,n, div+1);
//     return ret;
// }

// int main()
// {
//     fios
//     TestCases{
//         int n;
//         cin >> n;
//         vl arr(n);
//         ll sum=0;
//         map<ll, ll> mp;
//         rep(i, 0, n){
//             cin >> arr[i];
//             mp[arr[i]]++;
//             sum += arr[i];
//         }
//         // vector<bool> flag(n, false);
//         sort(all(arr));
//         if(Ispossible(sum, mp,n,  1)){
//             cout << "YES" << endl;
//         }
//         else{
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

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


int main()
{
    fios
    TestCases{
        int n;
        cin >> n;
        map<ll, ll> mp;

        ll x, sum = 0;
        rep(i, 0, n){
            cin >> x;
            mp[x]++;
            sum+=x;
        }
        priority_queue<ll> pq;
        pq.push(sum);
        bool f = true;
        ll cnt = 1;
        while(!pq.empty()){
            if(cnt>n){
                f = false;
                cout << "NO" << endl;
                break;
            }
            x = pq.top();
            pq.pop();
            if(mp[x]){
                mp[x]--;
                continue;
            }
            ll m = x/2;
            ll nn = x-m;
            pq.push(m);
            pq.push(nn);
            cnt++;
        }
        if(f){
            cout << "YES" << endl;
        }
    }
    return 0;
}
