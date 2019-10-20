/*
キーポイント

配列は様々なデータの列を扱うことができる機能
vector<型> 配列変数名;で配列変数を宣言できる
配列変数名 = { 要素1, 要素2, ... };で配列変数に値を代入できる
配列変数.at(i)でi番目の要素にアクセスできる
配列変数.size()で配列の要素数を取得できる
vector<型> 配列変数名(要素数)と書くと指定した要素数で配列を初期化できる
配列でN
個の入力を受け取るときは、N要素で初期化した後、for文の中でatを使って1ずつ受け取る
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
