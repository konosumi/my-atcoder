/**
 * https://atcoder.jp/contests/abs/tasks/abc087_b
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // A = 500円玉の数
  // B = 100円玉の数
  // C = 50円玉の数
  // X = ちょうどの合計金額
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  // 何通りあるかを算出する
  int cnt = 0;
  for (int a = 0; a <= A; a++) {
    for (int b = 0; b <= B; b++) {
      for (int c = 0; c <= C; c++) {
        if (a * 500 + b * 100 + c * 50 == X) {
          cnt++;
        }
      }
    }
  }

  cout << cnt << endl;
}
