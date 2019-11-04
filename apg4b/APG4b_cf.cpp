/**
 * EX17 - 果物屋さんでお買い物 / 2.02
 * https://atcoder.jp/contests/apg4b/tasks/APG4b_cf
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }
 
  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記
  int pattern = 0;
  for (int x: A) {
      for (int y: P) {
          if (x + y == S) {
              pattern++;
          }
      }
  }
  cout << pattern << endl;
}
