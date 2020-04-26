/**
 * D - Sum of Large Numbers
 * https://atcoder.jp/contests/abc163/tasks/abc163_d
 */
#include <bits/stdc++.h>
using namespace std;

// 和としてあり得るものの個数を mod(109+7) で出力せよ。
long long mod = 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 + 7;
 
int main() {
    // 10100, 10100+1, ..., 10100+N の N+1 個の数があります。
    // この中から K 個以上の数を選ぶとき、その和としてあり得るものの個数を mod(109+7) で求めてください。
    long long N, K;
    cin >> N >> K;

    long long pattern = 0;
    for (long long i = K; i <= N + 1; i++) {
        // 最大の数と最小の数を求める
        // 最大と最小の間は、すべての値をとることができる
        // min = 0,1,2...i - 1;
        // long long min = i * (i - 1) / 2;
        // min = N,N-1...N - i + 1;
        // long long max = i * (2 * N - i + 1) / 2;
        // cout << i << " "  << min << " " << max << endl;

        // 途中の計算省略過程
        // pattern += ((i * (2 * N - i + 1) - (i * (i - 1)) / 2) + 1;
        // pattern += ((2 * N * i - i * i + i) - (i * i - i)) / 2) + 1;
        // pattern += (2Ni - ii + i - ii + i) / 2) + 1;

        pattern += (N - i + 1) * i + 1;
        pattern = pattern % mod;
    }

    cout << pattern << endl;
}
 