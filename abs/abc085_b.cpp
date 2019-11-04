/**
 * ABC085B - Kagami Mochi
 * https://atcoder.jp/contests/abs/tasks/abc085_b
 */
#include <bits/stdc++.h>
using namespace std;

void uniqueVector(vector<int> &vec) {
  // std::sortとstd::uniqueで、std::vectorの重複要素を削除する
  // https://qiita.com/ysk24ok/items/30ae72f4f1060b088588
  sort(vec.begin(), vec.end());
  // std::uniqueは隣接する重複要素を削除するが、vectorの長さなどには変更を加えないため、末尾にはゴミが残ることになる。
  // std::uniqueはゴミの手前のポインタを返すので、vector::eraseで後ろのゴミを削除する。
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
}
 
int main() {
  //  N 枚の円形の餅
  int N;
  cin >> N;

  // 整数 d1 : dN
  // i 枚目の餅の直径は di センチメートル
  vector<int> mochi(N);
  for (int i = 0; i < N; i++) {
    cin >> mochi.at(i);
  }

  // 同じサイズの餅は積み重ねできないので、重複を削除すれば鏡餅のサイズが算出できる
  uniqueVector(mochi);
  cout << mochi.size() << endl;
}
