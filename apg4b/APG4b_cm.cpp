/**
 * EX10 - 棒グラフの出力 / 1.10
 * https://atcoder.jp/contests/APG4b/tasks/APG4b_cm
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  cin >> A >> B;

  // ここにプログラムを追記

  cout << "A:";
  int i = 0;
  while (i < A) {
    cout << "]";
    i++;
  }
  cout << endl;

  cout << "B:";
  int j = 0;
  while (j < B) {
    cout << "]";
    j++;
  }
  cout << endl;
}
