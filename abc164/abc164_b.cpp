/**
 * B - Battle
 * https://atcoder.jp/contests/abc164/tasks/abc164_b
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // 高橋君と青木君がモンスターを闘わせます。
    // 高橋君のモンスターは体力が A で攻撃力が B です。
    // 青木君のモンスターは体力が C で攻撃力が D です
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    // 高橋君→青木君→高橋君→青木君→... の順に攻撃を行います。
    for (int i = 0; i < 100; i++) {
        // 高橋くんの攻撃
        C -= B;
        // 高橋君が勝つなら Yes、負けるなら No を出力せよ。
        if (C <= 0) {
            cout << "Yes" << endl;
            return 0;
        }
        // 青木くんの攻撃
        A -= D;
        if (A <= 0) {
            cout << "No" << endl;
            return 0;
        }
    }
}
 