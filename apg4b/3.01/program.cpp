/*
キーポイント
  整数型には扱える値の範囲が決まっている
  計算の途中で扱える範囲を超えることをオーバーフローといい、正しく計算が行えなくなる
  int型より大きい値を扱いたいときはint64_t型を使う
  double型の値を出力する際に出力する小数点以下の桁数を指定するには以下のようにする
cout << fixed << setprecision(桁数);
  (型)値で型変換（キャスト）を行うことができる
  暗黙的にキャストが起こる場合もある
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main() {
  cout << 2000000000 * 2 << endl;     // int * int         -> int
  cout << 2000000000LL * 2LL << endl; // int64_t * int64_t -> int64_t
  cout << 2000000000LL * 2 << endl;   // int64_t * int     -> int64_t
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  cout << 3.14159265358979 << endl;
 
  // 小数点以下10桁まで
  cout << fixed << setprecision(10);
 
  cout << 3.14159265358979 << endl;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x = 12345;
  double pi = 3.14159265358979;
  // int %d int64_t %ld（%lld） double %lf char %c
  printf("x = %d, pi = %lf\n", x, pi);
}
*/

/*
なお、string型の文字列を出力する場合、次のように書く必要があります。

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s = "hello";
  // フォーマット指定子 %s を用い s.c_str() を渡す
  printf("%s\n", s.c_str());
}
*/

/*
scanfという関数で入力を受け取ることもできます。

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x;
  double pi;
  // scanfによる入力
  scanf("x = %d, pi = %lf", &x, &pi);
 
  printf("x = %d, pi = %lf\n", x, pi);
}
*/

/*
数値型から文字列に変換するには、to_string関数を用います。

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int number = 100;
  string s = to_string(number);
  cout << s + "yen" << endl;
}
*/

/*
文字列からint型に変換するには、stoi関数を用います。

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s = "100";
  int n = stoi(s);
  cout << n << endl;
}
*/

/*
極端な話ですが、使用するメモリ量をそこまで気にしないのであれば全てint64_t型かuint64_t型を使ってしまうという手もあります。
*/

/*
符号なし整数は負の数を扱えないため、例えばunsigned char型の0から1を引くと255となってしまいます。

size_t型は符号なしの整数型であるため、次のようなプログラムは意図した挙動になりません。

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> data(0);  // サイズ0
  cout << data.size() - 1 << endl;  // -1ではない
 
  // 配列のサイズ-1回だけループしたい
  for (int i = 0; i < data.size() - 1; i++) {
    cout << i << endl;
  }
}
*/


