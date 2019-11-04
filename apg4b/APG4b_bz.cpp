/**
 * EX23 - 最頻値 / 3.03
 * https://atcoder.jp/contests/apg4b/tasks/APG4b_bz
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int maxKey = 0, maxValue = 0;
  map<int, int> A;
  for (int i = 0; i < N; i++) {
    int B;
    cin >> B;
    if (A.count(B)) {
      A[B]++;
    } else {
      A[B] = 1;
    }

    if (A[B] > maxValue) {
        maxKey = B;
        maxValue = A[B];
    }
  }

  cout << maxKey << " " << maxValue << endl;
}
