/**
 * EX11 - 電卓をつくろう2 / 1.11
 * https://atcoder.jp/contests/APG4b/tasks/APG4b_cl
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A; // Nは回数
  cin >> N >> A;
 
  // ここにプログラムを追記
  string op;
  int B;
  for (int i = 0; i < N; i++) {
    cin >> op >> B;

    if (op == "/" && B == 0) {
      cout << "error" << endl;
      break;
    }
 
    cout << i + 1 << ":";

    if (op == "+") {
      A += B;
    } else if (op == "-") {
      A -= B;
    } else if (op == "*") {
      A *= B;
    } else if (op == "/") {
      A /= B;
    }

    cout << A << endl;
  }
}