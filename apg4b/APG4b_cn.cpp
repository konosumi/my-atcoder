/**
 * EX9 - 複合代入演算子を使おう / 1.09
 * https://atcoder.jp/contests/APG4b/tasks/APG4b_cn
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x, a, b;
  cin >> x >> a >> b;
 
  // 1.xに1を足した値
  x++;
  cout << x << endl;
 
  // ここにプログラムを追記
  // 2. (1.で出力した値)に(a+b)を掛けた値
  x *= a+b;
  cout << x << endl;

  // 3. (2.で出力した値)に(2.で出力した値)を掛けた値
  x *= x;
  cout << x << endl;

  // 4. (3.で出力した値)から1を引いた値
  x -= 1;
  cout << x << endl;
}
