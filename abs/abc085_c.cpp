/**
 * ABC085C - Otoshidama
 * https://atcoder.jp/contests/abs/tasks/abc085_c
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  //  N 枚入っていて、合計で Y 円だった
  int N, Y;
  cin >> N >> Y;

  // N 枚のお札の合計金額が Y 円となることがありえない場合は、-1 -1 -1 と出力せよ。
  // 10000 円札 x 枚、5000 円札 y 枚、1000 円札 z 枚」として、x、y、z を空白で区切って出力せよ
  for (int x = 0; x <= N; x++) {
    for (int y = 0; y <= N - x; y++) {
      int z = N - x - y;
      if (10000 * x + 5000 * y + 1000 * z == Y) {
        cout << x << ' ' << y << ' ' << z << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
}
