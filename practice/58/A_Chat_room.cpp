/*
 * Problem   : 58A - Chat room
 * Link      : https://codeforces.com/contest/58/problem/A
 * Submission: https://codeforces.com/contest/58/submission/73432865
 * Rating    : 1000   Tags: greedy, strings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-17 (Practice)
 */
#include <iostream>
using namespace std;
string a, b = "hello";
int j = 0, pas = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[j]) {
            j++;
            pas++;

            if (pas == 5) {
                break;
            }
        }
    }
    if (pas == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
