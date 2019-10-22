/*
キーポイント
  参照先の型 &参照の名前 = 参照先;で参照を宣言できる
  通常の変数のように参照を宣言するときは参照先を指定する必要がある
  関数の引数に参照を用いる場合は、その関数を呼び出す時に渡した変数が参照先になる
  参照先を後から変更することはできない
  引数が参照になっている関数を呼び出すことを参照渡しという
  参照渡しは、無駄なコピーを避けたり複数の結果を返したいときに便利
*/


/*
参照は範囲for文でも用いることができ、これによって配列の要素を書き換える処理を簡潔に書くことができます。
vector<int> a = {1, 3, 2, 5};
for (int &x : a) {
  x = x * 2;
}
// aは{2, 6, 4, 10}となる
*/

#include <bits/stdc++.h>
using namespace std;
 
// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(vector<vector<int>> &A, int &correct_count, int &wrong_count) {
  // 呼び出し側のAの各マスを正しい値に修正する
  // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
  // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる
 
  // ここにプログラムを追記
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      int correct = (i + 1) * (j + 1);
      if (A.at(i).at(j) == correct) {
          correct_count++;
      } else {
          wrong_count++;
      }

      A.at(i).at(j) = correct;
    }
  }
}

// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }
 
  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる
 
  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);
 
  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  // 正しいマスの個数を出力
  cout << correct_count << endl;
  // 誤っているマスの個数を出力
  cout << wrong_count << endl;
}


