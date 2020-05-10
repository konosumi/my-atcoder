/**
 * D - Teleporter
 * https://atcoder.jp/contests/abc167/tasks/abc167_d
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // 高橋王は正の整数 K が好きです。わがままな高橋王は、町 1 から出発してテレポーターをちょうど K 回使うと、どの町に到着するかが知りたいです。
    // 高橋王のために、これを求めるプログラムを作成してください。
    long long N, K;
    cin >> N >> K;

    vector<long long>A(N);
    // long long minA = INT_MAX;
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
        // if (A.at(i) < minA) {
        //     minA = A.at(i);
        // }
    }

    long long place = 1;
    for (int i = 0; i < K; i++) {
        place = A.at(place - 1);
    }
    cout << place << endl;
    // cout << score << endl;
}
 