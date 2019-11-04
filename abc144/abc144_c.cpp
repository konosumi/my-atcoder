/**
 * C - Walk on Multiplication Table
 * https://atcoder.jp/contests/abc144/tasks/abc144_c
 */
#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;

int main() {
  long long N;
  cin >> N;

  long long cnt = N - 1;
  for (long long i = 1; i * i < N; i++) {
    if (N % i == 0) {
      long long nowCnt = (i -1) + (N / i - 1);
      if (nowCnt < cnt) {
        cnt = nowCnt;
      }
    }
  }

  cout << cnt << endl;
}
