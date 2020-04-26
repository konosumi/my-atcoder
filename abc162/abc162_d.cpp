/**
 * D - RGB Tripletsc
 * https://atcoder.jp/contests/abc162/tasks/abc162_d
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    // R, G, B のみからなる、長さ N の文字列 S があります。
    int N;
    string S;
    cin >> N >> S;

    // 以下の 2 つの条件をともに満たす組 (i, j, k) (1≤i<j<k≤N) の数を求めてください。
    // Si≠Sj かつ Si≠Sk かつ Sj≠Sk である
    // j−i≠k−j である
    long long r = 0, g = 0, b = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'R') {
            r++;
        } else if (S[i] == 'G') {
            g++;
        } else if (S[i] == 'B') {
            b++;
        }
    }

    // Si≠Sj かつ Si≠Sk かつ Sj≠Skとは、すべて異なる値となる
    // よって、RとGとBの組み合わせによって決まる
    long long cnt = r * g * b;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // j−i≠k−jを求めるのは大変なので「j - i = k - j」となるパターンを探して、総ヒットから除外する
            int k = 2 * j - i;
            if (k >= N) {
                continue;
            }

            // Si≠Sj かつ Si≠Sk かつ Sj≠Sk 
            if  (S[i] != S[j] && S[i] != S[k] && S[j] != S[k]) {
                cnt -= 1;
            }
        }
    }

    cout << cnt << endl;
}
