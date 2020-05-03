/**
 * A - Sheep and Wolves
 * https://atcoder.jp/contests/abc164/tasks/abc164_a
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // 羊が S 匹、狼が W匹います。
    // 狼の数が羊の数以上のとき、羊は狼に襲われてしまいます
    int S, W;
    cin >> S >> W;
    // 羊が狼に襲われるなら unsafe、襲われないなら safe を出力してください。
    cout << (W >= S ? "unsafe" : "safe") << endl;
}
 