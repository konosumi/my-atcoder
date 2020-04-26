/**
 * B - FizzBuzz Sum
 * https://atcoder.jp/contests/abc162/tasks/abc162_b
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    // FizzBuzz列の N 項目までに含まれる数の和を出力せよ。
    long long N;
    cin >> N;

    long long sum = 0;
    for (long long i = 1; i <= N; i++) {
        // i が 3 でも 5 でも割り切れるなら、ai=FizzBuzz
        // そうではなく i が 3 で割り切れるなら、ai=Fizz
        // そうではなく i が 5 で割り切れるなら、ai=Buzz
        if (i % 3 == 0 || i % 5 == 0) {
            continue;
        }

        sum += i;
    }

    cout << sum << endl;
}
