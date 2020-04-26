/**
 * C - Sum of gcd of Tuples (Easy)
 * https://atcoder.jp/contests/abc162/tasks/abc162_c
 */
#include <bits/stdc++.h>
using namespace std;

// 最大公約数を求める
int gcd (int a, int b, int c) {
    int minNum = min(min(a, b), c);
    int maxDivisor = 1;
    for (int i = 2; i <= minNum; i++) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            maxDivisor = i;
        }
    }

    return maxDivisor;
}

int main() {
    // ∑a=1K∑b=1K∑c=1gcd(a,b,c) を求めてください。
    // ただし、gcd(a,b,c) は a,b,c の最大公約数を表します。
    int K;
    cin >> K;

    int sum = 0;
    for (int a = 1; a <= K; a++) {
        for (int b = 1; b <= K; b++) {
            for (int c = 1; c <= K; c++) {
                sum += gcd(a, b, c);
            }
        }
    }

    cout << sum << endl;
}
