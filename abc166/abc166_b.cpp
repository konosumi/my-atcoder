/**
 * B - Trick or Treat
 * https://atcoder.jp/contests/abc166/tasks/abc166_b
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // ある街に、N 人のすぬけ君(すぬけ君 1 、すぬけ君 2 、 ...、 すぬけ君 N )が住んでいます。
    int N, K;
    cin >> N >> K;

    map<int, bool> mp;
    for (int i = 0; i < K; i++) {
        int d;
        cin >> d;

        for (int j = 0; j < d; j++) {
            int A;
            cin >> A;
            mp[A] = true;
        }
    }

    // 高橋君は今からこの街を回り、お菓子を 1 つも持っていないすぬけ君にいたずらをします。このとき、何人のすぬけ君がいたずらを受けるでしょうか。
    cout << N - mp.size() << endl;
}
 