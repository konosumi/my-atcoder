/**
 * https://atcoder.jp/contests/abs/tasks/abc081_b
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b;
  cin >> a >> b;
  cout << ((a * b % 2 == 0) ? "Even" : "Odd") << endl;
}
