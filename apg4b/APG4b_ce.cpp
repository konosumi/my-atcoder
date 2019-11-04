/**
 * EX18 - ゲーム大会 / 2.03
 * https://atcoder.jp/contests/apg4b/tasks/APG4b_ce
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M; // N人が参加して、M試合行われた
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    // Aは勝者、Bは敗者が入る
    cin >> A.at(i) >> B.at(i);
  }
 
  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> data(N, vector<char>(N));
  for (int i = 0; i < M; i++) {
      data.at(A.at(i) - 1).at(B.at(i) - 1) = 'o';
      data.at(B.at(i) - 1).at(A.at(i) - 1) = 'x';
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        if (data.at(i).at(j) == 'o' || data.at(i).at(j) == 'x') {
          cout << data.at(i).at(j);
        } else {
          cout << '-';
        }

        if (j < N - 1) {
          cout << ' ';
        }
    }

    cout << endl;
  }
}
