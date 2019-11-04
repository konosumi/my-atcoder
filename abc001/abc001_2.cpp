/**
 * B - 視程の通報
 * https://atcoder.jp/contests/abc001/tasks/abc001_2
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int m;
  cin >> m;

  // 0.1km 未満： VVの値は 00 とする。
  int vv = 0;
  if (100 <= m && m <= 5 * 1000) {
    // 距離 (km) を 10 倍した値とする。1 桁の場合は上位に 0 を付す。
    vv = m / 100;
  } else if (6 * 1000 <= m && m <= 30 * 1000) {
    // 距離 (km) に 50 を足した値とする。
    vv = m / 1000 + 50;
  } else if (35 * 1000 <= m && m <= 70 * 1000) {
    // 距離 (km) から 30 を引いて 5 で割った後、80 を足した値とする。
    vv = (m / 1000 - 30) / 5 + 80;
  } else if (70 * 1000 < m) {
    // VVの値は 89 とする。
    vv = 89;
  }

  // VVは必ず（上位の 0 を含めて）2桁の整数である
  printf("%02d", vv);
  cout << endl;
}
