/*
キーポイント
  条件式の結果は真のとき1に、偽のとき0になる
  1をtrueで、0をfalseで表す
  bool型はtrueとfalseだけが入る型
*/

/*
bool型と数値

実は、0と1以外の数値もbool型の値のように扱うことができます。
その場合、0のときだけfalse、それ以外の数値はすべてtrueになります。
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true;// true または false
  bool b = false; // true または false
  bool c = true; // true または false
 
  // ここから先は変更しないこと
 
  if (a) {
    cout << "At";
  }
  else {
    cout << "Yo";
  }
 
  if (!a && b) {
    cout << "Bo";
  }
  else if (!b || c) {
    cout << "Co";
  }
 
  if (a && b && c) {
    cout << "foo!";
  }
  else if (true && false) {
    cout << "yeah!";
  }
  else if (!a || c) {
    cout << "der";
  }
 
  cout << endl;
}