/*
キーポイント
プログラムは上から下へ順番に実行される
cin >> 変数 で入力を受け取ることができる
スペースと改行で区切られて入力される
*/

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a;
  // 入力を受け取るには cinと>> を使います。
  // 変数aで入力を受け取る
  cin >> a;
  cout << a * 10 << endl;

  // 整数以外のデータを受け取りたいときは、そのデータの種類に合わせた型の変数を使います。
  string text;
  double d;
  cin >> text;
  cin >> d;
  cout << text << ", " << d << endl;

  // coutと同じように、cinも>>を繋げて入力を受け取ることができます。 
  // 入力が複数ある場合は、スペースか改行で区切られていれば分解して入力してくれます。 
  int a, b, c;
  cin >> a >> b >> c;
  cout << a * b * c << endl;
}
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // ここにプログラムを追記
  int a, b;
  cin >> a >> b;
  cout << a + b << endl;
}
