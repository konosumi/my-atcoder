/**
 * ABC086C - Traveling
 * https://atcoder.jp/contests/abs/tasks/arc089_a
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;

  int oldT = 0, oldX = 0, oldY = 0;
  int t, x, y;

  for (int i = 0; i < N; i++) {
    // 時刻t に 点 (x,y) にいるという情報が与えられる
    cin >> t >> x >> y;

    int moveT = t - oldT;
    int moveX = abs(x - oldX);
    int moveY = abs(y - oldY);
    // 時間内にX方向にmoveX移動し、Y方向にmoveY移動すると、何秒残るか
    int freeTime = moveT - moveX - moveY;
    // 移動時間が足りなかった、または偶数でない場合は調整ができず移動できない
    if (freeTime < 0 || freeTime % 2 != 0) {
      cout << "No" << endl;
      return 0;
    }

    oldT = t;
    oldX = x;
    oldY = y;
  }

  cout << "Yes" << endl;
}
