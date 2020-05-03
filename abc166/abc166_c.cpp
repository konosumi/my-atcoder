/**
* C - Peaks
 * https://atcoder.jp/contests/abc166/tasks/abc166_c
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // AtCoder丘陵には N 個の展望台があり、展望台 i の標高は Hi です。
    int N, M;
    cin >> N >> M;

    vector<int> H(N);
    map<int, bool> mp;
    for (int i = 0; i < N; i++) {
        cin >> H.at(i);
        mp[i] = true;
    }

    // また、異なる展望台どうしを結ぶ M 本の道があり、道 j は展望台 Aj と展望台 Bj を結んでいます。
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        if (H.at(A - 1) > H.at(B - 1)) {
            mp.erase(B - 1);
        } else if (H.at(A - 1) == H.at(B - 1)) {
            mp.erase(B - 1);
            mp.erase(A - 1);
        } else {
            mp.erase(A - 1);
        }
    }

    // 良い展望台がいくつあるか求めてください。
    cout << mp.size() << endl;
}
 