/*
キーポイント
  文字列を扱うにはstring型を使う
  文字を扱うにはchar型を使う
  文字列変数.size()で文字列の長さを取得できる
  文字列変数.at(i)でi

文字目にアクセスできる
文字列変数.at(i)のiを添え字という
添字は0から始まる
添字の値が正しい範囲内に無いと実行時エラーになる
*/

/*
添字の値が正しい範囲内に無いと実行時エラーになります。
string型やchar型は全角文字を正しく扱えません。 
C++で全角文字を扱う場合、string型ではない別の文字列型（u32string等）が用いられます。
.size()や後述する==演算子等を利用する場合、一度変数に格納するか、"文字列"s.size()のように" "の末尾にsをつける必要があります。

  cout << "Hello"s.size() << endl; // 5（sを末尾につける）
  cout << "Hello".size() << endl; // できない
*/

/*
== 	2つの文字列が完全に一致している
!= 	2つの文字列に違いがある
<, <=, >, >= 	辞書順による比較

+演算子を使うと文字列同士を連結できます。+=を使うこともできます。 

 +演算子による連結
  cout << hello + ", world!" << endl; // Hello, world!
 
  // +=演算子による連結
  hello += ", AtCoder!";
  cout << hello << endl; // Hello, AtCoder!

string型とchar型は==で比較できません。 

string型とchar型を+すると、文字列同士と同様に連結できます。 

int main() {
  string str = "Hello";
 
  char c = str.at(0);
  cout << str + c << endl; // HelloH
}
*/

/*
char型の変数にcinで入力すると一文字ずつ取り出すことができます。 

「改行」などの特殊な文字をプログラム中で表現する場合、エスケープシーケンスを利用します。
cout << "こんにちは\nAtCoder";

行単位での入力
  string s, t;
  getline(cin, s); // 変数sで入力を一行受け取る
  getline(cin, t); // 変数tで入力を一行受け取る
 
  cout << "一行目 " << s << endl;
  cout << "二行目 " << t << endl;
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;

  int sum = 1, len = S.size();
  for (int i = 1; i < len; i += 2) {
      char c = S.at(i);
      if (c == '+') {
          sum++;
      } else if (c == '-') {
          sum--;
      }
  }

  cout << sum << endl;
}
