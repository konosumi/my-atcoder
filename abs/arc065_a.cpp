/**
 * ABC049C - 白昼夢 / Daydream
 * https://atcoder.jp/contests/abs/tasks/arc065_a
 */
#include <bits/stdc++.h>
using namespace std;

/**
 * 正規表現を使った別解
int main() {
  string S;
  cin >> S;

  // 正規表現により、マッチした文字を取り除いていき、ぴったり空になるかをチェックする
  S = regex_replace(S, regex("eraser"), "");
  S = regex_replace(S, regex("erase"), "");
  S = regex_replace(S, regex("dreamer"), "");
  S = regex_replace(S, regex("dream"), "");
  cout << (S == "" ? "YES" : "NO") << endl;
}
*/

string S;

void checkStr() {
  // 文字列の長さ
  int length = S.length();

  // Sの末尾からdreamerを取り除く
  if (length >= 7 && S.substr(length - 7, length) == "dreamer") {
    S = S.substr(0, length - 7);
    return checkStr();
  }
  // Sの末尾からdreamを取り除く
  if (length >= 5 && S.substr(length - 5, length) == "dream") {
    S = S.substr(0, length - 5);
    return checkStr();
  }

  // Sの末尾からeraserを取り除く
  if (length >= 6 && S.substr(length - 6, length) == "eraser") {
    S = S.substr(0, length - 6);
    return checkStr();
  }
  // Sの末尾からeraseを取り除く
  if (length >= 5 &&  S.substr(length - 5, length) == "erase") {
    S = S.substr(0, length - 5);
    return checkStr();
  }
  
  return;
}

int main() {
  // 英小文字からなる文字列 S が与えられます。
  cin >> S;
  checkStr();

  // 末尾から文字列を取り除いていった結果、空になれば S=Tになる
  cout << (S == "" ? "YES" : "NO") << endl;
}
