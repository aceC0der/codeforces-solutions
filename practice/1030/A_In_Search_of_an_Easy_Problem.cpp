/*
 * Problem   : 1030A - In Search of an Easy Problem
 * Link      : https://codeforces.com/contest/1030/problem/A
 * Submission: https://codeforces.com/contest/1030/submission/268499954
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-02 (Practice)
 */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}
