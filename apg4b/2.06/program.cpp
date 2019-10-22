/**
キーポイント

プログラムを実行するときには処理内容に応じた実行時間がかかる
コンピュータの記憶領域(メモリ)は有限であり、プログラムで変数を使用した分だけメモリを消費する
プログラムの実行時間・メモリ使用量が入力に応じてどのように変化するかを見積もったものを、それぞれ時間計算量・空間計算量という
計算量の表記にはオーダー記法を用いることが多い
*/
/*

時間計算量
「プログラムの実行に必要な計算のステップ数が入力に対してどのように変化するか」という指標を時間計算量といいます。 計算ステップ数とは、四則演算や数値の比較などの回数です。


空間計算量

「プログラムの実行に必要なメモリの量が入力に対してどのように変化するか」という指標を空間計算量といいます。
*/

/*

int main() {
  int N;
  cin >> N;
  int sum = 0;
  for (int i = 1; i <= N; i++) {
    sum += i;
  }
  cout << sum << endl;
}

このプログラムではfor文でN回の繰り返し処理を行っているので、計算ステップ数は入力のNに応じて変わります。 N回の繰り返しを行うので、計算ステップ数はおおよそN回になります。 このときの時間計算量は次で紹介するオーダー記法を用いてO(N)と表します。

このプログラムで使用している変数は入力のNに関わらずint Nとint sumとint iの3つです。 このときの空間計算量はオーダー記法を用いてO(1)と表します。
*/
/*

オーダー記法

厳密な計算ステップ数や必要な記憶領域の量は実装に用いるプログラミング言語や実装方法などによって変わるので、 計算量を厳密に見積もるのは大変です。

そこで時間計算量や空間計算量の表現として、オーダー記法 O(⋅)

が用いられることが多いです。

例えば、3N2+7N+4
という式はオーダー記法ではO(N2)と表されます。

以下の手順によってオーダー記法による表記を得ることができます。

ステップ1：係数を省略する。ただし定数については1とする。
ステップ2：N

を大きくしたときに一番影響が大きい項を取り出し、O(項)と書く。

「一番影響が大きい項」というのは、Nを大きくしていったときに「大きくなるスピードが最も速い項」と考えてください。 例えばNとN2を比較すると、以下の表のようになるので3N2の方が影響が大きいといえます。
*/

/*
このように、 簡単なアルゴリズムであれば厳密な式を求めなくても 「N回の繰り返し処理があるからO(N)」や「0からNまで回す2重ループがあるからO(N2)」 などと見積もることができます。
*/

/*
O(logN)

初めに簡単にlogを説明します。
logxNという式は「xを何乗したらNになるか」を表します。 例えば、24=16なので、log2 16=4です。

次の図を見てください。長さ8の棒を長さが1になるまで半分に切る(2で割る)ことを繰り返したときに切る回数はlog2 8回です。

このように計算量に出てくるlog

は「半分にする回数」を表すことが多いです。

logN
はNに対して非常に小さくなるので、計算量の中にO(logN)が出てきた場合でも実行時間にそこまで影響しないことが多いです。 具体的な値が知りたい場合は、Google検索で「log_2 値」のように検索することで確認できます。

、オーダー記法ではlogの底は省略して書かれることが多いです。この場合は2が省略されていると考えましょう。

*/

/*
計算量のおおまかな大小

主な計算量の大まかな大小は次のようになります。
O(1)<O(logN)<O(N)<O(NlogN)<O(N2)<O(2N)

AtCoderの問題では実行時間制約が2秒くらいであることが多いです。 コンテストに参加する人は、1秒あたり108回くらいの計算ができることを覚えておきましょう。
*/

#include <bits/stdc++.h>
using namespace std;
 
int f0(int N) {
  return 1;
}
 
int f1(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    s++;
  }
  for (int i = 0; i < M; i++) {
    s++;
  }
  return s;
}
 
int f2(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
      int t = N;
      int cnt = 0;
      while (t > 0) {
        cnt++;
        t /= 2;
      }
      s += cnt;
  }
  return s;
}
 
 
int f3(int N) {
  int s = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      s++;
    }
  }
  return s;
}
 
int f4(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      s += i + j;
    }
  }
  return s;
}
 
int f5(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      s += i + j;
    }
  }
  return s;
}
 
int main() {
  int N, M;
  cin >> N >> M;
 
  int a0 = -1, a1 = -1, a2 = -1, a3 = -1, a4 = -1, a5 = -1;
 
  // 計算量が最も大きいもの1つだけコメントアウトする
  a0 = f0(N); // O(1)
  a1 = f1(N, M); // O(N or M)
  a2 = f2(N); // O(NlogN)
  a3 = f3(N); // O(1)
  //a4 = f4(N); // O(NN)
  a5 = f5(N, M);  // O(NM)
 
  cout << "f0: " << a0 << endl;
  cout << "f1: " << a1 << endl;
  cout << "f2: " << a2 << endl;
  cout << "f3: " << a3 << endl;
  cout << "f4: " << a4 << endl;
  cout << "f5: " << a5 << endl;
}