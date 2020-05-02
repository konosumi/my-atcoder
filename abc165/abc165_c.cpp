/**
 * C - Many Requirements
 * https://atcoder.jp/contests/abc165/tasks/abc165_c
 */
#include <bits/stdc++.h>
using namespace std;

int N, M, Q;
vector<int> a(50);
vector<int> b(50);
vector<int> c(50);
vector<int> d(50);
 
int calcScore(vector<int> A) {
    int sum = 0;
    for (int i = 0; i < Q; i++) {
        // 配列の位置なので、1番目は0になる
        if (A.at(b.at(i) - 1) - A.at(a.at(i) - 1) == c.at(i)) {
            sum += d.at(i);
        }
   }
   return sum;
}
 
int main() {
    // 正整数 N , M , Q と、4 つの整数の組 ( ai , bi , ci , di ) Q 組が与えられます。
    // 以下の条件を満たす数列 A を考えます。
    // Aは、長さ Nの正整数列である。
    // 1≤A1≤A2≤⋯≤AN≤M
    // この数列の得点を、以下のように定めます。 
    // Abi−Aai=ci を満たすような i についての、 di の総和 (そのような i が存在しないときは 0)
    // A の得点の最大値を求めてください。
    cin >> N >> M >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
    }

    // 全パターンを検査する
    int highScore = 0;
    vector<int> A(10);
    for (int i1 = 1; i1 <= M; i1++) {
        A.at(0) = i1;
    for (int i2 = i1; i2 <= M; i2++) {
        A.at(1) = i2;
    for (int i3 = i2; i3 <= M; i3++) {
        A.at(2) = i3;
    for (int i4 = i3; i4 <= M; i4++) {
        A.at(3) = i4;
    for (int i5 = i4; i5 <= M; i5++) {
        A.at(4) = i5;
    for (int i6 = i5; i6 <= M; i6++) {
        A.at(5) = i6;
    for (int i7 = i6; i7 <= M; i7++) {
        A.at(6) = i7;
    for (int i8 = i7; i8 <= M; i8++) {
        A.at(7) = i8;
    for (int i9 = i8; i9 <= M; i9++) {
        A.at(8) = i9;
    for (int i10 = i9; i10 <= M; i10++) {
        A.at(9) = i10;
        int score = calcScore(A);
        if (score > highScore) {
            highScore = score;
        }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }

    cout << highScore << endl;
}
 