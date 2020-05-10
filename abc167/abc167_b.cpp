/**
 * B - Easy Linear Programming
 * https://atcoder.jp/contests/abc167/tasks/abc167_b
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // 1 が書かれたカードが A 枚、0 が書かれたカードが B 枚、 −1 が書かれたカードが C 枚あります。
    // これらのカードから、ちょうど K 枚を選んで取るとき、取ったカードに書かれた数の和として、 ありうる値の最大値はいくつですか。
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int score = 0;
    for (int i = K; i > 0; i--) {
        if (A > 0) {
            score++;
            A--;
        } else if (B > 0) {
            B--;
        } else {
            score--;
            C--;
        }
    }

    cout << score << endl;
}
 