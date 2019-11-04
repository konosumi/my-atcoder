/**
 * https://atcoder.jp/contests/abs/tasks/abc081_b
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // 黒板に N 個
  int N;
  cin >> N;

  // 整数 A1,...,AN
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  int cnt = 0;
  while (1) {
    for (int i = 0; i < N; i++) {
      // 2で割り切れない数が出現したら、回数を出力して終了する
      if (vec.at(i) % 2 != 0) {
        cout << cnt << endl;
        return 0;
      }

      vec.at(i) /= 2;
    }
    // 2で割った回数を加算する
    cnt++;
  }
}
