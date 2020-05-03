/**
 * D - Multiple of 2019
 * https://atcoder.jp/contests/abc164/tasks/abc164_d
 * TODO: 未完成
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1 から 9 までの数字のみからなる文字列 S が与えられます。
    string S;
    cin >> S;
    
    // 次のような条件を満たす整数の組 (i,j) (1≤i≤j≤|S|) の総数を求めてください。
    // 条件: Sの i 文字目から j 文字目までを 10 進法の整数としてみると、この整数は 2019 の倍数である。
    long long cnt = 0;
    long long sSize = S.size();
    for (long long i = 0; i <= sSize; i++) {
        for (long long j = sSize - i; j > 0; j--) {
            long long atai = stoll(S.substr(i, j));

            if (atai % 2019 == 0) {
                //cout << i << " " << j << " " << S.substr(i, j) << endl;
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
 