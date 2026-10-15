/*
 * Problem   : 1891A - Sorting with Twos
 * Link      : https://codeforces.com/contest/1891/problem/A
 * Submission: https://codeforces.com/contest/1891/submission/232926275
 * Rating    : 800   Tags: constructive algorithms, sortings
 * Verdict   : Accepted (155 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-11-16 (Practice)
 */
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int i=1, j=1;
        bool f = false;
        while(i<=j){
            if(i==j){
                if(j==n){
                    break;
                }
                j = min(j*2, n);
                i++;
                continue;
            }
            if(arr[i-1]>arr[i]){
                cout << "NO" << endl;
                f = true;
                break;
            }
            i++;
        }
        if(f) continue;
        cout << "YES" << endl;
    }
    

    return 0;
}
