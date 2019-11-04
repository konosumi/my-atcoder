/**
 * https://atcoder.jp/contests/abs/tasks/arc065_a
 */

#include <bits/stdc++.h>
using namespace std;

// 英小文字からなる文字列 S が与えられます。
string S;
string T = "";

bool addStr() {
  // まったく等しい文字列であれば一致とみなす
  if (T == S) {
    return true;
  }

  // 最低5文字以上の開きがないと、文字が追加できない
  int diff = S.length() - T.length();

  // 作成途中のTが、Sと現時点で乖離していれば一致することは起き得ない
  /*
  if (diff > 0 && T != S.substr(0, T.length())) {
     return false;
  }*/

  if (diff >= 7 && S.substr(T.length(), 7) == "dreamer") {
    T = T + "dreamer";
    if (addStr()) {
      return true;
    } else {
      T = T.substr(0, T.length() - 7);
    }

    T = T + "dream";
    if (addStr()) {
      return true;
    } else {
      T = T.substr(0, T.length() - 5);
    }
  }
  /*
  if (diff >= 5 && S.substr(T.length(), 5) == "dream") {
    return addStr(T + "dream");
  }
  if (diff >= 6 && S.substr(T.length(), 6) == "eraser") {
    return addStr(T + "eraser") || addStr(T + "erase");
  }
  if (diff >= 5 && S.substr(T.length(), 5) == "erase") {
    return addStr(T + "erase");
  }*/

  return false;
  // T の末尾に dream dreamer erase eraser のいずれかを追加する。
  // 各パターンでの一致を検証する
  // return addStr(T + "dream") || addStr(T + "dreamer") || addStr(T + "erase") || addStr(T + "eraser");
}

int main() {
  cin >> S;

  //  Tが空文字列である状態から始める
  cout << (addStr() ? "YES" : "NO") << endl;
}
