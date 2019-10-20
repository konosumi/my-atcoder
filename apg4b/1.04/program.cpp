/*
キーポイント
    変数は「メモ」
    =は代入
    「データの種類」のことを型という
型 	書き込むデータの種類
int 	整数
double 	小数
string 	文字列
*/

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // 「データの種類」のことを型（かた）と言い、「変数の名前」のことを変数名
  // C++の =は代入 であって、「等しい」という意味ではないということに注意して下さい。
  int name;
 
  name = 10;
  // 変数の値を読み書きすることを「変数にアクセスする」ということもあります。
  cout << name << endl;     // 10
  cout << name + 2 << endl; // 10 + 2 → 12
  cout << name * 3 << endl; // 10 * 3 → 30
  // 変数の宣言時に,を間に入れることで複数の変数を同時に宣言することもできます。 
  int a = 10, b = 5;
}
*/

/*
利用できない変数名
以下の条件に該当する名前は変数名にできません。
  数字で始まる名前
  _以外の記号が使われている名前
  キーワード（C++が使っている一部の単語）

同じ名前の変数を複数宣言することはできません。

異なる型同士の計算では型変換が行われます。
例えば、int型とdouble型の計算結果はdouble型になります。

ただし、変換できない型同士は計算はコンパイルエラーになります。 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 一年の秒数
  int seconds = 365 * 24 * 60 * 60;
 
  // 以下のコメント/* */を消して追記する
  cout << seconds * 1 /* 1年は何秒か */ << endl;
  cout << seconds * 2 /* 2年は何秒か */ << endl;
  cout << seconds * 5 /* 5年は何秒か */ << endl;
  cout << seconds * 10 /* 10年は何秒か */ << endl;
}
