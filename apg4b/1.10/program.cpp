/*
キーポイント
  while文を使うと繰り返し処理ができる
  条件式が真のとき処理を繰り返す
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  cin >> A >> B;

  // ここにプログラムを追記

  cout << "A:";
  int i = 0;
  while (i < A) {
    cout << "]";
    i++;
  }
  cout << endl;

  cout << "B:";
  int j = 0;
  while (j < B) {
    cout << "]";
    j++;
  }
  cout << endl;
}
