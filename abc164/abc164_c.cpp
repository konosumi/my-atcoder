/**
 * C - gacha
 * https://atcoder.jp/contests/abc164/tasks/abc164_c
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    // くじ引きを N 回行い、i 回目には種類が文字列 Siで表される景品を手に入れました。
    // 何種類の景品を手に入れましたか？
    int N;
    cin >> N;
    
    map<string, bool> mp;
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;
        mp[S] = true;
    }

    cout << mp.size() << endl;
}
 