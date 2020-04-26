/**
 * A - Lucky 7
 * https://atcoder.jp/contests/abc162/tasks/abc162_a
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 3 桁の整数 N が与えられます。N のいずれかの桁に数字の 7は含まれますか？
    // 含まれるなら Yes を、含まれないなら No を出力してください。
    string N;
    cin >> N;
    for (int i = 0; i < N.size(); i++) {
        if (N[i] == '7') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}
