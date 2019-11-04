/**
 * A - 9x9
 * https://atcoder.jp/contests/abc144/tasks/abc144_a
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A < 10 && B < 10) {
    cout << A * B << endl;
  } else {
    cout << "-1" << endl;
  }
}
