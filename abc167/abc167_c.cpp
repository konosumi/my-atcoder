/**
 * C - Skill Up
 * https://atcoder.jp/contests/abc167/tasks/abc167_c
 */
#include <bits/stdc++.h>
using namespace std;

int N, M, X;

vector<int>CP(14);
vector<vector<int>> CA(14, vector<int>(14));
vector<bool>KAU_KAWANAI(14, false);

int calcPrice() {
    int price = 0;
    for (int i = 0; i < N; i++) {
        if (KAU_KAWANAI.at(i)) {
            price += CP.at(i);
        }
    }

// int k = 0;
    for (int i = 0; i < M; i++) {
        int syujyukudo = 0;
        for (int j = 0; j < N; j++) {
            if (KAU_KAWANAI.at(j)) {
                syujyukudo += CA.at(j).at(i);
            }
        }
//        k++;

        if (syujyukudo < X) {
            return INT_MAX;
        }
// cout << i << " " <<  syujyukudo << endl;
    }

// cout << M << " " <<  k << " " <<  price << endl;
    return price;
}

int saiki(int i) {
    int minPrice = calcPrice();
    if (i < N) {
        KAU_KAWANAI.at(i) = true;
        minPrice = min(minPrice, saiki(i+1));

        KAU_KAWANAI.at(i) = false;
        minPrice = min(minPrice, saiki(i+1));
    }

    return minPrice;
}
 
int main() {
    // 高橋くんが書店に行くと、N 冊の参考書が売っていました。i 番目の参考書 (1≤i≤N) は Ci 円で売られていて、購入して読むことで、各 j (1≤j≤M) について j 番目のアルゴリズムの理解度が Ai,j 上がります。
    // また、それ以外の方法で理解度を上げることはできません。
    cin >> N >> M >> X;

    // vector<int>CP(N);
    // vector<vector<int>> CA(N, vector<int>(M));
    // vector<vector<int>(M)>CA(N);
    for (int i = 0; i < N; i++) {
        // 値段
        cin >> CP.at(i);
        for (int j = 0; j < M; j++) {
            // アルゴリズムの理解度
            cin >> CA.at(i).at(j);
        }
    }

    int minPrice = saiki(0);
    cout << (minPrice == INT_MAX ? -1 : minPrice) << endl;
}
 