/**
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
 
// 英小文字からなる文字列 S が与えられます。
string S;

bool addStr() {
  // 文字列が等しくなると空になる
  if (S == "") {
    return true;
  }

  int length = S.length();
  if (length < 5) {
     return false;
  }

  // T の末尾に dream dreamer erase eraser のいずれかを追加する。
  if (length >= 7 && S.substr(0, 7) == "dreamer") {
    S = S.substr(7);
    if (addStr()) {
      return true;
    }
    S = "dreamer" + S;
  }
  if (S.substr(0, 5) == "dream") {
    S = S.substr(5);
    if (addStr()) {
      return true;
    }
    S = "dream" + S;
  }
  if (length >= 6 && S.substr(0, 6) == "eraser") {
    S = S.substr(6);
    if (addStr()) {
      return true;
    }
    S = "eraser" + S;
  }
  if (S.substr(0, 5) == "erase") {
    S = S.substr(5);
    if (addStr()) {
      return true;
    }
    S = "erase" + S;
  }

  return false;
}

int main() {
  cin >> S;

  //  Tが空文字列である状態から始める
  cout << (addStr() ? "YES" : "NO") << endl;
}
