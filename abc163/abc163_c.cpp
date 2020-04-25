/**
 * C - management
 * https://atcoder.jp/contests/abc163/tasks/abc163_c
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // N 人の社員からなる会社があり、各社員には 1,...,N の社員番号が割り当てられています。
    int N, A;
    cin >> N;

    // 部下の人数を保存する配列
    vector <int> buka(N, 0);
    for (int i = 0; i < N - 1; i++) {
        // i人目の上司番号がAに入る
        cin >> A;
        buka.at(A - 1) += 1;
    }

    for (int i = 0; i < N; i++) {
        cout << buka.at(i) << endl;
    }
}
 