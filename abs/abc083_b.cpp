/**
 * https://atcoder.jp/contests/abs/tasks/abc083_b
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // N = 整数の数
  // 各桁の和が A 以上 B 以下
  int N, A, B;
  cin >> N >> A >> B;

  // 総合計を算出する
  int totalSum = 0;
  for (int n = 1; n <= N; n++) {
    int sum = 0, tmpN = n;

    while (tmpN > 0) {
      // tmpNの1桁目を足す
      sum += tmpN % 10;
      // 10で割ることで、tmpNを10進数で見て1桁右シフトする
      tmpN /= 10;
    } 

    // 各桁の和が A 以上 B 以下であれば
    if (A <= sum && sum <= B) {
      totalSum += n;
    }
  }
  cout << totalSum << endl;
}
