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
    // vector<long long>HND(N + 1, 0);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
        // HND.at( A.at(i) )++; 
    }

    // 最多出現の値を求める
    /*
    long long maxA = 0;
    long long maxHND = 0;
    for (int i = 0; i < N + 1; i++) {
        if (HND.at(i) > maxHND) {
            maxHND = HND.at(i);
            maxA = i;
        }
    }
    */

    long long place = 1;
    vector<long long>HND(N + 1, 0);
    long long kaisuu = 0;
    for (long long i = 1; i <= K; i++) {
        place = A.at(place - 1);
        kaisuu++;
        if (HND.at(place) == 0) {
            HND.at(place) = kaisuu;
        } else if (HND.at(place) > 0) {
            long long loopcnt = kaisuu - HND.at(place);
            i += ((K - i) / loopcnt) * loopcnt;
            // cout << "koko";
        }
    }
    cout << place << endl;
 

  /*
    long long place = 1;
    long long kaisuu = 0;
    long long maxAkai = 0;
    long long syokai = 0;
    for (long long i = 0; i < K; i++) {
        place = A.at(place - 1);
        if (place == maxA) {
            maxAkai++;
        }
 
        if (maxAkai == 0) {
            syokai++;
        } else if (maxAkai == 1) {
            kaisuu++;
        } else if (maxAkai == 2) {
            i = syokai + ((K - syokai) / kaisuu) * kaisuu;
            maxAkai++;
        }
    }
    cout << place << endl;
    */
    // cout << score << endl;
}
 