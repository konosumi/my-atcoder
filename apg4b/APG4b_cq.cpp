/**
 * EX6 - 電卓をつくろう / 1.06
 * https://atcoder.jp/contests/APG4b/tasks/APG4b_cq
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;
 
  if (op == "+") {
    cout << A + B << endl;
  }
  // ここにプログラムを追記
  else if (op == "-") {
    cout << A - B << endl;
  } else if (op == "*") {
    cout << A * B << endl;
  } else if (op == "/") {
    if (B == 0) {
      cout << "error" << endl;
    } else {
      cout << A / B << endl;
    }
  // } else if (op == "?" || op == "=" || op == "!") {
  } else {
    cout << "error" << endl;
  }
}
