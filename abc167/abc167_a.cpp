/**
 * A - Registration
 * https://atcoder.jp/contests/abc167/tasks/abc167_a
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // まずIDを S として登録しようとしました。しかし、このIDは既に他のユーザーによって使用されていました。
    // そこで、高橋君は S の末尾に 1 文字追加した文字列をIDとして登録することを考えました。
    string S, T;
    cin >> S >> T;

    for (int i = 0; i < T.length() - 1; i++) {
        if (S[i] != T[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
 