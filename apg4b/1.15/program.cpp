/*
キーポイント
  関数を作成することを関数を定義すると言う

返り値の型 関数名(引数1の型 引数1の名前, 引数2の型 引数2の名前, ...) {
  処理
}
返り値の型 関数名(引数1の型 引数1の名前, 引数2の型 引数2の名前, ...) {
  処理
}
  関数の返り値はreturn文を使ってreturn 返り値;で指定する
  関数の返り値が無い場合は返り値の型にvoidを指定し、return文はreturn;と書く
  関数の引数が不要な場合は定義と呼び出しで()だけを書く
  処理がreturn文の行に到達した時点で関数の処理は終了する
  返り値がある関数で返り値の指定を忘れた場合、どんな値が返ってくるかは決まっていない
  引数に渡された値は基本的にコピーされる
*/

/*
プロトタイプ宣言をすれば関数を定義する前に呼び出すことができます。
#include <bits/stdc++.h>
using namespace std;
 
// プロトタイプ宣言
void hello();
 
int main() {
  // プロトタイプ宣言をしたので呼び出せる
  hello();
}
 
void hello() {
  cout << "hello!" << endl;
  return;
}
*/


/*
main関数
はじめのプログラムから出てきていたmain関数も関数の一つです。
ただし、main関数は特別扱いされていて、returnを省略した場合は必ず0が返るようになっています。
*/

#include <bits/stdc++.h>
using namespace std;
 
// 1人のテストの点数を表す配列から合計点を計算して返す関数
// 引数 scores: scores.at(i)にi番目のテストの点数が入っている
// 返り値: 1人のテストの合計点
int sum(vector<int> scores) {
  // ここにプログラムを追記
  int sum = 0, N = scores.size();
  for (int i = 0; i < N; i++) {
      sum += scores.at(i);
  }
  return sum;
}
 
// 3人の合計点からプレゼントの予算を計算して出力する関数
// 引数 sum_a: A君のテストの合計点
// 引数 sum_b: B君のテストの合計点
// 引数 sum_c: C君のテストの合計点
// 返り値: なし
void output(int sum_a, int sum_b, int sum_c) {
  // ここにプログラムを追記
  cout << sum_a * sum_b * sum_c << endl;
}
 
// -------------------
// ここから先は変更しない
// -------------------
 
// N個の入力を受け取って配列に入れて返す関数
// 引数 N: 入力を受け取る個数
// 返り値: 受け取ったN個の入力の配列
vector<int> input(int N) {
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  return vec;
}
 
int main() {
  // 科目の数Nを受け取る
  int N;
  cin >> N;
 
  // それぞれのテストの点数を受け取る
  vector<int> A, B, C;
  A = input(N);
  B = input(N);
  C = input(N);
 
  // プレゼントの予算を出力
  output(sum(A), sum(B), sum(C));
}
