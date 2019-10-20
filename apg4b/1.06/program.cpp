/*
キーポイント
  if文を使うと「ある条件が正しい時だけ処理をする」というプログラムが書ける
  else句を使うと「条件式が正しくなかった時」の処理を書ける
*/

/*
比較演算子は以下の6つです。 
x == y 	xとyは等しい
x != y 	xとyは等しくない
x > y 	xはyより大きい
x < y 	xはyより小さい
x >= y 	xはy以上
x <= y 	xはy以下
*/

/*
条件式の中にはもっと複雑な条件を書くこともできます。そのためには論理演算子を使います
!(条件式) 	条件式の結果の反転 	条件式が偽
条件式1 && 条件式2 	条件式1が真 かつ 条件式2が真 	条件式1と条件式2のどちらも真
条件式1 || 条件式2 	条件式1が真 または 条件式2が真 	条件式1と条件式2の少なくとも片方が真
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;
 
  if (op == "+") {
    cout << A + B << endl;
  }
  // ここにプログラムを追記
  if (op == "-") {
    cout << A - B << endl;
  }
  if (op == "*") {
    cout << A * B << endl;
  }
  if (op == "/") {
    if (B == 0) {
      cout << "error" << endl;
    } else {
      cout << A / B << endl;
    }
  }
  if (op == "?" || op == "=" || op == "!") {
      cout << "error" << endl;
  }
}
