/**
 * D - Sum of Large Numbers
 * https://atcoder.jp/contests/abc163/tasks/abc163_d
 *
 * TODO: 未完成です 
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // 10100, 10100+1, ..., 10100+N の N+1 個の数があります。
    // この中から K 個以上の数を選ぶとき、その和としてあり得るものの個数を mod(109+7) で求めてください。
    int N, K;
    cin >> N >> K;

    long long pattern = 0;
    for (int i = K; i <= N + 1; i++) {
        long long saidai = 0, saisyou = 0;

        for (int cnt = 0; cnt < i; cnt++) {
            saidai += N - cnt;
            saisyou += cnt;
        }
        // cout << i << " "  << saidai << " " << saisyou << endl;
        pattern += saidai - saisyou + 1;
    }

    cout << pattern << endl;
}
 