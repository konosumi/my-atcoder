/*
キーポイント
  ループ処理を書くときの3ステップ
  1.ループを使わずに書く
  2.パターンを見つける
  3.ループで書き直す
  配列の要素を取り出しながらループする範囲for文
for (配列の要素の型 変数名 : 配列変数) {
  // 各要素に対する処理
}
*/

/*
C++には配列の要素に対する処理を簡潔に書くことができる範囲for文という構文が用意されています。
範囲for文を用いると上のプログラムは次のように書き直せます。

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> a = {1, 3, 2, 5};
  for (int x : a) {
    cout << x << endl;
  }
}
*/

/*
範囲for文はコンテナと呼ばれるデータ型に対して使うことができます。
配列はコンテナの一種です。 その他にも文字列型(string型)はコンテナの一種なので、範囲for文を用いることができます。

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string str = "hello";
  for (char c : str) {
    if (c == 'l') {
      c = 'L';
    }
    cout << c;
  }
  cout << endl;
}
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
 
  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  for (int i = 1; i < 5; i++) {
      if (data.at(i - 1) == data.at(i)) {
        cout << "YES" << endl;
        return 0;
      }
  }

  cout << "NO" << endl;
}
