/**
 * EX22 - 2つ目の値でソート / 3.02
 * https://atcoder.jp/contests/apg4b/tasks/APG4b_ca
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  typedef pair<int, int> pii;
  int N;
  cin >> N;
  vector<pii> ab(N);

  for (int i = 0; i < N; i++) {
    // cin >> ab.at(i).second >> ab.at(i).first;
    cin >> ab.at(i).first >> ab.at(i).second;
  }

  // sort(ab.begin(), ab.end());

  for (int i = 0; i < N; i++) {
    for (int j = N - 1; j > 0; j--) {
      if (ab.at(j).second < ab.at(j - 1).second) {
          swap(ab.at(j), ab.at(j - 1));
      }
    }
  }

  for (int i = 0; i < N; i++) {
      // cout << ab.at(i).second << " " << ab.at(i).first << endl;
      cout << ab.at(i).first << " " << ab.at(i).second << endl;
  }
}
