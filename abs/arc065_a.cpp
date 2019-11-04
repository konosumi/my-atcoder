/**
 * https://atcoder.jp/contests/abs/tasks/arc065_a
 */

#include <bits/stdc++.h>
using namespace std;

// 英小文字からなる文字列 S が与えられます。
string S;

bool addStr() {
  // まったく等しい文字列であれば一致とみなす
  //if (S == "") {
  //  return true;
  //}

  // 作成途中のTが、Sと現時点で乖離していれば一致することは起き得ない
  int length = S.length();
  if (length < 5) {
     return false;
  }

  if (length >= 7 && S.substr(0, 7) == "dreamer") {
    S = S.substr(7);
    if (S == "") {
      return true;
    }
    if (addStr()) {
      return true;
    }
    S = "dreamer" + S;
  }
  if (S.substr(0, 5) == "dream") {
    S = S.substr(5);
    if (S == "") {
      return true;
    }
    if (addStr()) {
      return true;
    }
    S = "dream" + S;
  }
  if (length >= 6 && S.substr(0, 6) == "eraser") {
    S = S.substr(6);
    if (S == "") {
      return true;
    }
    if (addStr()) {
      return true;
    }
    S = "eraser" + S;
  }
  if (S.substr(0, 5) == "erase") {
    S = S.substr(5);
    if (S == "") {
      return true;
    }
    if (addStr()) {
      return true;
    }
    S = "erase" + S;
  }

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
