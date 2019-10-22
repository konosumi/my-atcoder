/*
キーポイント
  関数を使うとプログラムのまとまった機能を簡単に使うことができる
  C++で用意されている、関数等がまとまっているもののことをSTLという
  関数名(引数1, 引数2, ...)で関数を呼び出せる
  関数に( )で渡す値のことを引数という
  関数の計算結果のことを返り値または戻り値という
  引数と返り値は型のルールが決まっており、間違えるとコンパイルエラーになる
*/

/*
配列を渡す形式

STLの関数に配列を渡す場合、次の形式で渡すことが多いです。
関数名(配列変数.begin(), 配列変数.end())
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int big = max(max(A, B), C);
  int small = min(min(A, B), C);
  cout << big - small << endl;
}