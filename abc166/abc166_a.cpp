/**
 * A - A?C
 * https://atcoder.jp/contests/abc166/tasks/abc166_a
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // コンテストには ABC と ARC の 2 つの種類があり、毎週どちらか一方が開催されます。
    // ABC が開催された次の週には ARC が開催され、ARC が行われた次の週には ABC が開催されます。
    // 先週開催されたコンテストを表す文字列 S が与えられるので、今週開催されるコンテストを表す文字列を出力してください。
    string S;
    cin >> S;

    // S は ABC または ARC
    cout << (S == "ABC" ? "ARC" : "ABC") << endl;
}
 