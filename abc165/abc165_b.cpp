/**
 * B - 1%
 * https://atcoder.jp/contests/abc165/tasks/abc165_b
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // 高橋くんはAtCoder銀行に 100 円を預けています。
    // AtCoder銀行では、毎年預金額の 1%の利子がつきます(複利、小数点以下切り捨て)。
    // 利子以外の要因で預金額が変化することはないと仮定したとき、高橋くんの預金額が初めて X 円以上になるのは何年後でしょうか。
    long long X;
    cin >> X;

    long long  yen = 100;
    long long year = 0;
    while(yen < X) {
        yen *= 1.01;
        year++;
    }
    cout << year;
}
 