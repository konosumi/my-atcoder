/**
 * A - We Love Golf
 * https://atcoder.jp/contests/abc165/tasks/abc165_a
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // ジャンボ高橋君の目標は飛距離を K の倍数にすることですが、ジャンボ高橋君の出せる飛距離の範囲は A 以上 B 以下です。
    int K;
    cin >> K;
    int A, B;
    cin >> A >> B;

    // 目標の達成が可能であれば OK と、不可能であれば NG と出力せよ。
    for (int i = A; i <= B; i++) {
        if (i % K == 0) {
            cout << "OK";
            return 0;
        }
    }

    cout << "NG";

}
 