/**
 * EX12 - 足したり引いたり / 1.12
 * https://atcoder.jp/contests/APG4b/tasks/APG4b_ck
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;

  int sum = 1, len = S.size();
  for (int i = 1; i < len; i += 2) {
      char c = S.at(i);
      if (c == '+') {
          sum++;
      } else if (c == '-') {
          sum--;
      }
  }

  cout << sum << endl;
}
