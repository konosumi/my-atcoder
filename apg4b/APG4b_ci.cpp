/**
 * EX14 - 三人兄弟の身長差 / 1.14
 * https://atcoder.jp/contests/APG4b/tasks/APG4b_ci
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int big = max(max(A, B), C);
  int small = min(min(A, B), C);
  cout << big - small << endl;
}
