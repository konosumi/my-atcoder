/**
 * B - Homework
 * https://atcoder.jp/contests/abc163/tasks/abc163_b
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // 高橋君の夏休みは N 日間です。
    // 夏休みの宿題が M 個出されており
    int N, M;
    cin >> N >> M;

    // i 番目の宿題をやるには Ai 日間かかります。
    int A;
    for (int i = 0; i < M; i++) {
        // 宿題にA日かかるため、夏休みの遊べる日数がA日減る
        cin >> A;
        N -= A;

        // 夏休み中に全ての宿題を終わらせることができないときは、かわりに -1 を出力してください
        if (N < 0) {
            cout << "-1" << endl;
            return 0;
        }
    }

    cout << N << endl;
}
 