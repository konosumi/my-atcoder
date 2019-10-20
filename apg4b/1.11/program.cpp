/*
キーポイント
for文は繰り返し処理でよくあるパターンをwhile文より短く書くための構文
「初期化」→「条件式」→「処理」→「更新」→「条件式」→「処理」→...という順で実行され、条件式が真のとき繰り返し続ける
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