/**
 * D - Floor Function
 * https://atcoder.jp/contests/abc165/tasks/abc165_d
 */
#include <bits/stdc++.h>
using namespace std;

long long A, B, N;

long long calc(long long x) {
    long long floor1 = A * x / B;
    long long floor2 = x / B;
    return floor1 - A * floor2;
} 
 
int main() {
    // 整数 A, B, N が与えられます。
    cin >> A >> B >> N;
    // N 以下の非負整数 x に対する floor(Ax/B)−A×floor(x/B)の最大値を求めてください。
    // ただし、floor(t)とは、実数 t 以下の最大の整数のことを表します。

    long long keisu =  N / B;
    long long maxNum1 = calc(B * keisu - 1);
    long long maxNum2 = calc(N);
    cout << (maxNum1 > maxNum2 ? maxNum1 : maxNum2);
}
 