/**
 * EX13 - 平均との差 / 1.13
 * https://atcoder.jp/contests/APG4b/tasks/APG4b_cj
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;

  // 入力値の受け取り
  vector<int> score(N);
  for (int i = 0; i < N; i++) {
    cin >> score.at(i);
  }

  // 合計点
  int sum = 0;
  for (int i = 0; i < N; i++) {
    sum += score.at(i);
  }

  // 平均点
  int average = sum / N;

  for (int i = 0; i < N; i++) {
    int diff = score.at(i) - average;
    if (diff > 0) {
      cout << diff << endl;
    } else {
      cout << diff * -1 << endl;
    }
  }
}
