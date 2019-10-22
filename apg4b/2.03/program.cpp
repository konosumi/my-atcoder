/*
キーポイント
  2次元配列は2次元の表を扱うときに便利
  vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))で宣言できる
  初期値は省略可能
  変数名.at(i).at(j)でi行目j列目へアクセスできる
  変数名.size()で縦の大きさを取得できる
  変数名.at(0).size()で横の大きさを取得できる
  要素を指定して初期化する例
vector<vector<int>> data = {
  {7, 4, 0, 8},
  {2, 0, 3, 5},
  {6, 1, 7, 0},
};
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