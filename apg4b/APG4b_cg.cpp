/**
 * EX16 - 隣り合う同じ値を探す / 2.01
 * https://atcoder.jp/contests/apg4b/tasks/APG4b_cg
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
 
  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  for (int i = 1; i < 5; i++) {
      if (data.at(i - 1) == data.at(i)) {
        cout << "YES" << endl;
        return 0;
      }
  }

  cout << "NO" << endl;
}
