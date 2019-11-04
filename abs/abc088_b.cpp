/**
 * ABC088B - Card Game for Two
 * https://atcoder.jp/contests/abs/tasks/abc088_b
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // N枚のカード
  int N;
  cin >> N;

  // i 枚目のカードには, ai という数が書かれています
  vector <int>cards(N);
  for (int i = 0; i < N; i++) {
    cin >> cards.at(i);
  }

  int aliceScore = 0, bobScore = 0;
  for (int i = 0; i < N; i++) {
    // カードの中の最高スコアと、最高スコアのカードの位置
    int cardMaxScore = 0, cardMaxPos = 0;
    for (int pos = 0; pos < cards.size(); pos++) {
      if (cards.at(pos) > cardMaxScore) {
        cardMaxScore = cards.at(pos);
        cardMaxPos = pos;
      }
    }

    cards.erase(cards.begin() + cardMaxPos);
    // Aliceのスコアと、Bobのスコアを交互に加算する
    i % 2 == 0 ? aliceScore += cardMaxScore : bobScore += cardMaxScore;
  }

  cout << aliceScore - bobScore << endl;
 }
